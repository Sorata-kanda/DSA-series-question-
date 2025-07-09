#include<iostream>
#include<windows.h>
using namespace std;

// int main(){
//     int marks[3]= {1,2,3};
//     // double price[] = {99.9, 89.9, 100.9};// this array will automatically take 3 spaces
//     cout << marks[0]<< endl; 
// }


//basics of array
// int main(){
//     int size = 5;
//     int arr[size];
//     int a = 1; 
//     for(int i=0; i<size; i++){
//         cout<< "Enter array of "<< a<< "th place: ";
//         cin>>arr[i];
//         a++;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<endl;
//     }
// }


//finding smallest and largest


// int main(){
//     int f;
//     int temp;
//     cout<<"Enter 0 to find smallest and 1 for largest: ";
//     cin>>f;
//     if(f == 0){
//         temp = INT_MAX;
//     }
//     else{
//         temp = INT_MIN;
//     }
//     int arr[5]= {1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         if(f == 0){
//             if(arr[i]<temp){
//                 temp = arr[i];
//             }
//         }
//         else{
//             if(arr[i]>temp){
//                 temp = arr[i];
//             }
//         }
//     }
//     cout << temp;
// }


// array position finder

// int main(){
//     int arr[10] = {34,19,27,48,13,53,67,85,92,76};
//     int small = INT_MAX;
//     int position = 1;
//     for(int i =0; i<10; i++){
//         if(arr[i]<small){
//             small = arr[i];
//             position = i+1;
//         }
        
//         // cout<< position;
        
//     }
//     cout<<"Position: "<<position<<endl;
//     cout<<"Number: "<<small;
// }




//proof that array get call from refrence not from value

// void changer(int arr[3]){
//     for(int i=0;i <3;i++){
//         arr[i] = 3*arr[i];
//     }
// }
// int main(){
//     int arr[3] = {1,2,3};
//     cout<<endl;
//     cout<<"before function: ";
//     for(int i=0; i<3;i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<"\n\n";
//     changer(arr);
//     cout<<"after function: ";
//     for(int i=0; i<3;i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<endl;
//     cout<<endl;
// }



//linear search

// int main(){
//     int arr[10] = {34,19,27,48,13,53,67,85,92,76};
//     int target;
//     int position = 0;
//     int flag = 0;
//     cout<< "Enter the number: ";
//     cin >> target;
//     for(int i=0;i<10;i++){
//         if(arr[i] == target){
//             position = i+1;
//             flag = 1;
//             break;
//         }
//         position = i+1;
//         // if(arr[i]!=target){
//         //     cout<< "Not at position" << position<<endl;
//         // }
        
//     }
//     cout<<endl;
//     cout<< "Target to found: "<<target<<endl;
//     if(flag == 1){  
//         cout<<"Target found at position: "<<position;
//     }
//     else{
//         cout<<"Target does not exist in array";
//     } 
// }


//reversing a array using 2pointer approach
// int main(){
//     int size = 11;
//     int arr[size] = {1,2,3,4,5,6,7,8,9,10,11};
//     int start =0;
//     int end = size-1;
//     int temp;
//     for(int i=0;i<size/2;i++){
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Teacher's method

// void reverse(int arr[],int size){
//     int start = 0, end = size-1;
    
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = 10;
//     reverse(arr,size);
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Homework

// WAF to calculate sum & product of all numbers in an array.

// WAF to swap the max & min number of an array.

// WAF to print all the unique values in an array.

// WAF to print intersection of 2 arrays.