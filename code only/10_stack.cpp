#include<iostream>
#include<string>
#include<cmath>
#include<stack>

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


// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class stack{
//     Node* top;
// public:

//     stack(){
//         top = NULL;
//     }

//     ~stack(){
//         while(!isEmpty()){
//             pop_back();
//         }
//     }


//     bool isEmpty(){
//         return top == NULL;
//     }

//     void push_back(int val){
//         Node* newNode = new Node(val);
//         newNode->next = top;
//         top = newNode;
//     }

//     void pop_back(){
//         if(isEmpty()){
//             cout<<"Stack is Underflow"<<endl;
//             return;
//         }
//         Node* temp = top;
//         cout<<"Popped data: "<<temp->data<<endl;
//         top = top->next;
//         delete temp;
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"Stack is underflow"<<endl;
//             return;
//         }
//         cout<<top->data<<endl;

//     }

//     void display(){
//         if(isEmpty()){
//             cout<<"Stack is underflow"<<endl;
//             return;
//         }
//         Node* temp = top;
//         while(temp != NULL){
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };


// int main(){
//     stack s;

//     s.push_back(10);
//     s.push_back(20);
//     s.push_back(30);

//     s.display();

//     cout<<s.isEmpty()<<endl;

//     s.pop_back();
//     s.peek();
//     s.display();
// }



//========================= Parenthesis Problem =======================================

// bool isBal(string s){
//     stack<char> st;
//     for(char c : s){
//         if(c == '(' || c == '{' || c == '['){
//             st.push(c);
//         }
//         else if(c==')' || c == '}' || c == ']'){
//             if(st.empty()) return false;

//             char top = st.top();
//             st.pop();

//             if((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top!= '[')){
//                 return false;
//             }
//         }
//     }
//     return st.empty();
// }

// int main(){
//     string st;
//     cout<<"Give string here: ";
//     getline(cin,st);
//     if(isBal(st)){
//         cout<<"Balanced";
//     }else{
//         cout<<"Not Balanced";
//     }
// }

//------------------------- revision of the question -----------------------------

// bool Balancer(string str){
//     stack<char> st;
//     for(char c : str){
//         if(c == '(' || c == '{'|| c == '['){
//             st.push(c);
//         }else if(c == ')' || c == '}' ||c == ']'){
//             if(st.empty()) return false;
            
//             char top = st.top();
//             st.pop();

//             if((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')){
//                 return false;
//             }
//         }
//     }
//     return st.empty();
// }

// int main(){
//     string str = "(a+b*(c-d))";
//     if(Balancer(str)){
//         cout<<"String "<<str<<" is Balanced";
//     }else{
//         cout<<"String "<<str<<" is not Balanced";

//     }
// }



//========================= Infix to postfix conversion =============================

// int prec(char c){
//     if(c == '^') return 3;
//     if(c == '*'|| c == '/') return 2;
//     if(c == '+' || c == '-') return 1;
//     return 0;
// }

// string infixToPostfix(string s){
//     stack<char> st;
//     string result = "";
//     for(char c:s){
//         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >='0' && c<='9')){
//             result += c;
//         }else if(c == '('|| c == '['|| c == '{'){
//             st.push(c);
//         }else if(c == ')'|| c == ']'|| c == '}'){
//             while(!st.empty() && st.top() != '('){
//                 result += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }else{
//             while(!st.empty() && prec(st.top())>= prec(c)){
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }
//     while(!st.empty()){
//         result += st.top();
//         st.pop();
//     }
//     return result;
// }

// int main(){
//     string s = "(A+B)*C";
//     cout<<infixToPostfix(s);
// }



//=============================== Postfix expression ===========================

int postfix(string s){
    stack<int> st;
    
    for(char c : s){
        if(isdigit(c)){
            st.push(c-'0');
        }else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            
            int res;
            switch(c){
                case '+': res = b+a; break;
                case '-': res = b-a; break;
                case '*': res = b*a; break;
                case '/': res = b/a; break;
                case '^': res = pow(b,a); break;
            }
            st.push(res);
        }
    }

    return st.top();
}

int main(){
    string exp = "23*54*+9-";
    cout<<postfix(exp);
}
