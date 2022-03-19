/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* d1=l1;
    struct ListNode* e1=l1;
    struct ListNode* d2=l2;
    while(d1!=NULL&&d2!=NULL)
    {
        if(d1->next==NULL&&d2->next!=NULL)
       {
         struct ListNode* x=(struct ListNode*)malloc(sizeof(struct ListNode));
         x->val=0;
         x->next=NULL;
         d1->next=x;  
       }
        if(d2->next==NULL&&d1->next!=NULL)
       {
         struct ListNode* n=(struct ListNode*)malloc(sizeof(struct ListNode));
         n->val=0;
         n->next=NULL;
         d2->next=n;  
       }
   if(d1->val+d2->val>=10)
   {
       d1->val=d1->val+d2->val-10;
       if(d1->next==NULL)
       {
         struct ListNode* m=(struct ListNode*)malloc(sizeof(struct ListNode));
         m->val=0;
         m->next=NULL;
         d1->next=m;  
       }
       ( d1->next)->val+=1;
   }
   else
   {
    d1->val=d1->val+d2->val;
  }
   d1=d1->next;
   d2=d2->next;     
    }
  
 return l1;  
}
