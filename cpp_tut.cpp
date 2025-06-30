#include <iostream>
#include <windows.h>
using namespace std;


// int main(){
//     cout << "hello world" << endl;
//     cout << "Thanks for printing that!"<< "\n"; //a bit fast then endl!
//     cout << "Shirou Neko\n";
//     return 0;


//     int age;
//     cout << "Enter the age: ";
//     cin >> age;
//     cout << "Your age is : " << age << endl;
// }


// int main(){
//     int a,b;
//     cout << "Enter the values of a: ";
//     cin >> a;
//     cout << "Enter the values of b: ";
//     cin >> b;
//     cout << a%b << endl;
// }


// int main(){
//     int a;
//     cout <<"\n";
//     cout << "Enter value of A: ";
//     cin >> a;
//     // cout <<"\n";
//     int b;
//     cout << "Enter value of B: ";
//     cin >> b;
//     if (b > a){
//         cout << "B is greater than A: " << (b>a) << "\n";
//         cout <<"\n";
//     }
//     else {
//         cout << "A is greater thean B: " << (a>b) << "\n";
//         cout <<"\n";
//     }
// }



// int main(){
//     int a = 10;
//     int b = a++;
//     int c = ++a;
//     cout << "value of b: " << b << endl; //a is increased but it's a post increasment
//     cout << "value of a: " << a << endl;
//     cout << "value of c: " << c << endl;
// }

