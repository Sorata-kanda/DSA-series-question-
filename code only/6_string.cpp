#include<iostream>
#include <string.h>
using namespace std; 

int main(){
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
    char str5[] = "Rahul Jangra";
    int len =0;
    for(int i=0; str5[i]!='\0';i++){
        len++;
    }
    cout<<"Length: "<<len<<endl;

}