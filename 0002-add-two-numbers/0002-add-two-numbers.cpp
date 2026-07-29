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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
   
        int carry=0;
        ListNode* head=NULL;
        ListNode* tail=NULL;
        while(temp1!=NULL || temp2!=NULL )
        {
             int n1=0;
    int n2=0;
           if (temp1 != NULL)
           n1 = temp1->val;

if (temp2 != NULL)
    n2 = temp2->val;
            int sum=n1+n2+carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode* node=new ListNode(digit);
            if(head==NULL)
            {
                head=node;
                tail=node;
            }
            else
            {
                tail->next=node;
                tail=node;
            }
            if(temp1!=NULL)
           temp1= temp1->next;
           if(temp2!=NULL)
           temp2= temp2->next;
        }
          if (carry != 0) {
            ListNode* node = new ListNode(carry);
            tail->next = node;
            tail = node;
        }
        return head;

    }
};