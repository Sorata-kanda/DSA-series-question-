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


int main(){
    int f;
    int temp;
    cout<<"Enter 0 to find smallest and 1 for largest: ";
    cin>>f;
    if(f == 0){
        temp = INT_MAX;
    }
    else{
        temp = INT_MIN;
    }
    int arr[5]= {1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(f == 0){
            if(arr[i]<temp){
                temp = arr[i];
                cout<< temp<<endl;
            }
        }
        else{
            if(arr[i]>temp){
                temp = arr[i];
            }
        }
    }
    cout << temp;
}
