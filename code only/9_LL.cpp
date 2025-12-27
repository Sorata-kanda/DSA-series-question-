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

//     void deleteAtEnd(){
//         if(head == NULL){
//             cout<<"List is empty."<<endl;
//             return;
//         }
//         if(head == tail){
//             head = tail = NULL;
//             delete head;
//             return;
//         }else{
//             Node* temp = head;
//             while(temp->next!=tail){
//                 temp = temp->next;
//             }
//             Node* notNeeded = tail;
//             tail = temp;
//             tail->next = NULL;
//             delete notNeeded;
//         }
//     }

//     void DelAtPos(int pos){
//         if(head == NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         if(pos == 1){
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//         }
//         Node* temp = head;
//         for(int i=1; i<pos-1 && temp!=NULL; i++){
//             temp = temp->next;
//         }

//         if(temp->next == NULL){
//             cout<<"Invalid position"<<endl;
//             return;
//         }

//         Node* ToDel = temp->next;
//         temp->next = ToDel->next;
//         delete ToDel;
//         return;
//     }
//     void DelAtVal(int val){
//         if(head == NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         if(head->data == val){
//             Node* temp = head;
//             head = head->next;
//             if(head == NULL) tail = NULL; 
//             delete temp;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next != NULL && temp->next->data != val){
//             temp = temp->next;
//         }

//         if(temp->next == NULL){
//             cout<<"Val not found";
//             return;
//         }

//         Node* ToDel = temp->next;
//         if(ToDel ==  tail){
//             tail = temp;
//         }
//         temp->next = ToDel->next;
//         delete ToDel;
//     }

//     void reverse(){
//         Node* prev = NULL;
//         Node* curr = head;
//         Node* next = NULL;

//         tail = head;
//         while(curr!=NULL){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         head = prev;
//     }

//     void middle(){
//         if(head == NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         Node* slow = head;
//         Node* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         cout<<"Middle element: "<< slow->data<<endl;
//     }

//     bool detector(){
//         if(head == NULL){
//             cout<<"List is empty"<<endl;
//             return false;
//         }
//         Node* slow = head;
//         Node* fast = head;

//         while(fast!=NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast){
//                 cout<<"Loop detected";
//                 return true;
//             }
//         }
//         cout<<"No Loop detected"<<endl;
//         return false;
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
//     // l.deleteAtBeg();
//     // l.deleteAtEnd();
//     // l.DelAtPos(3);
//     // l.DelAtVal(100);
//     // l.reverse();
//     // l.middle();
//     l.detector();
//     l.display();
// }

//=============================Procedural Approch

// struct Node{
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = nullptr;
//     }

// };


// void insertAtEnd(Node* &head, int val){
//     Node* newNode = new Node(val);
//     if(head == nullptr){
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while(temp->next != nullptr){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// void insertAtBeg(Node* &head, int val){
//     Node* newNode = new Node(val);
//     if(head == nullptr){
//         head = newNode;
//         return;
//     }else{
//         newNode->next  = head;
//         head = newNode;
//     }
// }

// void deleteAtBeg(Node* &head){
//     if(head == nullptr){
//         return;
//     }else{
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }
// }

// void deleteAtEnd(Node* &head){
//     if(head == nullptr){
//         cout<<"List is empty."<<endl;
//         return;
//     }else{
//         Node* temp = head;
//         while(temp->next->next!=nullptr){
//             temp = temp->next;
//         }
//         Node* last = temp->next;
//         temp->next = nullptr;
//         delete last;
//     }
// }
// void deleteAtPos(Node* &head, int pos){
//     if(head == nullptr){
//         cout<<"list is empty"<<endl;
//         return;
//     }
//     if(pos == 1){
//         Node* t1 = head;
//         head = nullptr;
//         delete t1;
//         return;
//     }

//     Node* curr = head;
//     for(int i=1; i<pos - 1 && curr->next !=nullptr; i++){
//         curr = curr->next;
//     }
//     if(curr->next = nullptr){
//         cout<<"Invalid position"<<endl;
//         return;
//     }

