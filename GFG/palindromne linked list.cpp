//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    //Function to reverse list
    // Function to check whether the list is palindrome.
     pair<Node*,Node*> reverseList(Node* l,int n){
        Node *prev=nullptr,*curr=l,*next;
        while (n!=0)
        {
            /* code */
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            n--;
        }
        return make_pair(prev,curr);
    }
    bool isPalindrome(Node *head) {
        // Your code here
        Node *curr=head;
        int n{0};
        while(curr!=nullptr){
            curr=curr->next;
            n++;
        }
        if(n%2==0){
            pair<Node*,Node*> p = reverseList(head,n/2);
            Node* head1 = p.first;
            Node* head2 = p.second;
            while (head2 !=nullptr)
            {
                /* code */
                if (head1->data!=head2->data)
                {
                    /* code */
                    cout<< head1->data<<  ' ' << head2->data <<endl;
                    return 0;
                }
                head1=head1->next;
                head2= head2->next;
            }
            return 1;
        }
        else
        {
            pair<Node*,Node*> p = reverseList(head,n/2);
            Node* head1 = p.first;
            Node* head2 = p.second;
            head2=head2->next;
            while (head2 !=nullptr)
            {
                /* code */
                if (head1->data!=head2->data)
                {
                    /* code */
                    cout<< head1->data<<  ' ' << head2->data <<endl;
                    return 0;
                }
                head1=head1->next;
                head2= head2->next;
            }
            return 1;
        }
        
        }
};


//{ Driver Code Starts.

/* Function to print nodes in a given linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << "empty" << endl;
            continue;
        }

        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        if (ob.isPalindrome(head))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        // Clean up the remaining nodes to avoid memory leaks
        while (head != NULL) {
            struct Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}

// } Driver Code Ends