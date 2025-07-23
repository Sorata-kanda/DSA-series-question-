#include<iostream>
#include<vector>
using namespace std;

//  * --> derefrence operator(value at address
// array is a constant pointer which can't be changed



// int main(){
//     int a =10;
//     int *ptr = &a;
//     int** ptr2 = &ptr;
//     cout<<ptr<<endl<<&a<<endl<<ptr2<<endl;
//     cout<<*(&a);


//     // cout<<&a;
// }


// -----------------------------------Pass by refrence----------------------
// int changeA(int* ptr){
//     *ptr = 20;
//     return *ptr;
// }
// int main(){
//     int a =10;
//     cout<<changeA(&a);
// }


//----------------------------------By alias--------------------------------
// int changeA(int &b){
//     b =20;
//     return b;
// }
// int main(){
//     int a = 10;
//     cout<<changeA(a);
// }


//-------------------------increament and decrement--------------------------
// int main(){
//     int a=10;
//     int* ptr = &a;
//     cout<<ptr<<endl;
//     ptr = ptr + 2; // 2int => 2x4 === 8 bytes
//     cout<< ptr<<endl;
//     ptr = ptr -4; // 4int => 4x4 === -16bytes
//     cout<<ptr<<endl;

// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout<<arr<<endl<<&arr[0]<<endl; // arr is address of index 0;
//     cout<<arr+2<<endl<<*(arr+2)<<endl<<&arr[2];

// }

// int main(){
//     int* ptr2 ;//100
//     int* ptr1 = ptr2+2;//108;
//     cout<<ptr1-ptr2<<endl;// 2bytes // Addition (+) is not allowed like subtration
// }

