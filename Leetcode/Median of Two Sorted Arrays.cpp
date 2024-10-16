#include "bits/stdc++.h"
using namespace std;

class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        int n=nums1.size(),m=nums2.size(),t=m/2+n/2;
        int p1=0,p2=0,first_median=0,second_median=0;
        while (t--)
        {
            /* code */
            (nums1[p1]<nums2[p2])?p1++:p2++;
        }
        first_median=min(nums1[p1],nums2[p2]);
        if ((n+m)%2==0)
    }
};