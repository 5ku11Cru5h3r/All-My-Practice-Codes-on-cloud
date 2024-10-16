#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    long long minimumSteps(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int_fast64_t count=0,sum=0;
        bool flag{1};
        for (int i = s.size() - 1,j=i; i >= 0; i--)
        {
            if (s[i]=='0')
            {
                count++;
                flag=0;
            }
            else
            {
                if(flag==0){
                sum+=count;
                }
            }
            
        }
        return sum;    
    }
};
int main(){
    Solution obj;
    obj.minimumSteps("0110001111000000000000");
}