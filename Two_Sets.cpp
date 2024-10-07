
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum_of_all{n*((n+1)*0.5)};
    vector<int> v,vv;
    if(sum_of_all%2==0){
        cout<< "YES" <<endl;
        long long check=sum_of_all*0.5;
        for (int i = n; i >= 1; i--)
        {
            /* code */
            if((check-i)>=0){
                v.push_back(i);
                check=check-i;
            }
            else{
                vv.push_back(i);
            }
        }
        cout<< v.size() <<endl;
        for (auto &&i : v)
        {
            cout<< i <<' ';
        }
        cout <<endl;

        cout<< vv.size() <<endl;
        for (auto &&j : vv)
        {
            cout<< j <<' ';
        }
        cout <<endl;
    }
    else
    {
        cout<< "NO" <<endl;
    }
    
}
