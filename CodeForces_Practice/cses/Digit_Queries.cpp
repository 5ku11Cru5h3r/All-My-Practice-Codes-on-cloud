/*
        ||| OM SARASWATI NAMASTUBYAM 
            VARDE KAMRUPINI ||| 
            VIDHYARAMBHAM KARISHYAMI
            SIDDIRBHAVATU MEI SADA |||
*/
#include "bits/stdc++.h"
using namespace std;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void solve(){
    long long n=1;
    long long m=0;
    long long digit{1},base{9};
    cin>>n;
    while (n-digit*base>0)
    {
        /* code */
        n-=digit*base;
        base*=10;
        digit++;
    }
    long long inx=n%digit;
    n=binpow(10,digit-1)+(n-1)/digit;
    // deb2(n,digit);
    if(inx!=0){
        n=n/binpow(10,digit-inx);
    }
    cout<<n%10<<'\n';
}
 
int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