// int main(){
//     SetConsoleOutputCP(CP_UTF8);
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if (age >= 18 && age <= 100) {
//         cout << "You are eligible😆." << "\n";
//     }
//     else {
//         cout << "We are sorry, but you are not eligible🥲." << "\n";
//     }
// }


// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     // if (n>=0 ){
//     //     cout << n << " Is positive..." << "\n";

//     // }
//     // else{
//     //     cout << n << " Is negative" << "\n";
//     // }

//     (n>=0)? cout << n << " Is positive..." : cout << n <<" Is Negative..."; // Ternary operator!!

//     cout << (n>=0?  "Postive" :  "Negative"); // More smaller way to write this!
//     return 0;

// }




// int main(){
//     int n = 0;
//     while(n<=5){
//         cout << n << " ";
//         n++;
//     }
// }


// int main(){
//     int n;
//     int sum = 0;
//     cout << "Enter the values of n: ";
//     cin >> n;
//     for(int i=1;i<=n; i = i+2){
//         sum += i;
//         // cout << sum << " ";
//     }
//     cout << "Count of all odd numbers: "<< sum << " ";
// }




// int main(){
//     SetConsoleOutputCP(CP_UTF8);
//     int n;
//     int i=1;
//     cout << "This is a do while loop🕸️\nNow we are getting ready to start loop. . ." << "\n";
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "\n";
//     do{
        
//         cout << i << " ";  
//         i++;
//     }
//     while (i<=n);
//     cout << "\n\n";
//     return 0;
// }




// int main(){
//     int n;
//     int flag =0;
//     cout << "Enter a number: ";
//     cin >> n;
//     // for(int i=2; i<=n-1; i++){
//     for(int i= 2; i*i <= n; i++){         //This optimisation make sure that the last value n travels is root n! 
//         if (n%i==0){
//             flag = 0;
//             break;
//         } 
//         else{
//             flag = 1;
//         }
//         // cout << flag;
//     }
//     if (flag == 1){
//         cout << n << " is a Prime number";
//     }
//     else{
//         cout << n << " is Not Prime";
//     }
// }




// int main(){
//     int x = 10;
//     for (int i = 1; i<=5; i++){
//         int m = 5;
//         for(int j=1; j<=m;j++){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
// }



// SQUARE pattern with numbers;

// int main(){
//     int n;
//     cout<<"Enter the number of rows and columsn you want: ";
//     cin >> n;
//     for(int i =1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout <<"  " << j;
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter the number of rows and columsn you want: ";
//     cin >> n;
//     for(int i =0; i<n; i++){
//         char ch = 65;// you can also write  - 'A'
//         for(int j=0; j<n; j++){
//             cout << ch++ <<"  " ;
//         }
//         cout << endl;
//     }
// }

//countinuation of series 

// int main(){
//     int n;
//     cout << "SET the row and coulmns limit: ";
//     cin >> n;
//     int counter = 1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << counter++ << " ";
//         }
//         cout << endl;
//     }
// }

// //For alphabets

// int main(){
//     int n;
//     cout << "SET the row and coulmns limit: ";
//     cin >> n;
//     char counter = 65;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << counter++ << " ";
//         }
//         cout << endl;
//     }
// }


//triangle patterns

// int main(){
//     int n=4;
//     for(int i=0; i<n;i++){
//         for(int j=0; j<i+1;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n=4;
//     for(int i=0; i<n;i++){
//         int count = 1;
//         for(int j=0; j<i+1;j++){
//             cout << count++;
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int n =4;    
//     for(int i=1; i<=n; i++){        
//         for(int j=0; j<i; j++){
//             cout << i;           
//         }    
//         cout<<endl;
//     } 
// }



// int main() {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << ch;
//         }
//         cout << endl;
//         ch++;
//     }
//     return 0;
// }



// int main(){
//     int n=4;
//     for(int i=0; i<n;i++){

//         for (int j=1; j<=i+1;j++){
//             cout<<j;
//         }

//         cout<<endl;
//     }
//     return 0;
// }


//reverse triangle pattern

// int main(){
//     int n=4;

//     for(int i=0; i<n; i++){
//         for(int j = i+1; j>0;j--){
//             cout<< j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n = 4;
//     int count =1;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<i+1; j++){
//             cout<<count++<< " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=0; i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch++;
//         }
//         cout<<endl;
//     }
// }

//Reverse alphabets order
// int main(){
//     int n=4;
//     char ch='Z';
//     for(int i=0; i<n;i++){
//         for(int j = i+1;j>0;j--){
//             cout<<ch--;
//         }
//         cout<<endl;
//     }
// }



// ----------------------------------------------------INVERTED TRIANGLES--------------------------------------------------------



// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i;j++){
//             cout<<" ";
//         }
    
//         for(int k=0; k<n-i; k++){
//             cout<<i+1;
//         }
//         cout<<endl;
      
//     }
//     return 0;
// }


//char version


// int main(){
//     int n=4;
//     char ch= 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i;j++){
//             cout<<" ";
//         }
    
//         for(int k=0; k<n-i; k++){
//             cout<<ch;
//         }
//         cout<<endl;
//         ch++;
//     }
// }


//inversted piramid


// int main(){
//     int n=4;
//     for(int i=1; i<=n; i++){
        
    
//         for(int k=0; k<n-i; k++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++){
//             cout<<j;
//         }
//         for(int j=1; j<i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }    
// }



//This have the the reverse loop in 3rd triangle!
// int main(){
//     int n=4;
//     for(int i=0; i<n;i++){
//         for(int j=0; j<n-i; j++){
//             cout << " "; 
//         }
//         for(int j=0; j<i+1;j++){
//             cout<<j+1;
//         }
//         for(int j=i; j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Hollow diamond patterns! !!⚠️This is still remaining

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=n-i;j>n-i-1;j--){
//             cout<<"*";
//         }
//         for(int j=n-i+1;j)
//         cout<<endl;
//     }


// }



//teacher's done!

int main(){
    int n=4;
    //top
    for(int i=0; i<n; i++) {
    //spaces
        for(int j=0; j<n-i-1; j++) {
        cout << " ";

        }

        cout << "*";

        if(i != 0) {
        //spaces
        for(int j=0; j<2*i-1; j++) {
        cout << " ";

        cout << "*";

    }cout << endl;
}