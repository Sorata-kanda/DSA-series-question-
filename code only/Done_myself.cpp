#include<iostream>
#include<vector>
#include<climits>
#include<string>
#include <algorithm>
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


// int main(){
//     string haystack = "hello";
//     string needle = "ll";
//     int counter = -1;
//     int n = haystack.size();
//     int m = needle.size();
//     if (m == 0)
//         return 0;
//     for (int i = 0; i <= n - m; i++)
//     {
//         if (haystack.substr(i, m) == needle)
//         {
//             cout<<i; //instead  of using cout, we should use return but this is not a function that's why we are using cout
//             counter = 0;
//         }
//     }
//     if(counter!=0){
//         cout<<"-1";
//     }
// }





//Taking a break from DSA so that i can focus on JS and web dev



// 1. Two sum:- wrong approch(sorting can't be done in this)
// int main(){

//     vector<int> nums = {3,2,4};
//     int target = 6;
//     vector<int> arr;
//     sort(nums.begin(), nums.end());
//     int n = nums.size() - 1;
//     int left = 0, right = n;
//     while (left < right)
//     {
//         if (nums[left] + nums[right] > target)
//         {
//             right--;
//         }
//         else if (nums[left] + nums[right] < target)
//         {
//             left++;
//         }
//         else
//         {
//             arr.push_back(left);
//             arr.push_back(right);
//             left++; right--;
//         }
//     }
//     for(int i =0; i<arr.size(); i++){
//         cout<< arr[i]<< " ";
//     }
// }


// 2. right approch for : Two Sum

int main(){
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    vector<pair<int, int>> arr;
    int n = nums.size() - 1;
    int left = 0, right = n;
    for (int i = 0; i < nums.size(); i++)
    {
        arr.push_back({nums[i], i});
    }
    sort(arr.begin(), arr.end());

    while (left < right)
    {
        int sum = arr[left].first + arr[right].first;

        if (sum == target)
        {
            cout << "(" << arr[left].second << ", " << arr[right].second << ")" << endl;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}