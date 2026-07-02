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
        
       ListNode* temp1 = l1;
       ListNode* temp2 = l2;   // FIXED
       
       int sum = 0;
       int digit;
       int carry = 0;         // FIXED (initialize)
       
       ListNode* head = NULL;
       ListNode* tail = NULL;
       
       // FIXED condition
       while(temp1 != NULL || temp2 != NULL || carry != 0)
       {
          int val1 = 0;
          int val2 = 0;
          
          if(temp1 != NULL)
              val1 = temp1->val;
              
          if(temp2 != NULL)
              val2 = temp2->val;
          
          // FIXED sum calculation
          sum = val1 + val2 + carry;
          
          carry = sum / 10;
          digit = sum % 10;
          
          // FIXED spelling
          ListNode* newnode = new ListNode(digit);
          
          // FIXED variable name consistency
          if(head == NULL)
          {
              head = newnode;
              tail = newnode;
          }
          else
          {
              tail->next = newnode;
              tail = newnode;
          }
          
          if(temp1 != NULL)
              temp1 = temp1->next;
              
          if(temp2 != NULL)
              temp2 = temp2->next;
       }
       
       return head;
    }
};