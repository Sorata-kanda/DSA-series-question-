#include<iostream>
#include <string.h>
#include<string>
#include <algorithm>
using namespace std;

// bool ispallindrome(string str){
//     string rev = str; 
//     reverse(rev.begin(), rev.end());

//     if (str ==rev)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// } 

// int main()
// {
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

    // string strr = "ab5ba";
    // cout<<ispallindrome(strr)<<endl;


    
    
// }



// lettcode question :- valid palindrome

// bool IsAlphaNum(char ch)
// {
//     if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
//     {
//         return true;
//     }
//     return false;
// }

// bool isPalindrome(string s)
// {
//     int st = 0, end = s.length() - 1;
//     while (st < end)
//     {
//         if (!IsAlphaNum(s[st]))
//         {
//             st++;
//             continue;
//         }
//         if (!IsAlphaNum(s[end]))
//         {
//             end--;
//             continue;
//         }
//         if (tolower(s[st]) != tolower(s[end]))
//         {
//             return false;
//         }
//         st++;
//         end--;
//     }
//     return true;
// }

// int main()
// {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);

//     if (isPalindrome(s))
//     {
//         cout << "Palindrome\n";
//     }
//     else
//     {
//         cout << "Not Palindrome\n";
//     }

//     return 0;
// }


//leetcode problem :- remove all occurances of substring
string removeOccurrences(string s, string part)
{
    while (!s.empty() && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s, part;
    cout << "Enter the main string: ";
    getline(cin, s);
    cout << "Enter the substring to remove: ";
    getline(cin, part);

    string result = removeOccurrences(s, part);
    cout << "Result: " << result << endl;

    return 0;
}