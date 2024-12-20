//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
int findSubstring(string s){
        vector<int> map(128,0);
        int counter; // check whether the substring is valid
        int begin=0, end=0; //two pointers, one point to tail and one  head
        int d; //the length of substring

        for() { /* initialize the hash map here */ }

        while(end<s.size()){

            if(map[s[end++]]-- ?){  /* modify counter here */ }

            while(/* counter condition */){ 
                 
                 /* update d here if finding minimum*/

                //increase begin to make it invalid/valid again
                
                if(map[s[begin++]]++ ?){ /*modify counter here*/ }
            }  

            /* update d here if finding maximum*/
        }
        return d;
  }
    int countPalindromicSubstrings(string s, int k)
    {
        // code here
        int count = 0;
        for (size_t i = 0; i < n; i++)
        {
            string t = s.substr(i, k), x;
            reverse_copy(t.begin(), t.end(), x.begin());
            if (t == x)
            {
                count++;
            }
            // deb(s[i]);
            // deb2(s[i+1],s[i+2]);
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        string s;
        cin >> s;

        int k;
        cin >> k;

        Solution obj;
        int res = obj.countPalindromicSubstrings(s, k);

        cout << res << endl;
    }
}

// } Driver Code Ends