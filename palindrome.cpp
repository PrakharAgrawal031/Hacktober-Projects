#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertattail(int val){

        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }
};

bool IsPalindrome(Node* head){
//First lets get middle element and break our ll from there
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    //Lets reverse the LL second part

    Node* prv = NULL;
    Node* curr = slow;

    while(curr!=NULL){
        Node* next = curr->next;
        curr->next = prv;
        prv = curr;
        curr = next;
    }
    Node* head2 = prv;

    Node* ptr1 = head;
    Node* ptr2 = head2;

    while(ptr1 && ptr2){
        if(ptr1->val != ptr2->val){
            return false;
        }
        else{
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
    return true;
}

int main(){

    LinkedList ll1;
    ll1.insertattail(1);
    ll1.insertattail(2);
    ll1.insertattail(3);
    ll1.insertattail(3);
    ll1.insertattail(2);
    ll1.insertattail(1);
    ll1.display();

    cout<<IsPalindrome(ll1.head);
return 0;
}