#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        priority_queue<pair<int, char>> pq;
        if (a > 0) pq.push({a, 'a'});
        if (b > 0) pq.push({b, 'b'});
        if (c > 0) pq.push({c, 'c'});

        string result = "";

        while (!pq.empty()) {

            auto [x, y] = pq.top();
            pq.pop();


            if (result.size() >= 2 && result.back() == y && result[result.size() - 2] == y) {
                if (pq.empty()) break;  // No valid characters left.

                auto [xx, yy] = pq.top();
                pq.pop();

                result += yy;
                xx--;

                if (xx > 0) pq.push({xx, yy});

                
                pq.push({x, y});
            } else {
                
                result += y;
                x--;

                if (x > 0) pq.push({x, y});
            }
        }

        return result;
    }
};