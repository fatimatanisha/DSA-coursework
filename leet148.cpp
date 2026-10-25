#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == nullptr){
            return head;
        }
        ListNode* mid = getMid(head);
        ListNode* rightHead = mid->next;
         mid->next = nullptr;

         ListNode* leftSorted = sortList(head);
         ListNode* rightSorted = sortList(rightHead);

         return(leftSorted, rightSorted);
    }
};