
class Solution {
public:
    bool isPalindrome(ListNode* head) {
         if(head==NULL) return 1; /// Empty Link list
         if(head->next==NULL) return 1; /// Link list consists of only one element

         ListNode * root=head;
         vector<int>V;
         while(root!=NULL)
         {
             V.push_back(root->val);
             root=root->next;
         }
         bool ck=true;
         for(int i=0,j=V.size()-1;i<V.size()/2;i++,j--)
         {
             if(V[i]!=V[j]) {ck=false; break;}
         }
         if(!ck) return 0;
         else return 1;

    }
};
