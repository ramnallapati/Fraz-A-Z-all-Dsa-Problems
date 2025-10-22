
#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

using namespace std;

struct ListNode
{
  int val;
  ListNode *next;

  ListNode() : val(0),next(nullptr) {};
  ListNode(int data) : val(data) ,next(nullptr) {};
  ListNode(ListNode*next,int val) : val(val),next(next) {};
};

class Solution {
public:
    void insertionSort(vector<int>&arr) {
        int n = arr.size();

        for(int i=1;i<n;i++) {
            int key = arr[i];
            int j = i-1;

            while(j>=0 && arr[j]>key) {
                arr[j+1] = arr[j];
                j--;
            }

            arr[j+1] = key;
        }
    }
    ListNode* insertionSortList(ListNode* head) {
        
        if(!head)return head;

        vector<int>res;

        while(head) {
            
            res.push_back(head->val);
            head = head->next;
        }

        insertionSort(res);

        ListNode* dummy = new ListNode(0);

        ListNode* temp = dummy;

        for(int i=0;i<res.size();i++) {

            temp->next = new ListNode(res[i]);
            temp = temp->next;
        }

        return dummy->next;
    }
};



int main() {

  int n;
  cout<<"Enter Values : \n";
  cin>>n;

  ListNode *head = new ListNode(4);
  head->next = new ListNode(1);
  head->next->next = new ListNode(6);
  head->next->next->next = new ListNode(5);

  Solution s;

  ListNode* newHead = s.insertionSortList(head);

  while(newHead) {
    cout<<newHead->val<<" ";
    newHead = newHead->next;
  }

  return 0;

}
