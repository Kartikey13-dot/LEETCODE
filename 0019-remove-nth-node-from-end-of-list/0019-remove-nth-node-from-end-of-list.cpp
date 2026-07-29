/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1=head;
        int i=0;
        if (temp1 == NULL)
    return NULL;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            i++;
        }
         if (i == n) {
            ListNode* todel = head;
            head = head->next;
            delete todel;
            return head;
        }
        int ans=i;
        ListNode* temp2=head;
           while(ans!=n+1 && temp2!=NULL)
        {
            temp2=temp2->next;
            ans--;
         
        }
        ListNode* todel=temp2->next;
        temp2->next=todel->next;
        delete todel;
        return head;
    }
};