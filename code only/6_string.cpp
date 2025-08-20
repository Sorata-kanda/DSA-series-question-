#include<iostream>
#include <string.h>
#include<string>
#include <algorithm>
using namespace std;

bool ispallindrome(string str){
    string rev = str; 
    reverse(rev.begin(), rev.end());

    if (str ==rev)
    {
        return true;
    }
    else{
        return false;
    }
} 

int main()
{
    // char str[] = "rahul Jangra";
    // cout<<str<<endl;
    // cout << strlen(str) << endl;



    // char str2[] = {'a','b','c','\0'};
    // cout<<str2<<endl;
    // cout << strlen(str2) << endl;



    // char str3[100]; //we have to give the range no matter what if we are getting  input from user
    // cout << "Type your string here: ";
    // cin>>str3; //fault in this input is if your use whitespace then it will return
    // cout<<"output: ";
    // cout<< str3<<endl;



    // char str4[100];
    // cout<<"Type your string 4 here: ";
    // // syntax = cin.getline(str,length, delimeter)
    // cin.getline(str4,100,'$'); //delimiter is basically return whwn a specific char is encountered
    // cout<<str4<<endl;

    // for(char c: str4){
    //     cout<< c << " ";
    // }


    //let's count char in a string
    // char str5[] = "Rahul Jangra";
    // int len =0;
    // for(int i=0; str5[i]!='\0';i++){
    //     len++;
    // }
    // cout<<"Length: "<<len<<endl;




    //There is strings in c++ and we can use it instead of using char

    // string str = "Rahul jangra";
    // cout<<str<<endl;
    // str = "nothing";
    // cout<<str<<endl;


    // string str1 = "Rahul ";
    // string str2 = "Jangra";
    // string str3 = str1+str2;
    // cout<<str3<<endl;

    // cout<<(str1==str2)<<endl;
    // cout<<str1.length()<<endl;


    // string str4;
    // getline(cin,str4);
    // cout<<str4<<endl;


    // string str5 = "Rahul Jangra.";
    // for(int i=0; i<str5.length();i++){
    //     cout<<str5[i]<<" ";
    // }
    // cout<<endl;

    // //for each loop 
    // cout<< "Output form for each loop: "<<endl;
    // for(char ch: str5){
    //     cout<<ch<<" ";
    // }
    // cout<<endl;

    // //reverse of string;
    
    // cout<<"Reverse string: ";
    // reverse(str5.begin(),str5.end());
    // cout<<str5<<" ";
    // cout<<endl;



    //Question :- check if a string is palindrome or not?

    string strr = "madam";
    cout<<ispallindrome(strr)<<endl;
}