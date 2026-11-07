#include<iostream>
using namespace std;

/*
//types of linked list
1. Singly Linked list - only forward
2. double linked list - forward and backward
3. circular linked list - last node is connected to first
*/

//basic

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
};

void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    
    while(temp->next!=NULL){
        // cout<<temp->val<<"->";
        temp = temp->next;
    }
    temp->next= new_node;
};

void insertAtPosn(Node* &head, int val, int pos){
    if(pos == 0){
        insertAtHead(head, val);
        return;
    }
    Node* tempb = head;
    Node* new_node = new Node(val);
    int curr = 0;
    while(curr<pos-1){
        tempb = tempb->next;
        curr++;
    }
    Node* tempa = tempb->next;
    tempb->next = new_node;
    new_node->next = tempa;
}

void updateAtPosn(Node* &head, int val, int pos){
    // if(pos == 0){
    //     head->val = val; 
    // }  // no need;
    Node* temp = head;
    int n = 0;
    while(n!=pos){
        temp = temp->next;
        n++;
    }
    temp->val = val;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node* sec_last = head;
    while(sec_last->next->next != NULL){
        sec_last = sec_last->next;
    }
    Node* last = sec_last->next;
    sec_last->next = NULL;
    free(last);
}

void deleteAtPosn(Node* &head, int pos){
    if(pos == 0){
        deleteAtHead(head);
        return;
    }
    int curr = 0;
    Node* temp = head;
    while(curr!= pos-1){
        temp = temp->next; 
        curr++;
    }
    Node* dtemp = temp->next;
    temp->next = dtemp->next;
    free(dtemp);
}

//delete every alt ele from the list starting from the sec element;
void deletealtpos(Node* &head){
    Node* temp = head;
    while(temp->next != NULL && temp->next->next != NULL){
        Node* tempa = temp->next;
        temp->next = temp->next->next;
        free(tempa);
        temp = temp->next;
    }
    if(temp->next != NULL){
        // deleteAtPosn(head, curr+2);
        Node* tempb = temp->next;
        temp->next = temp->next->next;
        free(tempb);
    }
}

void deletealtpos2(Node* &head){
    Node* temp = head;
    int cur = 1;
    while(temp->next != NULL && temp->next->next != NULL){
        // Node* tempa = temp->next;
        // temp->next = temp->next->next;
        // free(tempa);
        // temp = temp->next;

        deleteAtPosn(head, cur);
        cur += 2;
        temp = temp->next;


    }
    if(temp->next != NULL){
        // Node* tempb = temp->next;
        // temp->next = temp->next->next;
        // free(tempb);
        deleteAtPosn(head, cur);
    }
}

// Remove duplicates from LL;
void removeDup(Node* &head){
    // Node* temp1 = head;
    // int cur = 0;
    // while(temp1->next != NULL ){ //&& temp2->next != NULL
    //     Node* temp2 = temp1->next;
    //     cur++;
    //     if(temp1->val == temp2->val){
    //         deleteAtPosn(head, cur);
    //         // cur--;
    //     }
    //     // else{
    //     //     cur++;
    //     // }
    //     temp1 = temp1->next;
    // }

    Node* temp = head;
    while (temp)
    {   
        while(temp->next && temp->val == temp->next->val){
            Node* tempa = temp->next;
            temp->next = temp->next->next;
            free(tempa);
        }
        temp = temp->next;
    }
} 


void revprint(Node* n){
    if(n == NULL){
        cout<<"NULL";
        return;
    }
    revprint(n->next);
    cout<<"->"<<n->val;
}



void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
};


int main(){
    // Node* n= new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;
    //Traversal
    
    Node* head = NULL;
    insertAtHead(head,2);
    // display(head);
    insertAtHead(head, 1);
    // display(head);
    
    insertAtTail(head, 5);
    // display(head);

    insertAtPosn(head, 4, 2);
    // display(head);
    
    insertAtPosn(head, 30, 2);
    // display(head);

    updateAtPosn(head, 3, 2);
    // display(head);

    insertAtHead(head, 1);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 6);
    insertAtTail(head, 6);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    insertAtTail(head, 10);
    insertAtTail(head, 10);
    insertAtTail(head, 10);
    insertAtTail(head, 10);
    insertAtTail(head, 10);
    insertAtTail(head, 10);
    insertAtTail(head, 10);
    // display(head);
    
    
    // //deleting
    deleteAtHead(head);
    display(head);

    // deleteAtPosn(head, 2);
    // display(head);
    
    // deleteAtTail(head);
    // display(head);

    // deleteAtTail(head);
    // display(head);
    
    // deletealtpos(head);
    // display(head);
    
    removeDup(head);
    display(head);

    revprint(head);
    
    
    return 0;
}





