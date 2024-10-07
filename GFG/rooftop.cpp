//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        vector<int> newarr(arr.size(),0);
        for (size_t i = 1; i < arr.size(); i++)
        {
            /* Prefix difference */
            // cout<< arr[i]<<arr[i-1] <<endl;
            newarr[i]=(arr[i]-arr[i-1]>0)?1:-1;
        }
        // for(int i:newarr)cout<< i <<' ';
        bool flag{0};
        int count{0},maxcount{0};
        for (auto &&i :newarr)
        {
            if(i==1 and flag==1) count++;
            else if(i==1){
                flag=1;
                count=1;
            }
            else
            {
                flag=0;
            }
            maxcount=max(maxcount,count);
        }
        
        return maxcount;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends