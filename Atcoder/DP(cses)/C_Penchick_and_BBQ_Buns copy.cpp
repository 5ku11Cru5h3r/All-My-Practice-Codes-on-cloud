#include <bits/stdc++.h>

using namespace std;

#define int long long


const string s = "15 1 2 2 3 3 4 4 5 5 1 6 6 7 7 8 8 9 9 10 10 11 11 12 12 15 1 ";

signed main()
{
  ios :: sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin >> tc;
  while(tc-- > 0)
  {
    int n;
    cin >> n;
    if(n % 2 != 0 && n <= 26)
    {
      cout << "-1\n";
      continue;
    }
    else if(n % 2 == 0)
    {
      int to = n / 2;
      for(int i = 1;i <= to;++i)
      {
        cout << i << ' ' << i << ' ';
      }
      continue;
    }
    else
    {
      cout << s;
      n -= 27;
      for(int i = 0;i < n / 2;++i)
      {
        int cur = 16 + i;
        cout << cur << ' ' << cur << ' '; 
      }
    }
  }
  return 0;
}