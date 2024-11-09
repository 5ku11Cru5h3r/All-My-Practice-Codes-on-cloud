//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class AutoCompleteSystem
{
public:
    map<string, int> mp;
    struct Trie
    {
        struct node
        {
            node *next[26];
            int freq=0;
            node()
            {
                for (int i = 0; i < 26; i++)
                    next[i] = NULL;
            }
        };

        node root;
        
        void add(string str)
        {
            node *temp = &root;
            for (auto ele : str)
            {
                if (temp->next[int(ele - 'a')] == NULL)
                    temp->next[int(ele - 'a')] = new node();
                temp = temp->next[int(ele - 'a')];
                temp->freq+=1;
            }
        }
    };
    Trie Tr,*curr;
    AutoCompleteSystem(vector<string> &s, vector<int> &t)
    {
        for (size_t i = 0; i < t.size(); i++)
        {
            /* code */
            Tr.add(s[i]);
        }
    }

    vector<string> input(char c)
    {
        if (c == '#')
            return;
        else
        {
           while (curr->)
           {
            /* code */
           }
           
           
        }
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        vector<string> sentences(n);
        vector<int> times(n);
        for (int i = 0; i < n; ++i)
        {

            getline(cin, sentences[i]);
            cin >> times[i];
            cin.ignore();
        }
        AutoCompleteSystem *obj = new AutoCompleteSystem(sentences, times);
        int q;
        cin >> q;
        cin.ignore();

        for (int i = 0; i < q; ++i)
        {
            string query;
            getline(cin, query);
            string qq = "";
            for (auto &x : query)
            {
                qq += x;
                vector<string> suggestions = obj->input(x);
                if (x == '#')
                    continue;
                cout << "Typed : \"" << qq << "\" , Suggestions: \n";
                for (auto &y : suggestions)
                {
                    cout << y << "\n";
                }
            }
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
