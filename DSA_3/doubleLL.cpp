#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};



class doublyLL{
    public:
    Node* head;
    Node* tail;

    doublyLL(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<endl;
    }


    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
};


int main(){

    Node* new_node = new Node(3);

    doublyLL dll;
    // dll.head = new_node;
    // dll.tail = new_node;
    // cout<<dll.head->val<<endl;

    dll.insertAtStart(3);
    dll.insertAtStart(2);
    dll.insertAtStart(1);
    dll.insertAtStart(0);

    dll.display();






    return 0;
}