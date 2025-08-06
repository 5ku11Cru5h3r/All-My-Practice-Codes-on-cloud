#include "bits/stdc++.h"
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector v(n,0);
  for(auto &i:v) cin >>i;
  long sum=accumulate(v.begin(),v.end(),0);
  cout<<(sum<=m?"Yes":"No")<<endl;
}w