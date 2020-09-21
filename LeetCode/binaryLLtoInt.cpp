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
#include <math.h>

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        while (head != NULL) {
            arr.push_back(head->val);
            head = head->next;
        }
        
        int sum = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] == 1) {
                sum += pow(2, (arr.size() - 1) - i);   
            }
        }
        return sum;
    }
};