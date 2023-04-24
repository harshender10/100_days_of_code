class Solution {
public:
     int BTD(string s){
        int dec=0;
        int base=1;
        int n= (int)s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1')
                dec+=base;
            base*=2;
        }
        return dec;
    }

    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL){
            int data= head-> val;
            char x=(data==1)?'1':'0';
            s+=x;
            head=head->next;
        }
        int ans= BTD(s);
        return ans;
    }
};
