#include<iostream>
#include<vector>
#include<stack>
using namespace std;


class Stack{
    int *arr;
    int top;
    int size;
public:
    Stack(int s){
        size = s;
        arr = new int[size];
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == size -1;
    }

    void push(int val){
        if(isFull()){
            cout<<"Stack Overloaded\n";
            return;
        }
        arr[++top] = val;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack underflow\n";
            return;
        }
        cout<<"Pooped: "<<arr[top--]<<endl;
    }

    void peek(){
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return;
        }
        cout<<"Top element: "<< arr[top]<<endl;
    }

    void display(){
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return;
        }
        cout<<"Stack (Top -> Bottom): ";
        for(int i=top; i>=0;i--){
            cout<<arr[i]<<" ";
        }
            cout<<endl;

    }

};

int main(){
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();

    
    return 0;
}