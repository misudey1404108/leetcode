
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==NULL) return head; /// Empty Link list
         if(head->next==NULL) return head; /// Link list consists of only one element

         ListNode * root=head;

         ListNode * tmp= root->next;
         while(tmp!=NULL)
         {
             if(tmp->val==root->val)
             {
                 tmp=tmp->next;
                 root->next=tmp;
             }
             else
             {
                 root=tmp;
                 tmp=tmp->next;
             }
         }
         return head;

    }
};
