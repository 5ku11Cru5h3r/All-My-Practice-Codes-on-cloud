/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM 
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
// #define  fastt       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  ll         long long
#define  inf        1000000000000000000
#define  pb         push_back
#define  mp         make_pair
#define  sz(a)      a.size()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define  clr(x)     x.clear()
#define  fff         first
#define  sss        second
#define  case(x)    cout << "Case " << x <<": "
#define all(x)      x.begin(), x.end()
#define srt(x)      sort(all(x))
 
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl


bool _(string s,ll m){
    if (m<0) return 0;
    if(m>=s.size()-3) return 0;
    if(s[m]=='1' and s[m+1]=='1' and s[m+2]=='0' and s[m+3]=='0'){
        return 1;
    }
    return 0;
}
int main()
{
    // fastt;
    ll t=1;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        ll count=0,n;
        for (size_t i = 0; i < sz(s); i++)
        {
            /* code */
            count+=_(s,i);
        }
        // deb2(s,count);
        cin>>n;
        while (n--)
        {
            ll i,j;
            cin>>i>>j;
            i--;
            if (s[i]!='0'+j)
            {
                bool bef=_(s,i-3)||_(s,i-2)||_(s,i-1) || _(s,i);
                s[i]='0'+j;
                // deb(s);
                bool aft=_(s,i-3)||_(s,i-2)||_(s,i-1) || _(s,i);
                count+=(aft-bef);
            }
           printf(count ? "YES\n" : "NO\n");
        }
        
        // vpls v(n);
        // for (auto &[i,j]: v) cin >> i>>j;
        // deb(v);
        
        // ss=s;
        // for (auto &&[i,j] : v)
        // {
        //     s[i-1]=j;
            // if(s.find("1100")!=string::npos){
            //     cout<<"YES"<<endl;
            // }
            // else
            // {
            //     cout<<"NO"<<endl;
            // }


        // }
        
    }
    return 0;
}