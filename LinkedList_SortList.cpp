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
    ListNode* sortList(ListNode* head)
{
vector<int> v;
ListNode *temp=head;
while(temp!=NULL)
{
v.push_back(temp->val);
temp=temp->next;
}
sort(v.begin(),v.end());
ListNode * tail=head;
int i=0;
while(tail!=NULL)
{
tail->val=v[i];
tail=tail->next;
i++;
}
return head;
    }
};
