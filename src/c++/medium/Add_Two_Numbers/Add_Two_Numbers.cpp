
  struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode;
        ListNode* currentNode;
        ListNode* currentHead;
        currentHead = head;
        int toAdd = 0;
        if(l1 == nullptr && l2 == nullptr)
        {
            return head;
        }
        else if(l2 == nullptr)
        {
            return l1;
        }
        else if(l1 == nullptr)
        {
            return l2;
        }
        else{
            int curVal = l1->val + l2->val;
            if(curVal>=10)
            {
               head->val = curVal -10;
               toAdd = 1;
            }else{
                 head->val = curVal;
            }
            l1 = l1->next;
            l2 = l2->next;
            currentNode = head;
        }
        while(l1!=nullptr && l2!=nullptr)
        {
             int curVal = l1->val + l2->val + toAdd;
            if(curVal>=10)
            {
                curVal = curVal-10;
                toAdd = 1;
            }
            else{
                toAdd = 0;
            }
           ListNode* addNode = new ListNode(curVal);
           currentNode->next = addNode;
           currentNode = currentNode->next;
           l1 = l1->next;
           l2 = l2->next;
        }
        while(l1!=nullptr)
        {
             int curVal = l1->val + toAdd;
            if(curVal>=10)
            {
                curVal = curVal-10;
                toAdd = 1;
            }
            else{
                toAdd = 0;
            }
           ListNode* addNode = new ListNode(curVal);
           currentNode->next = addNode;
           currentNode = currentNode->next;
           l1 = l1->next;
        }
        while(l2!=nullptr)
        {
             int curVal = l2->val + toAdd;
            if(curVal>=10)
            {
                curVal = curVal-10;
                toAdd = 1;
            }
            else{
                toAdd = 0;
            }
           ListNode* addNode = new ListNode(curVal);
           currentNode->next = addNode;
           currentNode = currentNode->next;
           l2 = l2->next;
        }
        if(toAdd==1)
        {
            ListNode* addNode = new ListNode(1);
            currentNode->next = addNode;
        }
        return currentHead;
    }
};