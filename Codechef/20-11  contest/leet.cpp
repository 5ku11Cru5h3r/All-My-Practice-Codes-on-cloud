#include<bits/stdc++.h>
using namespace std;
//Copu from here

#define  fastt       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
 
#define  md         1000000007
#define  pi         acos(-1.0)
#define  cos(a)     cos(a*pi/180)
#define  sin(a)     sin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  cosi(a)    acos(a)/(pi/180)
#define  sini(a)    asin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)
 
#define  vl         vector <ll>
#define  vs         vector <string>
#define  vc         vector <char>
#define  vpll       vector < pair <ll, ll> >
#define  vpsl       vector < pair <string, ll> >
#define  vpls       vector < pair <ll, string> >
#define  mll        map<ll,ll>
#define  mset       multiset<ll>
#define  mcl        map<char,ll>
#define  pql        priority_queue<ll>
#define  minpql     priority_queue<ll,vector<ll>,greater<ll> >
 
#define  setbits(x)     __builtin_popcountll(x)
#define  zerobits(x)    __builtin_ctzll(x)
 
#define toll(a) atoll(a.c_str())
 
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        bool arr[m][n];
        memset(arr,0,sizeof(arr));
        for(auto &i:walls){
            arr[i[0]][i[1]]=1;
        }
        for(auto &i:guards){
            ll r=i[0],col=i[1];
            for(int i=0;i<m;i++){
                if(arr[i][col]==0){
                    arr[i][col]=1;
                }
            }
            for(int i=0;i<n;i++){
                if(arr[r][i]==0){
                    arr[r][i]=1;
                }
                else{
                    break;
                }
            }
        }
        ll countz=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // if(arr[i][j]==0){
                //     countz++;
                // }
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return countz;
    }
};
int main()
{
    string s="hello";
    string x=s.substr(0,2);
    int arr[28];
    memset(arr,0,sizeof(arr));
    Solution obj;
    // Uncomment and write function name 
    int m; int n;
    cin>>m>>n;
    vector<vector<int>> walls(3,vector<int>(2));
    vector<vector<int>> guards(3,vector<int>(2));
    for (auto &&i : walls)
    {
        cin>>i[0]>>i[1];
    }
    for (auto &&i : guards)
    {
        cin>>i[0]>>i[1];
    }
    
    cout<<obj.countUnguarded(m,n,guards,walls)<<endl;
    return 0;
}