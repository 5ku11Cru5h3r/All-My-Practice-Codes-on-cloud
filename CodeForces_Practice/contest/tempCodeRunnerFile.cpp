#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define ll long long
#define all(x)      x.begin(), x.end()
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
    vector<bool> isPrime (1e6 + 1, true);

class Solution {
public:
    void fill () {
        isPrime [0] = isPrime [1] = false;
        for (int i = 2; i * i <= 1e6; ++i) {
            if (isPrime [i]) {
                for (int j = i * i; j <= 1e6; j += i)
                    isPrime [j] = false;
            }
        }
    }

    int minJumps(vector<int>& nums) {
        if (isPrime[0]) fill();
        int n = nums.size();
        unordered_map <int,vector <int>> mp;
        for (auto &&i : mp)
        {
            cout << i.first << " : ";
            for (auto &&j : i.second) {
                cout << j << " ";
            }
            cout << endl;
        }
        
        for (int i = 0; i < n; i++) mp[nums[i]].push_back(i);
        
        vector <int> dist (n, -1);

        queue <int> qu;
        qu.push(0); dist[0] = 0;
        unordered_set <int> used;

        while (qu.empty() == false) {
            int node = qu.front();
            qu.pop();

            if (node - 1 >= 0 && dist[node-1] == -1) {
                qu.push(node-1);
                dist[node-1] = dist[node] + 1;
            }
            if (node + 1 < n && dist[node+1] == -1) {
                qu.push(node+1);
                dist[node+1] = dist[node] + 1;
            }

            if (isPrime[nums[node]] == false || used.contains(nums[node])) continue;

            for (int i = 1;; i++) {
                if (i*nums[node] > 1e6) break;
                if (mp.contains(i*nums[node]) == false) continue;
                for (auto it : mp[i*nums[node]]) {
                    if (dist[it] != -1) continue;
                    qu.push(it);
                    dist[it] = dist[node] + 1;
                }
            }
           
            used.insert(nums[node]);
        }
        return dist.back();
    }
  
vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector ans(n,1);
        vector last(31,0);
        for (int i = 0; i < n; i++)
        {
            for (size_t j = 0; j < 31; j++)
            {
                /* code */
                if((nums[i]&(1<<j))==1)  last[j]=i;
                ans[i]= max(ans[i],last[j]-i-1);
            }
        }
        return ans;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // vector<pair<int,int>> vp;
        int n=cost.size();
        int total_gas=0;
        int total_cost=0;
        for(int i=0;i<n;i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
        }
        if(total_gas<total_cost) return -1;
        // vector<int> v;
        int curr=0;
        int index=0;
        for (size_t i = 0; i < n; i++)
        {
            curr+=gas[i]-cost[i];
            if(curr<0){
                curr=0;
                index=i;
            }
        }
        return index;
    }
    int candy(vector<int>& v) {
        int n=v.size();
        vector<int>  vv(n,1);
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1]) vv[i+1]=vv[i]+1;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            if(v[i]<v[i-1]) vv[i-1]=vv[i]+1;
        }
        return accumulate(vv.begin(),vv.end(),0);
    }
    int trap(vector<int>& v) {
        int n=v.size(),water =0;
        int leftmax=INT_MIN;
        int rightmax=INT_MIN;
        int left=0 ,right=n-1;
        while(left<right){
            leftmax=(v[left],leftmax);
            rightmax=(v[right],rightmax);
            water+=leftmax-v[left];
            water+=rightmax-v[right];
            if(leftmax<=rightmax) left++;
            else right--;
        }
        return water;
    }
    string reverseWords(string s) {
        int n=s.size();
        int i=0,j=0,k=0;
        reverse(s.begin(),s.end());
        while(i<n){
            while(i<n and s[i]==' ') i++;
            j=i;
            while(j<n and s[j]!=' ') j++;
            k=j;
            j--;            
            reverse(s.begin()+i,s.begin()+j);
            i=k;
        }
        for (size_t i = 0; i < n; i++)
        {
            if(s[i]==' ' and ((i>0 and s[i-1]==' ') or (i<n-1 and s[i+1]==' '))) s.erase(i,1);
        }
        
        return s;
    }
    
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        for (size_t i = 0; i < n-m+1; i++)
        {
            if(haystack.substr(i,m)==needle) return i;
        }
        return -1;
        
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        string s;
        int sum=0;
        auto it=words.begin();
        while(sum<=maxWidth){
            sum+=(*it).size();
            sum++;
            if(sum<=maxWidth) s.append(*it + ' ');
        }
        
        return ans;
    }
    bool isPalindrome(string s) {
        string ss;
        for(auto &i:s){
            if(isalnum(i)) ss.push_back(tolower(i));
        }
        int l=0,r=ss.length()-1;
        while(l<r){
            if(ss[l++]!=ss[r--]) return 0;
        }
        return 1;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>> v;
    set<vector<int>> s;
        for (size_t i = 1; i < nums.size()-1; i++)
        {
            int r=n-1,l=0,m;
            while (r<l)
            {
                /* code */
                
            }
            
        }
        
    }
    // ================================== take ip/op like vector,pairs directly!==================================

    int lengthOfLongestSubstring(string s) {
        int maxlength=INT_MIN;
        int left=0,right=0;
        vector<int> v(128,0);
        vector<int> x;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(v[s[i]]>0){
                x.push_back(v[s[i]]);
            }
            v[s[i]]=i+1;
        }    
        cout<<x<<endl;
    }

    int minRemoval(vector<int>& v, int k) {
        if(v.size()<2)return 0;
        sort(v.begin(),v.end());
        int l=0,maxx=1;
        for (int r = 0; r < v.size(); r++)
        {
            /* code */
            while (v[r]>k*v[l])
            {
                l++;
            }
            maxx=max(maxx,r-l+1);
        }
        return v.size()-maxx;
    } 
    // }©leetcode
    int earliestFinishTime(vector<int>& l_st , vector<int>& l_d, vector<int>& w_st, vector<int>& w_d) {
        int n=l_st.size(),m=w_st.size();
        vector<pair<int,int>> v,vv;
        for (size_t i = 0; i < n; i++)
        v.push_back({l_st[i],l_d[i]});
        for (size_t i = 0; i < m; i++)
        vv.push_back({w_st[i],w_d[i]});
        auto x=*min_element(v.begin(),v.end());
        auto y=*min_element(vv.begin(),vv.end());
        int ans=0;
        if(x.first<y.first){
            ans+=x.first+x.second;
            int minans=INT_MAX;
            for (size_t i = 0; i < m; i++)
            {
                /* code */
                if(vv[i].first<=ans){
                    minans=min(minans,ans+vv[i].second);
                }
            }
            ans=minans;
        }
        else{
            ans+=y.first+y.second;
            int minans=INT_MAX;
            for (size_t i = 0; i < n; i++)
            {
                /* code */
                if(v[i].first<=ans){
                    minans=min(minans,ans+v[i].second);
                }
            }
            ans=minans;
        }
        return ans;
    }
    // }©leetcode
    struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
     vector<vector<int>> bfs(TreeNode * root){
        vector<vector<int>> v;
        vector<int> vv;
        deque<pair<TreeNode *,int>> q;
        if(root)q.push_back({root,0});
        // int i=0;
        while (!q.empty())
        {
            TreeNode* x=q.front().first;
            int i=q.front().second;
            if (v.size() <= i) v.push_back({});
            v[i].push_back(x->val);
            q.pop_front();
            if(x->left)q.push_back({x->left,i+1});
            if(x->right)q.push_back({x->right,i+1});
        }
        return v;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vv;
        vector<vector<int>> v=bfs(root);
        for(auto &i:v){
            vv.push_back(i.back());
        }
        return vv;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution sol;
    vector<int> v(4);
    cin>>v;
    cout << sol.minJumps(v)<< endl; // Example usage
    return 0;
}