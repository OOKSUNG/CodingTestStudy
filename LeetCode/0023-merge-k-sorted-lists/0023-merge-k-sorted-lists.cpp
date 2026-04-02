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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ansNode = nullptr;
        ListNode* tailNode = nullptr;
        int min;
        int idx = -1;
        
        // 오름 차순으로 정렬, 먼저 추가되면 뒤로 감 -> max를 찾아야
        while(!lists.empty()){
            min = 10000;
            idx = -1;
            for(int i = 0; i < lists.size(); i++){
                if(lists[i] && min > lists[i]->val){
                    min = lists[i]->val;
                    idx = i;
                }
            }
            if(idx == -1) break;

            //min를 val로 가지는 새로운 리스트를 만든다.
            ListNode* newNode = new ListNode(min);
            //ans가 nullptr이면 new노드가 ansNode다
            if(!ansNode) {
                ansNode = newNode;
                tailNode = newNode;
            }

            //ans의 마지막노드에 newNode를 추가한다.
            else{
                tailNode->next = newNode;
                tailNode = tailNode->next;
            }

            //lists[i]의 연결리스트의 포인터를 다음 포인터로 이동한다.
            ListNode* nextNode = lists[idx]->next;
            lists[idx] = nextNode;
            //해제 필요?

            //nullptr되면 벡터에서 제거한다.
            if(!lists[idx]) lists.erase(lists.begin() + idx);
        }

        return ansNode;

    }
    
};