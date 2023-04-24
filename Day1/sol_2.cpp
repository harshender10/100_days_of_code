class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* temp= head;
         int count=0;
         while(temp!=NULL){
             count++;
             temp=temp->next;
         }

            count=count/2;
            ListNode* ans;
            int i=0;
            while(i<=count){
                ans=head;
                head=head->next;
                i++;
            }

       return ans;
    }
};
