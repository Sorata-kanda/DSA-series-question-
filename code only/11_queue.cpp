#include<iostream>
// #include<queue>
using namespace std;

// class queue{
//     int *arr;
//     int front;
//     int rear;
//     int size;

// public:
//     queue(int s){
//         size = s;
//         arr = new int[size];
//         front = rear = -1; 
//     }
//     ~queue(){
//         delete[] arr;
//     }

//     bool isEmpty(){
//         return front == -1;
//     }

//     bool isFull(){
//         return rear == size-1;
//     }

//     void enqueue(int val){
//         if(isFull()){
//             cout<<"Queue Overflow";
//             return;
//         }

//         if(isEmpty()){
//             front = rear = 0;
//         }else{
//             rear++;
//         }
//         arr[rear] = val;
//     }

//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Queue is underflow";
//             return;
//         }
//         cout<<"Dequeued: "<<arr[front]<<endl;
//         if(front==rear){
//             front = rear = -1;
//         }else{
//             front++;
//         }
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"Queue is empty\n";
//             return;
//         }
//         cout<<"Front element: "<<arr[front]<<endl;
//     }

//     void display(){
//         for(int i=front;i<=rear; i++){
//             cout<<arr[i]<<" -> ";
//         }
//         cout<<"NULL"<<endl;
//     }

// };


// int main(){
//     queue q(10);
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60);
//     q.enqueue(70);
//     q.enqueue(80);
//     q.enqueue(90);
//     q.enqueue(100);
//     q.display();
//     cout<<"\n";
//     cout<<"After deque:\n";
//     cout<<"\n";
//     q.dequeue();
//     q.dequeue();
//     q.peek();
//     q.display();
// }

//===================================== Cirecular Queue =====================================

// class CircularQueue{
//     int *arr;
//     int size;
//     int front;
//     int rear;
// public:
//     CircularQueue(int s){
//         size = s;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     ~CircularQueue(){
//         delete[] arr;
//     }
//     bool isEmpty(){
//         return front == -1;
//     }
//     bool isFull(){
//         return ( front == (rear+1)%size);
//     }

//     void enqueue(int val){
//         if(isFull()){
//             cout<<"Queue Overflow\n";
//             return;
//         }
//         if(isEmpty()){
//             rear = front = 0;
//         }else{
//             rear = (rear + 1)%size;
//         }
//         arr[rear] = val;
//     }
//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Queue Underflow\n";
//             return;
//         }
//         cout<<"Dequeued: "<<arr[front]<<endl;
//         if(front == rear){
//             front = rear = -1;
//         }
//         else{
//             front = (front+1)%size;
//         }
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"Queue is Empty"<<endl;
//             return;
//         }
//         cout<<"Front element: "<<arr[front]<<endl;
//     }

//     void display(){
//         if(isEmpty()){
//             cout<<"Queue is empty\n";
//             return;
//         }
//         int  i = front;
//         while(1){
//             cout<<arr[i]<<" -> ";
//             if(i == rear) break;
//             i = (i+1)%size;
//         }
//         cout<<"NULL\n";
//     }
// };

// int main(){
//     CircularQueue q(5);

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.display();
//     cout<<"New queue\n";
//     q.dequeue();
//     q.dequeue();
//     q.peek();
//     q.display();
// }


//============================================ Queue using Linked List  ===========================================



// class Node{
// public:
//     Node* next;
//     int data;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class listQueue{
//     Node* front;
//     Node* rear;
// public:
//     listQueue(){
//         front = rear = NULL;
//     }

//     bool isEmpty(){
//         return front == NULL;
//     }
//     void enqueue(int val){
//         Node* newNode = new Node(val);
//         if(isEmpty()){
//             front = rear = newNode;
//         }else{
//             rear->next = newNode;
//             rear = newNode;
//         }
//     }

//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Queue is Empty\n";
//             return;
//         }
//         Node* temp = front;
//         cout<<"Dequeued: "<<temp->data<<endl;
//         front = front->next;
//         if(front == NULL) rear = NULL;
//         delete temp;
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"Queue is empty";
//             return;
//         }
//         cout<<"Front element: "<<front->data<<endl;
//     }

//     void display(){
//         if(isEmpty()){
//             cout<<"Queue is Empty\n";
//             return;
//         }
//         Node* temp = front;
//         while(temp != NULL){
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"NULL\n";
//     }
// };

