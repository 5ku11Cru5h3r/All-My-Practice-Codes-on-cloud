#include <bits/stdc++.h>
using namespace std;
class Solution {


public:
    long long maxKelements(vector<int>& v, int k) {
        long long score{0};
        priority_queue<int> pq;
        for (auto &&i : v)
        {
            pq.emplace(i);
        }
        while (k--)
        {
            score+=pq.top();
            int ne=ceil(pq.top()/3);
            pq.pop();
            pq.emplace(ne);
        }
        return score;
    }
};
