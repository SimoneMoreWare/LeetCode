/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 
 https://leetcode.com/problems/remove-linked-list-elements/description/
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* att=head;
    struct ListNode* pred=NULL;
    struct ListNode* tmp;
    while(att!=NULL){
        if(att->val==val){
            if(pred==NULL){
                tmp=head;
                head=head->next;
                free(tmp);
                att=head;
            }else{
                tmp=att;
                pred->next=att->next;
                att=att->next;
                free(tmp);
            }
        }else{
            pred=att;
            att=att->next;
        }
    }
    return head;
}