//     Node* ToDel = curr->next;
//     curr->next = ToDel->next;
//     delete ToDel;

// }

// void Del(Node* &head, int pos){
//     if(head == nullptr){
//         cout << "List is empty" << endl;
//         return;
//     }

//     if(pos == 1){
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return;
//     }

//     int count = 1;
//     Node* temp = head;

//     while(count < pos-1 && temp->next != nullptr){
//         temp = temp->next;
//         count++;
//     }

//     if(temp->next == nullptr){
//         cout << "Invalid position" << endl;
//         return;
//     }

//     Node* ToDel = temp->next;
//     temp->next = ToDel->next;
//     delete ToDel;
// }

// void DelByVal(Node* &head, int val){
//     if(head == nullptr){
//         cout<<"List is empty"<<endl;
//         return;
//     }
//     if(head->data == val){
//         Node* deleter = head;
//         head = head->next;
//         delete deleter;
//         return;
//     }
    
//     Node* temp = head;
//     while(temp->next != nullptr && temp->next->data != val){
//         temp = temp->next;
//     }
    
//     if(temp->next == nullptr){
//         cout<<"value not found"<<endl;
//         return;
//     }

//     Node* Del = temp->next;
//     temp->next = Del->next;
//     delete Del;
// }
// void reverse(Node* &head){
//     Node* curr = head;
//     Node* prev = nullptr;
//     Node* next = NULL;
//     while(curr != nullptr){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     head = prev;
// }

// void middle(Node* &head){
//     if(head == nullptr){
//         cout<<"List is empty"<<endl;
//         return;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(fast != nullptr && fast->next !=nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     cout<<"Middle element:"<<slow->data<<endl;
// }

// bool detectLoop(Node* head){
//     if(head == nullptr){
//         return false;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(fast != nullptr && fast->next != nullptr){
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast){
//             cout<<"Loop exists"<<endl;
//             return true;
//         }

//     }
//     cout<<"No Loop detected"<<endl;
//     return false;
// }

// void printer(Node* &head){
//     Node* temp = head;

//     while(temp != nullptr){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }

// int main(){
//     Node* head = nullptr;

//     insertAtEnd(head,5);
//     insertAtEnd(head,10);
//     insertAtEnd(head,15);
//     insertAtEnd(head,20);
//     insertAtBeg(head,100);
//     // deleteAtBeg(head);
//     // deleteAtEnd(head);
//     // Del(head,1);
//     // DelByVal(head,15);
//     // reverse(head);
//     // middle(head);
//     detectLoop(head);
//     printer(head);
// }




//=================== Grounded Header List (ends with null) ==================

// struct Node {
//     int data;
//     Node* next;
//     Node(int val = -1){
//         data = val;
//         next = nullptr;
//     }
// };

// Node* HeaderList(){
//     Node* head = new Node();
//     head->next = NULL;
//     return head;
// }

// void insert_End(Node* & head, int val){
//     Node* newNode = new Node(val);
//     Node* temp = head;

//     while(temp->next != nullptr){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// void display(Node* header){
//     Node* temp = header->next;
//     while(temp != nullptr){
//         cout<<temp->data<<" -> ";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = HeaderList();

//     insert_End(head,5);
//     display(head);
// }



//=================== Grounded Header List using classes (ends with null) ==================


// class Node{
// public:
//     Node* next;
//     int data;
//     Node(int val = -1){
//         data = val;
//         next = NULL;
//     }
// };

// class list{
//     Node* header;

// public:
//     list(){
//         header = new Node();
//         header->next = NULL;
//     }

//     void insert_End(int val){
//         Node* newNode = new Node(val);

//         Node* temp = header;
//         while(temp->next!= NULL){
//             temp = temp->next;
//         }
//         temp->next = newNode;
       
//     }

//     void insert_begining(int val){
//         Node* newNode = new Node(val);
//         newNode->next = header->next;
//         header->next = newNode;
        
//     }

//     void deleteByVal(int val){
//         if(header == NULL){
//             cout<<"List is empty";
//             return;
//         }
//         else{
//             Node* temp = header->next;
//             while(temp->next != NULL && temp->next->data != val){
//                 temp = temp->next;
//             }
//             if(temp == NULL){
//                 cout<<"Not found in LL";
//                 return;
//             }
//             Node* del = temp->next;
//             temp->next = del->next;
//             delete del;
//         }
//     }

//     void display(){
//         Node* temp = header->next;
//         while(temp != NULL){
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"NULL";
//     }

// };

// int main(){
//     list l;
//     l.insert_End(5);
//     l.insert_End(10);
//     l.insert_End(15);
//     l.insert_End(20);
//     l.insert_begining(-10);
//     l.insert_begining(-20);
//     l.insert_begining(-30);
//     l.insert_begining(-40);
//     l.deleteByVal(15);
//     l.display();
// }



// =================== Circular Header List using classes (ends with Header) ==================

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int val = -1){
//         data = val;
//         next = NULL;
//     }
// };

// class list{
//     Node* header;
//     Node* tail;
// public:
//     list(){
//         header = tail = new Node();
//         header->next = header;
//     }

//     void insert_End(int val){
//         Node* newNode = new Node(val);
//         Node* temp = header;
//         while(temp->next!=header){
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = header;

//     }
//     void insert_begining(int val){
//             Node* newNode = new Node(val);
//             newNode->next = header->next;
//             header->next =newNode;
//     }

//     void DelAtVal(int val){
        
//         if(header->next == header){
//             cout<<"List is empty"<<endl;
//             return;
//         }
        
//         if(header->next->data == val){
//         Node* del = header->next;
//         header->next = del->next;
//         delete del;
//         return;
//         }
//         else{
//             Node* temp = header->next;
//             while(temp != header && temp->next->data != val){
//                 temp = temp->next;
//             }
//             Node* noNeed = temp->next;
//             temp->next = noNeed->next;
//             delete noNeed;

//         }

//     }

//     // void DelAtVal(int val){  //This is by chat GPT

//     //     if(header->next == header){
//     //         cout << "List is empty" << endl;
//     //         return;
//     //     }

//     //     // Case 1 — first data node matches
//     //     if(header->next->data == val){
//     //         Node* del = header->next;
//     //         header->next = del->next;
//     //         delete del;
//     //         return;
//     //     }

//     //     // Case 2 — search the rest
//     //     Node* temp = header->next;

//     //     while(temp->next != header && temp->next->data != val){
//     //         temp = temp->next;
//     //     }

//     //     // Value NOT found
//     //     if(temp->next == header){
//     //         cout << "Value not found" << endl;
//     //         return;
//     //     }

//     //     // Delete node
//     //     Node* del = temp->next;
//     //     temp->next = del->next;
//     //     delete del;
//     // }
        

//     void display(){
//         Node* temp = header->next;
//         while(temp != header){
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"back_to_header";
//     }
// };

// int main(){
//     list l;
//     l.insert_begining(100);
//     l.insert_begining(200);
//     l.insert_begining(300);
//     l.insert_begining(400);
//     l.DelAtVal(400);
//     // l.insert_End(200);
//     // l.insert_End(300);
//     l.display();

// }

//============================ Doubly Linekd List ===========================================

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class list{
    Node* head;
    Node* tail;
public:
    list(){
        head = tail = NULL;
    }

    void insert_End(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

    }

    void insert_beginning(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void displayBack(){
        Node* temp = tail;
        cout<<" NULL <- ";
        while(temp != NULL){
            cout<<temp->data<<" <- ";
            temp = temp -> prev;
        }
        cout<<"NULL";
    }
    void displayFor(){
        Node* temp = head;
        cout<<"NULL <-> ";
        while(temp != NULL){
            cout<<temp->data<<" <-> ";
            temp = temp->next;
        }
        cout<<"NULL";
    }

    
};

int main(){
    list l;

    l.insert_End(1);
    l.insert_End(2);
    l.insert_End(3);
    l.insert_begining(100);
    l.insert_begining(200);
    l.insert_begining(300);
    l.displayBack();
}