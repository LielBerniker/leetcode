 #include <stdbool.h>
  #include <stdio.h>
  #include <stdlib.h>
  typedef struct ListNode {
     int val;
      struct ListNode *next;
  };
  typedef struct saveNodee  {
      struct ListNode *val;
      struct saveNodee *next;
  };
  bool hasNode( struct ListNode *curNode,struct saveNodee *headSaveNode) {
    while(headSaveNode!=NULL)
    {
        if(headSaveNode==NULL || headSaveNode->val==NULL)
        return false;
        if(headSaveNode->val == curNode)
        return true;
        headSaveNode = headSaveNode->next;
    }
    return false;
}
bool hasCycle(struct ListNode *head) {
    struct saveNodee* start= (struct saveNodee*)malloc(sizeof(struct saveNodee));
    start->next = NULL;
    start->val = NULL;
    struct saveNodee* cur = start;
    struct ListNode *curIn = head;
    int first =1;
    while(curIn!=NULL)
    {
        if(hasNode(curIn,start->next))
        {
            return true;
        }
        else{
         struct saveNodee* curNode = (struct saveNodee*)malloc(sizeof(struct saveNodee));
         curNode->val = curIn;
         curNode->next = NULL;
         cur->next = curNode;
         cur = cur->next;
        }
        curIn = curIn->next;
    } 
    return false;
}