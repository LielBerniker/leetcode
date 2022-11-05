
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
      
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* currNode;
        if(head1 == nullptr)
        {
            if(head2 == nullptr)
            return nullptr;
            head->val=head2->val;
            head2 = head2->next;
        }
        else if (head2 == nullptr)
        {
            head->val=head1->val;
            head1 = head1->next;
        }
        else{
            if(head1->val > head2->val)
                {head->val = head2->val;
                head2 = head2->next;}
            else { head->val = head1->val;
                 head1 = head1->next;}
        }  
        currNode = head;
        while (head1!=nullptr && head2!= nullptr)
        {
           ListNode* addNode = new ListNode;
           if(head1->val < head2->val)
              {addNode->val = head1->val;
              head1 = head1->next;
              }
           else
              {addNode->val = head2->val;
              head2 = head2->next;}
            currNode->next = addNode;
            currNode = currNode->next;
        }

        while (head1!=nullptr)
        {
           ListNode* addNode = new ListNode;
            addNode->val = head1->val;
            currNode->next = addNode;
            currNode = currNode->next;
            head1 = head1->next;
        }
        while (head2!= nullptr)
        {
           ListNode* addNode = new ListNode;
            addNode->val = head2->val;
            currNode->next = addNode;
            currNode = currNode->next;
            head2 = head2->next;
        }
        return head;
    }
};
int main()
{
    Solution s;
    ListNode* arr11 = new ListNode(1);
    ListNode* arr12 = new ListNode(2);
    ListNode* arr13 = new ListNode(4);
    arr11->next = arr12;
    arr11 = arr11->next;
    arr11->next = arr13;
    ListNode* arr21 = new ListNode(1);
    ListNode* arr22 = new ListNode(3);
    ListNode* arr23 = new ListNode(4);
    arr21->next = arr22;
    arr21 = arr21->next;
    arr21->next = arr23;
    s.mergeTwoLists(arr11,arr21);
}