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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
  
        /*ListNode*temp1=list1;
         ListNode*temp2=list2;
        vector<int>arr;
        while(temp1!=nullptr){
            arr.push_back(temp1->val);
            temp1=temp1->next;
        }
         while(temp2!=nullptr){
            arr.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(arr.begin(),arr.end());
        ListNode*mergelist=nullptr;  //head of newlinkedlist 
        ListNode*temp=nullptr;
        for(int val:arr){
        ListNode*newnode=new ListNode(val);
        if(mergelist==nullptr){
            mergelist=newnode;
            temp=newnode;
        }
        else{
           temp->next=newnode;
            temp=temp->next;
        }
         } return mergelist;*/
   
   ListNode*dumynode=new ListNode(-1);
   ListNode*temp=dumynode;
   ListNode*temp1=list1;
   ListNode*temp2=list2;

   while(temp1!=nullptr&&temp2!=nullptr){
    if(temp1->val<temp2->val){
        temp->next=temp1;
        temp=temp1;
        temp1=temp1->next;
    }else{
          temp->next=temp2;
        temp=temp2;
        temp2=temp2->next;
    }}
    if(temp1){
        temp->next=temp1;
    }
    else{
        temp->next=temp2;
    }
   
  return dumynode->next;

    }
};