#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    int countMaxOrSubsets(vector<int>& v) {
        int _ = 0,__=0;
        for(auto i:v){
            _|=i;
        }
        
        return __;
    }
};