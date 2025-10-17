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

// int main(){
//     vector<int> nums = { 2, 7, 11, 15 };
//     int target = 9;

//     vector<pair<int, int>> arr;
//     int n = nums.size() - 1;
//     int left = 0, right = n;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         arr.push_back({nums[i], i});
//     }
//     sort(arr.begin(), arr.end());

//     while (left < right)
//     {
//         int sum = arr[left].first + arr[right].first;

//         if (sum == target)
//         {
//             cout << "(" << arr[left].second << ", " << arr[right].second << ")" << endl;
//             break;
//         }
//         else if (sum < target)
//         {
//             left++;
//         }
//         else
//         {
//             right--;
//         }
//     }
// }


// int main(){
//     vector<string> str = {"flower", "flow", "flight"};
//     char comparitor = str[0][0];
//     for(int i=0; i<str.size();i++){
//         for(int j=0; j<str[i].size();j++){
//             // cout << str[i][j] << " ";
//             if(str[i][j] == str[i+1][j]){
//                 comparitor = str[i][j];
//             }
//         }
//         cout << comparitor << endl;
//     }
// }



//brute force approch for (14. Longest common prefix) [used chat gpt]
// string adder (const vector<string> strs){
//     if (strs.empty())
//         return "";

//     string prefix = "";
    
//     for(int i=0;i<strs[0].size(); i++){
//         char ch = strs[0][i];
//         for(int j=1; j<strs.size();j++){
//             if(strs[j][i] !=ch || i>=strs[j].size()){
//                 return prefix;
//             }
//         }
        
//         prefix += ch;
//     }
// }

// int main(){
//     vector<string> strs = {""};
//     cout<<adder(strs); 
// }




// Brute force (26. Remove Duplicates from Sorted Array)
// int main(){
//     vector<int> arr = {0, 0, 1, 1};
//     int j = 1;
   
//     for(int i=1; i<arr.size(); i++){
//         if(arr[i]!=arr[i-1]){
//             arr[j] = arr[i];
//             j++;
//         }
//     }
        
//     cout<<j;
// }


//Brute force (35. insert search position)

int binary( vector<int> nums, int target){
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout<<binary(nums, target);
    
}

