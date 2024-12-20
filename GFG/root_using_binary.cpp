//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
    // base cases
    if(n==1 or n==0) return n;
    //define first pointer from 1 to n/2 as root(n) will always be less than n/2
    int first=1 , last =n/2,mid,ans;
    while(first<last){
        mid=first+(last-first)/2;

        float sqr=mid*mid;//Binary Search for the element
        if (n==floor(sqr))
        {
            /* code */
            return mid;
        }
        if (n<sqr){
            last=mid-1;
            ans=mid;
        }
        else {
            first= mid+1;
        }
    }
    return ans;
}
};


int main() {
    int t;
    cin >> t; //100
    while (t--) {
        long long n;
        cin >> n; //1-100
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}
//num-1 timeout-2000