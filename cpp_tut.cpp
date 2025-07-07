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
//         for(int j=n-i;j<2*i-3;j++){
//             cout<<" ";
//         }
//         for(int j=n-i;j<i+4;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


// }


// int main(){
//     int n=4;
//     // top
//     for(int i=0; i<n; i++){
//         // spaces
//         for(int j=0;j<n-i-1;j++){
//             cout<< " ";
//         }
//         cout<<"*";


//         // spaces
//         if(i!=0){
//             for(int j=0;j<2*i-1;j++){
//                 cout<< " ";
//             }
//             cout<< "*";
//         }



//         cout<<endl;
//     }
//     //bottom
//     for(int i=0; i<n-1; i++){
//         // spaces
//         for(int j=0 ;j<i+1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         // spaces
//         if(i!=n-2){
//             for(int j=0; j<2*(n-i)-5;j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }   
        
//         cout<< endl;
//     }
//     return 0;
// }


//practice question 
/* Print this pattern

*        *
**      ** 
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/


// ------------------------------------------------Functions------------------------------------------------------


//Min of 2 numbers:-

// void min(int a, int b){ // These are parameters!!
//     if(a>b){
//         cout<< "N = "<< a << " is greater than M";
//         // WE can also write "return a" (if out datatype of function is INT);
//     }
//     else {
//         cout << "M = " << b <<" is greater than N";
//         // WE can also write "return b" (if out datatype of function is INT);
//     }
// }
// int main(){
//     int n,m;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     cout<< "Enter value of m: ";
//     cin>>m;
//     min(n,m); // These are arguments!!
// }



//calculate sum of number from 1 to n

// int summed(int a){
//     int sum =0;
//     for(int i=0;i<=a;i++){
//         sum += i;
//         // cout<<sum<<"   "; //TO check how this is wroking uncomment this line! 
        
//     }
//     return sum;
// }
// int main(){
//     int a =10;
//     cout<<summed(a);
// }



// FACTORIAL :)


// int fact(int a){
//     int mul=1;
//     for(int i=1;i<=a;i++){
//         mul *= i;
//         // cout << mul <<"   ";  to understand how it works uncomment this (●'◡'●)
//     }
//     return mul;
// }
// int main(){
//     cout<< fact(5);
// }



// Find sum of digits of a number:- 

// int digited(int n){
//     int sum=0;
//     while(n > 0){
//         int i = n%10;
//         n = n/10;
//         // cout << i <<" ";
//         sum += i;
//     }
//     return sum;
// }

// int main(){
//     int n = 2356;
//     cout<<digited(n);
// }



// calculate ncr bionomial cofficient!  formula = ⁿCr = n!/r!(n-r)!

// int fact(int n){
//     int mul =1;
//     for(int i=1; i<=n; i++){
//         mul *= i;
//     }
//     return mul;
// }
// int main(){
//     int n = 8;
//     int r = 2;
//     int factN = fact(n);
//     int factR = fact(r);
//     int sub = fact(n-r);
  

//     int sus = factN/(factR*sub);
//     cout<< sus;
// }




// WAF to check if a number is prime or not .

// WAF to print all prime numbers from 2 to N.


// Function to print the nth Fibonacci number
// int fibonacci(int n) {
//     if (n <= 1) return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     cout << "Enter the position of Fibonacci number: ";
//     cin >> n;
//     cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
//     return 0;
// }


//-------------------------------------Chapter -6 ----------------------------------------------------------------------------




// binary number system

// int binary(int n){
//     int ans = 0;
//     int pow = 1;
//     while(n>0){
//         int rem = n%2;
//         n = n/2;
//         ans += rem*pow;
//         pow = pow*10;

//     }
//     return ans;
// }

// int main(){
//     int n=2;
//     int m;
//     cout<<"enter the values you need decimal number for: ";
//     cin >> m;
//     for(int i=n; i<=m;i++){
//         cout <<"value of "<< i << " = " <<binary(i);
//         cout<< endl;
//     }
//     return 0;
// }


// reverse binary to decimal

// int bintodec(int n){
//     int pow = 1;
//     int ans =0;
//     while(n>0){
//         int rem = n%10;
//         ans += rem*pow;
//         n/=10;
//         pow *= 2;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<< "Enter the value you want to convert: ";
//     cin>>n;
//     cout<<"Decimal number of binary(" << n << ") = " <<bintodec(n); 
// }


//understand binary system in detail :- https://youtu.be/xpy5NXiBFvA?si=ALrc_7z45InDio76&t=1895

// int main(){
//     int a =10, b=23;
//     cout<<(a&b);
// }
// int main(){
//     int a =10, b=23;
//     cout<<(a|b);
// }
// int main(){
//     int a =10, b=23;
//     cout<<(a^b);
// }

// int main(){
//     cout<<(4 << 1); //left shift this is - a*2(pow b)
// }
// int main(){
//     cout<<(4 >> 1); //right shift this is - a/2(pow b)
// }





// priority 

// Operators

// !, +, - (unary operators)

// *,/,%
// +, -

// <, <= , >=,>

// == , !=

// & &

// =

// (assignment operator)

// Precedence
// R to L
// L to R
// L to R
// L to R
// L to R
// L to R
// L to R
// R to L
// first
// second
// thir
// fourth
// fifth
// sixth
// seventh
// last


// Data type modifers
// long
// short
// long long
// signed 
// unsigned


// Questions to solve
// Figure out how to find if a number is power of 2 without any loop.
// WAF to reverse an Integer n.