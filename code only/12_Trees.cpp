#include<iostream>
#include<algorithm>
using namespace std;




    //     1
    //    / \
    //   2   3
    //  / \
    // 4   5
// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// void preorder(Node* root){
//     if(root == NULL){return;}

//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node* root){
//     if(root == NULL) return;
    
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void postorder(Node* root){
//     if(root == NULL) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder: ";
//     preorder(root);

//     cout << "\nInorder: ";
//     inorder(root);

//     cout << "\nPostorder: ";
//     postorder(root);

//     return 0;
// }



//============================================= Binary Search Tree (BST Intro + Insert + Search)=================================


    //     8
    //    / \
    //   3   10
    //  / \    \
    // 1   6    14
    //    / \   /
    //   4  7  13

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// Node* insert(Node* root, int val){    //O(log n)
//     if(root == NULL){
//         return new Node(val);
//     }

//     if(val<root->data){
//         root->left = insert(root->left,val);
//     }else if(val>root->data){
//         root->right = insert(root->right,val);
//     }
//     return root;

// }

// bool search(Node* root, int key){     //O(log n)
//     if(root == NULL){
//         return false;
//     }

//     if(root->data == key) return true;

//     if(key<root->data){
//         return search(root->left,key);
//     }
//     return search(root->right,key);
// }
// Node* inorderSuccessor(Node* root){
//     Node* curr = root;
//     while(curr && curr->left != NULL)
//         curr = curr->left;
//     return curr;
// }
// Node* deleteNode(Node* root, int key){
//     if(root == NULL){
//         return root;
//     }

//     if(key<root->data){
//         root->left = deleteNode(root->left,key);
//     }else if(key>root->data){
//         root->right = deleteNode(root->right,key);
//     }
//     else{
//         if(root->left == NULL){
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }else if(root->right == NULL){
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }
//         Node* temp = inorderSuccessor(root->right);
//         root->data = temp->data;
//         root->right = deleteNode(root->right, temp->data); 
//     }
//     return root;
// }

// void inorder(Node* root){           //O(n)
//     if(root == NULL) return;
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main(){
//     Node* root = NULL;
//     int arr[] = {8,3,10,1,6,14,4,7,13};
//     for(int x : arr){
//         root = insert(root,x);
//     }

//     cout<<"Inorder Sorted: ";
//     inorder(root);
//     cout<<endl;
//     cout<<"Searching: 20 -> "<<(search(root,20) ? "Founf" : "Not Found")<<"\n";

//     cout<<"Searching 7 -> "<<(search(root,7) ? "Found" : "Not Found")<<"\n";

//     cout << "Inorder before deletion: ";
//     inorder(root);

//     root = deleteNode(root, 6);

//     cout << "\nInorder after deleting 6: ";
//     inorder(root);
// }



//============================================= Height of a Tree =================================

// class Node{
// public:
//     int data;
//     Node* right;
//     Node* left;
//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };


// Node* insert(Node* root, int val){
//     if(root == NULL){
//         root = new Node(val);
//     }
//     if(val<root->data){
//         root->left = insert(root->left,val);
//     }
//     else if(val>root->data){
//         root->right = insert(root->right,val);
//     }
//     return root;
    
// }

// void inorder(Node* root){
//     if(root == NULL) return;
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int height(Node* root){                  //O(n)
//     if(root == NULL) return 0;
//     int lh = height(root->left);
//     int rh = height(root->right);
//     cout<<" lh: "<<lh<<" rh: "<<rh<<endl;
//     return 1+max(lh,rh);
// }

// int countNodes(Node* root){
//     if(root == NULL) return 0;
//     return 1 + countNodes(root->left) +  countNodes(root->right);
// }

// int sumNodes(Node* root){
//     if(root == NULL) return 0;
//     return root->data +sumNodes(root->left) + sumNodes(root->right);
// }

// int diameter(Node* root, int &height){
//     if(root == NULL){
//         height = 0;
//         return 0;
//     }

//     int lh = 0 , rh = 0;

//     int ld = diameter(root->left,lh);
//     int rd = diameter(root->right,rh);

//     height = 1 + max(lh,rh);

//     int currDia = lh+rh+1;
//     return max(currDia, max(ld,rd));
// }
// int main(){
//     Node* root = NULL;
//     int arr[] ={1,2,22,11,3,4,5};
//     for(int x: arr){
//         root = insert(root,x);
//     }
//     insert(root,100);
//     cout<<"Tree: ";
//     inorder(root);
//     cout<<endl;
//     cout<<"Height: ";
//     cout<<height(root);
//     cout<<endl;
//     cout<<"Node count: ";
//     cout<<countNodes(root);
//     cout<<"\n";
//     cout<<"Sum of Nodes: ";
//     cout<<sumNodes(root);
//     cout<<"\nDiameter: ";
//     int h = 0;
//     cout<<diameter(root,h);
// }


//============================================= Tower of Hanoi =================================


// int moveCount = 0;

// void tower(int n, char source, char helper, char des){
//     if(n == 0) return;
//     tower(n-1, source, des, helper);
//     moveCount++;
//     cout << "Move " << moveCount << ": disk " << n << " from " << source << " to " << des << endl;
//     tower(n-1, helper, source, des); 
// }

// int main(){
//     int n = 3;
//     tower(n, 'A', 'B', 'C');
//     cout << "\nTotal moves: " << moveCount << endl;
//     return 0;
// }

