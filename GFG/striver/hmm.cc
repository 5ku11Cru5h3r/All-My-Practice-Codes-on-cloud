//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
// } Driver Code Ends
class AutoCompleteSystem {
    vector<pair<string , int >> m;
  public:

    AutoCompleteSystem(vector<string>& s, vector<int>& t) {
        // write code for constructor
        for (size_t i = 0; i < s.size(); i++)
        {
            m.push_back({s[i],t[i]});
        }
        sort(m.rbegin(),m.rend());
    }

    vector<string> input(char c) {
        // write code to return the top 3 suggestions when the current character in the
        // stream is c c == '#' means , the current query is complete and you may save
        // the entire query into historical data
        vector<string> v;
        int count{0};
        for (size_t i = 0; i < m.size(); i++)
        {
            /* code */
            if(count>2)break;
            if (m[i].first[0]==c)
            {
                /* code */
                v.push_back(m[i].first);
            }
            else if (m[i].first[0]<c)
            {
                break;
            }   
        }
        
        return v;
    }
};

/**
 * Your AutoCompleteSystem object will be instantiated and called as such:
 * AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        vector<string> sentences(n);
        vector<int> times(n);
        for (int i = 0; i < n; ++i) {

            getline(cin, sentences[i]);
            cin >> times[i];
            cin.ignore();
        }
        AutoCompleteSystem *obj = new AutoCompleteSystem(sentences, times);
        int q;
        cin >> q;
        cin.ignore();

        for (int i = 0; i < q; ++i) {
            string query;
            getline(cin, query);
            string qq = "";
            for (auto &x : query) {
                qq += x;
                vector<string> suggestions = obj->input(x);
                if (x == '#')
                    continue;
                cout << "Typed : \"" << qq << "\" , Suggestions: \n";
                for (auto &y : suggestions) {
                    cout << y << "\n";
                }
            }
        }
    }
    return 0;
}

// } Driver Code Ends