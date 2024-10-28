#include "bits/stdc++.h"
using namespace std;

//Paste the code here

// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
/*
 * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<int> sums;
        vector<pair<TreeNode*,int>> q;
        auto index=q.begin();
        root->val=0;
        if(root)q.push_back({root,0});
        while(index!=q.end()){
            long long n=q.size(),sum=0;
            for(long long i=0;i<n;i++){
                auto f=(*index).first;
                auto s=(*index).second;
                if(f->left) q.push_back({f->left,s+1});
                if(f->right) q.push_back({f->right,s+1});
                sum+=f->val;
                index++;
            }
            sums.push_back(sum);
        }

        for(auto i:q){
            auto f=i.first;
            auto s=i.second+1;
            int curr_sum{0};
            if(f->left)curr_sum+=f->left->val;
            if(f->right)curr_sum+=f->right->val;
            int setting_value=sums[s]-curr_sum;
            if(f->left)f->left->val=setting_value;
            if(f->right)f->right->val=setting_value;
        }
        return root;
    }
};