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
      ListNode* prev=l1;
      ListNode* prev2=l2;
      //Addition
      ListNode* dummy=new ListNode(-1);
      ListNode* tail=dummy;
      int carry=0;
      while(prev && prev2){
        int sum=prev->val + prev2->val + carry;
        int rem=sum%10;
        carry=sum/10;
        ListNode* newNode=new ListNode(rem);
        tail->next=newNode;
        tail=tail->next;
        prev=prev->next;
        prev2=prev2->next;
      } 
      while(prev2){
        int sum=prev2->val+carry;
        int rem=sum%10;
        carry=sum/10;
        ListNode* newNode=new ListNode(rem);
        tail->next=newNode;
        tail=tail->next;
        prev2=prev2->next;
      }
      while(prev){
        int sum=prev->val+carry;
        int rem=sum%10;
        carry=sum/10;
        ListNode* newNode=new ListNode(rem);
        tail->next=newNode;
        tail=tail->next;
        prev=prev->next;
      }
      if(carry>0){
        ListNode* newNode=new ListNode(carry);
        tail->next=newNode;
        tail=tail->next;
      }
      return dummy->next;
    }  
};
