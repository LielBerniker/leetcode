
 struct ListNode {
 int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
        return head;
        ListNode* currNode = new ListNode;
        ListNode* tempNode;
        ListNode* headOfNoDup;
        int currVal = head->val;
        currNode->val= currVal;
        headOfNoDup = currNode;
        tempNode = head->next;
        while(tempNode!=nullptr)
        {
            if(tempNode->val != currVal)
            {
                ListNode* addNode = new ListNode(tempNode->val);
                currNode->next = addNode;
                currNode = currNode->next;
                currVal = tempNode->val;
            }
            tempNode = tempNode->next;
        }
        return headOfNoDup;
    }
};
