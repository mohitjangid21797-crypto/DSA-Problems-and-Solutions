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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = new ListNode(0) , *tail = l3;
        ListNode *curr1 , *curr2;
        curr1 = l1;
        curr2 = l2;
        int sum = 0 , carry = 0;
        while(curr1&&curr2)
        {
            sum = curr1->val + curr2->val + carry;
            carry  = sum/10;
            tail->next = new  ListNode(sum%10);
            tail = tail->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        while(curr1)
        {
            sum = curr1->val+ carry;
            carry = sum/10;
            tail->next = new ListNode(sum%10);
            tail = tail->next;
            curr1 = curr1->next;
        }
        while(curr2)
        {
            sum = curr2->val+ carry;
            carry = sum/10;
            tail->next = new ListNode(sum%10);
            tail = tail->next;
            curr2 = curr2->next;
        }
        if(carry)
        {
            tail->next = new ListNode(carry%10);
            tail = tail->next;
            carry/=10;
        }
        tail = l3;
        l3 = l3->next;
        delete tail;
        return l3;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna