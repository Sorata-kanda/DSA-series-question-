#include<iostream>
#include<vector>
#include<climits>
#include<string>
using namespace std;

// 1. Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// int main()
// {
//     vector<int> nums = { 4, 1, 2, 1, 2 };
//      int n = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         n = n ^ nums[i];
//     }
//     cout<<n;
// }

// 2. 28. Find the Index of the First Occurrence in a String
    //Given two strings needle and haystack,
    // return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.


int main(){
    string haystack = "hello";
    string needle = "ll";
    int counter = -1;
    int n = haystack.size();
    int m = needle.size();
    if (m == 0)
        return 0;
    for (int i = 0; i <= n - m; i++)
    {
        if (haystack.substr(i, m) == needle)
        {
            cout<<i; //instead  of using cout, we should use return but this is not a function that's why we are using cout
            counter = 0;
        }
    }
    if(counter!=0){
        cout<<"-1";
    }
}