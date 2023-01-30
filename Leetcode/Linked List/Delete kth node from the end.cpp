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
        ListNode* ptr;
        int c=1,count=1;
        if(head->next==NULL || head==NULL )
        {
            return NULL;
        }

       
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
       
        int x=c-n+1;
        //int y=s-n+1;
        temp=head;
        if(x==1)
        {
            head=head->next;
            return head;
        }
        while(temp!=NULL && temp->next!=NULL)
        {
            //count++;
            if(count==x-1)
            {
                ptr=temp->next;
                temp->next=temp->next->next;
                delete(ptr);

            }
            temp=temp->next;
            count++;
        }
       
 //cout<<c;
        // cout<<x;
        return head;
         //while(temp!=)

    }
};
