#include<iostream>

using namespace std;


// class Stack{
//     int *arr;
//     int top;
//     int size;
// public:
//     Stack(int s){
//         size = s;
//         arr = new int[size];
//         top = -1;
//     }

//     bool isEmpty(){
//         return top == -1;
//     }

//     bool isFull(){
//         return top == size -1;
//     }

//     void push(int val){
//         if(isFull()){
//             cout<<"Stack Overloaded\n";
//             return;
//         }
//         arr[++top] = val;
//     }

//     void pop(){
//         if(isEmpty()){
//             cout<<"Stack underflow\n";
//             return;
//         }
//         cout<<"Pooped: "<<arr[top--]<<endl;
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"Stack is empty\n";
//             return;
//         }
//         cout<<"Top element: "<< arr[top]<<endl;
//     }

//     void display(){
//         if(isEmpty()){
//             cout<<"Stack is empty\n";
//             return;
//         }
//         cout<<"Stack (Top -> Bottom): ";
//         for(int i=top; i>=0;i--){
//             cout<<arr[i]<<" ";
//         }
//             cout<<endl;

//     }

// };

// int main(){
//     Stack s(5);
    
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.display();
//     s.peek();
//     s.pop();
//     s.display();

//     return 0;
// }

//======================================Revising once more===============================================


// class stack{
//     int *arr;
//     int top;
//     int size;
// public:
//     stack(int val){
//         top = -1;
//         size = val;
//         arr = new int[size];
        
//     }

//     // Destructor - automatically called when object is destroyed
//     ~stack(){
//         delete[] arr;  // Free the dynamically allocated memory
//         cout << "Memory freed!" << endl;  // Optional: to see when it's called
//     }

//     bool isEmpty(){
//         return top == -1;
//     }

//     bool isFull(){
//         return top == size - 1;
//     }

//     void push_back(int val){
//         if(isFull()){
//             cout<<"Stack overloaded"<<endl;
//             return;
//         }
//         arr[++top] = val;
//     }

//     void pop_back(){
//         if(isEmpty()){
//             cout<<"Stack undeflow"<<endl;
//             return;
//         }
//         cout<<"Popped: "<<arr[top--]<<endl;
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"Stack undeflow";
//             return;
//         }
//         cout<<"Top element: "<<arr[top]<<endl;
//     }

//     void display(){
//         if(isEmpty()){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//         cout<<"[Top] ";
//         for(int i = top;i >=0; i--){
//             cout<<arr[i]<<" -> ";
//         }
//         cout<<endl;
//     }
// };


// int main(){
//     stack s(10);
//     cout<<"Is empty: "<<s.isEmpty()<<endl;
//     cout<<"Is full: "<<s.isFull()<<endl;
//     cout<<endl;
//     cout<<"Initial display: ";
//     s.display();
//     s.push_back(10);
//     s.push_back(20);
//     s.push_back(30);
//     s.push_back(30);
//     s.push_back(40);
//     s.push_back(50);
//     s.push_back(60);
//     s.peek();
//     s.pop_back();
//     s.peek();
//     s.display();

// }



//=========================== Stack by linked list ===================================


class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class stack{
    Node* top;
public:

    stack(){
        top = NULL;
    }


    bool isEmpty(){
        return top == NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop_back(){
        if(isEmpty()){
            cout<<"Stack is Underflow"<<endl;
            return;
        }
        Node* temp = top;
        cout<<"Popped data: "<<temp->data<<endl;
        top = top->next;
        delete temp;
    }

    void peek(){
        if(isEmpty()){
            cout<<"Stack is underflow"<<endl;
            return;
        }
        cout<<top->data<<endl;

    }

    void display(){
        if(isEmpty()){
            cout<<"Stack is underflow"<<endl;
            return;
        }
        Node* temp = top;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};


int main(){
    stack s;

    s.push_back(10);
    s.push_back(20);
    s.push_back(30);

    s.display();

    cout<<s.isEmpty()<<endl;

    s.pop_back();
    s.peek();
    s.display();
}