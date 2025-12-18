#include<iostream>
using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class List{
//     Node* head = NULL;
//     Node* tail = NULL;

// public:
//     List(){
//         head = tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }else{
//             newNode->next = head; //(*newNode).next = head 
//             head = newNode;
//         }
//     }

//     void printer(){
//         Node* temp = head;

//         while (temp!= NULL)
//         {
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };




// int main(){
//     List ll;
    
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);

//     ll.printer();

//     return 0;
// }


// class Node{
//     public:
//         int data;
//         Node* next;
// };


// int main(){
//     Node* head = new Node();
//     Node* mid = new Node();
//     Node* tail = new Node();
//     Node* temp = head;

//     head->data = 1;
//     mid->data = 2;
//     tail->data = 3;

//     head->next = mid;
//     mid->next = tail;
//     tail->next = NULL;

    
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }


// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class LinkedList{
// private:
//     Node* head = NULL;
//     Node* tail = NULL;

// public:
//     LinkedList(){
//         head=tail=NULL;
//     }

//     void insert(int val){
//         Node* n = new Node(val);

//         if(head == NULL){
//             head = tail = n;

//         }else{
//             n->next = head;
//             head = n;
//         }

//     }

//     void insert_end(int val){
//         Node* n = new Node(val);

//         if(head == NULL){
//             head = tail = n;
//         }else{
//             n->next = tail;
//             tail = n;
//         }
//     }
// };




//Himanshu method by Struct
// struct Node
// {
//     int data;
//     Node* next;
// };

// Node* head = NULL;
// void insert_begining(Node*& head, int val){
//     Node* mynode = new Node;
//     mynode->data = val;
    
//     if(head == NULL){
//         mynode->next = NULL;
//         head = mynode;

//     }else{
//         mynode->next = head;
//         head = mynode;
//     }
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }






// int main()
// {
//     int choice, pos;
//     char v;
//     do
//     {
//         cout << "\n====================================\n";
//         cout << "1. Insert in the begining" << endl;
//         cout << "2. Insert at the end" << endl;
//         cout << "3. Insert in a given Position" << endl;
//         cout << "9. For display"<<endl;
//         cout << "0. EXIT" << endl;
//         cout << "\n====================================\n";
//         // cout<<"\nEnter your Choice: \t";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             cin >> v;
//             insert_begining(head, v);
//             break;
//         // case 2:
//         //     cin >> v;
//         //     insert_End(head, tail, v);
//         //     break;
//         // case 3:
//         //     cin >> pos;
//         //     cin >> v;
//         //     insert_Position(head, tail, v, pos);
//         //     break;
//         case 9:
//             display(head);
//             break;
//         case 0:
//             exit(0);
//         }
//     } while (choice != 0);
//     return 0;
// }




//Question -1 of neo by chatgpt


// struct Node
// {
//     int data;
//     Node *next;
// };

// // INSERT AT BEGINNING
// void push(Node **head_ref, int new_data)
// {

//     Node *newNode = new Node(); // create new node
//     newNode->data = new_data;   // assign value
//     newNode->next = *head_ref;  // link new node to existing head
//     *head_ref = newNode;        // move head to new node
// }

// // INSERT AT END
// void append(Node **head_ref, int new_data)
// {

//     Node *newNode = new Node();
//     newNode->data = new_data;
//     newNode->next = NULL;

//     // If list is empty
//     if (*head_ref == NULL)
//     {
//         *head_ref = newNode;
//         return;
//     }

//     // Traverse till last node
//     Node *temp = *head_ref;
//     while (temp->next != NULL)
//         temp = temp->next;

//     temp->next = newNode; // attach at last
// }

// // PRINT THE LIST
// void printList(Node *node)
// {
//     while (node != NULL)
//     {
//         cout << node->data << " ";
//         node = node->next;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     int num_of_nodes, new_val;

//     cin >> num_of_nodes;

//     for (int i = 0; i < num_of_nodes; i++)
//     {
//         int val;
//         cin >> val;
//         push(&head, val); // insert at beginning
//     }

//     cout << "Created Linked list: ";
//     printList(head);

//     cin >> new_val;
//     append(&head, new_val); // insert at end

//     cout << "\nFinal list: ";
//     printList(head);

//     return 0;
// }



//----------------From start once again-------------------------------------
//Apna college teacher:-







// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }

// };


// class List{
//     Node* head;
//     Node* tail;

// public:
//     List(){
//         head = tail = NULL;
//     }


//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }else{
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }else{
//             tail->next = newNode;
//             tail = newNode;
//         }

//     }

//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }

//     void pop_front(){
//         if(head == NULL){
//             cout<<"Linked List is empty";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     void pop_back(){
//         if(head == NULL){
//             cout<<"Linked List is empty";
//             return;
//         }
//         Node* temp = head;
//         while(temp->next != tail){
//             temp = temp->next;
//         }
//         temp->next = NULL;
//         delete tail;
//         tail = temp;
//     }
// };




// int main(){
//     List ll;
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//     ll.push_back(4);
//     ll.pop_back();
//     ll.display();
//     return 0;
// }



//--------------------------Basic learning of syntax--------------
//By CHatGpt:-

/*
Q1: Create a singly linked list by inserting elements at the end and print the linked list.

Goals of this question:

Understand what a Node is.

Understand how to link nodes.

Understand head pointer logic.

Learn to traverse and print.
*/


// ==========================OOPS APPROCH
// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };


// class list{
//     Node* head;
//     Node* tail;
// public:

//     list(){
//         head = tail = NULL;
//     }

//     void insertAtEnd(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void insertAtBeg(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }else{
//             newNode->next = head;
//             head = newNode;
//         }


//     }

//     void deleteAtBeg(){
//         if(head == NULL){
//             cout<<"List is empty."<<endl;
//         }else{
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//         }
//     }

//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };



// int main(){
//     list l;
//     l.insertAtEnd(1);
//     l.insertAtEnd(2);
//     l.insertAtEnd(3);
//     l.insertAtBeg(100);
//     l.deleteAtBeg();
//     l.display();
// }

//=============================Procedural Approch

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }

};


void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtBeg(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }else{
        newNode->next  = head;
        head = newNode;
    }
}

void deleteAtBeg(Node* &head){
    if(head == nullptr){
        return;
    }else{
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void printer(Node* &head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head = nullptr;

    insertAtEnd(head,5);
    insertAtEnd(head,10);
    insertAtEnd(head,15);
    insertAtEnd(head,20);
    insertAtBeg(head,100);
    deleteAtBeg(head);
    printer(head);
}