// int main(){
//     listQueue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);

//     q.display();
//     cout<<"After Dequeue: \n";
//     q.dequeue();
//     q.peek();
//     q.display();
// }


//============================================ Dequeue using (array) ===========================================

// class Dequeue{
//     int *arr;
//     int size;
//     int front;
//     int rear;
    
// public:
//     Dequeue(int s){
//         size = s;
//         arr = new int[size];
//         front = rear = -1;
//     }
//     ~Dequeue(){
//         delete[] arr;
//     }

//     bool isEmpty(){
//         return front == -1;
//     }
//     bool isFull(){
//         return front == (rear +1)%size;
//     }

//     void push_front(int val){
//         if(isFull()){
//             cout<<"Dequeue Overflow\n";
//             return;
//         }
//         if(isEmpty()){
//             front = rear = 0;
//         }else if(front == 0){
//             front = size-1;
//         }else{
//             front--;
//         }
//         arr[front] = val;
//     }

//     void push_back(int val){
//         if(isFull()){
//             cout<<"Dequeue Overflow\n";
//             return;
//         }
        
//         if(isEmpty()){
//             front = rear = 0;
//         }else{
//             rear = (rear +1)%size;
//         }
//         arr[rear] = val;
//     }

//     void pop_back(){
//         if(isEmpty()){
//             cout<<"Dequeue Underflow\n";
//             return;
//         }
//         cout<<"Last pop: "<<arr[rear]<<endl;
//         if(front == rear){
//             front = rear = -1;
//         }else if(rear == 0){
//             rear = size-1;
//         }
//         else{
//             rear--;
//         }
//     }

//     void pop_front(){
//         if(isEmpty()){
//             cout<<"Dequeue Underflow\n";
//             return;
//         }
//         cout<<"Front pop: "<<arr[front]<<endl;
//         if(front == rear){
//             front = rear = -1;
//         }
//         else{
//             front = (front + 1)%size;
//         }
//     }

//     void getFront(){
//         if(isEmpty()){
//             cout<<"Dequeue Underflow\n";
//             return;
//         }
//         cout<<"Front element: "<<arr[front]<<endl;
//     }
//     void getRear(){
//         if(isEmpty()){
//             cout<<"Dequeue Underflow\n";
//             return;
//         }
//         cout<<"Rear element: "<<arr[rear]<<endl;
//     }

//     void display(){
//         if(isEmpty()){
//             cout<<"Dequeue Underflow\n";
//             return;
//         }
//         int i = front;
//         while(1){
//             cout<<arr[i]<<" -> ";
//             if(i==rear) break;
//             i = (i+1)%size;
//         }
//         cout<<"NULL\n";
//     }
// };
// int main(){
//     Dequeue dq(5);

//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_front(5);
//     dq.push_back(30);

//     dq.display();

//     dq.pop_front();
//     dq.display();

//     dq.pop_back();
//     dq.display();

//     dq.push_front(100);
//     dq.display();

//     dq.getFront();
//     dq.getRear();
// }



//================================== Priority Queue ===========================

class priorityQueue{
    int *arr;
    int size;
    int n;

public:
    priorityQueue(int s){
        size = s;
        arr = new int[size];
        n = 0;
    }

    ~priorityQueue(){
        delete[] arr;
    }

    bool isEmpty(){
        return n == 0;
    }
    bool isFull(){  
        return n==size;
    }

    void enqueue(int val){
        if(isFull()){
            cout << "Priority Queue Overflow\n";
            return;
        }

        int i = n-1;
        while(i>=0 && arr[i]>val){
            arr[i+1] = arr[i];
            i--;
        }

        arr[i+1] = val;
        n++;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Priority Queue Underflow\n";
            return;
        }

        cout << "Removed (highest priority): " << arr[n-1] << endl;
        n--;
    }

    void peek(){
        if(isEmpty()){
            cout << "Priority Queue Empty\n";
            return;
        }

        cout << "Highest Priority Element: " << arr[n-1] << endl;
    
    }

    void display(){
        if(isEmpty()){
            cout << "Priority Queue Empty\n";
            return;
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" -> ";
        }
        cout<<endl;
    }
};

int main(){
    priorityQueue pq(10);

    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(50);
    pq.enqueue(40);

    pq.display();

    pq.peek();

    pq.dequeue();
    pq.display();
}