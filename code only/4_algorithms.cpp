#include<iostream>
#include<vector>
using namespace std;

//--------------------------------------Binary serach algoo---------------------------------------------

// int main(){
//     vector<int> yo = {-11,-6,0,2,3,4,5};
//     int start = 0, end = yo.size()-1, mid;
//     int target = 0;

//     while(start <= end){
//         mid = (start + end) / 2;

//         if(yo[mid] == target){
//             cout<< mid;
//             break;
//         }
//         else if (target > yo[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return 0;
// }

// ==================using function====================

// int binaryse(vector<int> arr, int target){
//     int start = 0, end = arr.size() - 1, mid;
//     while(start <= end){
//         mid = (start + end) / 2; // we can write this as mid = start + (end - start) / 2 so that the capacity of the integer  will not overlow
//         if(arr[mid] > target){
//             end = mid - 1;
//         }
//         else if(arr[mid] < target){
//             start = mid + 1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1; // Return -1 if the target is not found
// }
// int main(){
//     vector<int> arr = {-1,0,3,4,7,8,9};
//     int tar1 = 8;
//     // cout<<binaryse(arr,tar1);

//     vector<int> arr2 = {-1,0,3,5,6,12};
//     int tar2 = 3;
//     cout << binaryse(arr2, tar2);
// }


// =================using recursion====================
// int bb(vector<int> arr,int target,int start, int end){
    
//     if(start <=end){
//         int mid = start + (end - start)/2;
//         if(target<arr[mid]){
//             return bb(arr,target,start,mid-1);
//         }
//         else if(target>arr[mid]){
//             return bb(arr,target,mid+1,end);
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1; 
// }

// int main(){
//     vector<int> arr = {-1,0,3,5,9,12};
//     int target =  12;
//     int start = 0, end = arr.size()-1;
//     cout<<bb(arr,target,start,end);
// }


// ---------------------------------------------Search in Rotated array-----------------------------------------------------


int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int tar = 0, start = 0, end = arr.size() - 1, mid;
    while(start <= end){
        mid = start + (end - start) / 2;
        if(arr[mid] == tar){
            cout << mid;
            break;
        }
        // Check if the left half is sorted
        if(arr[start] <= arr[mid]){
            if(arr[start] <= tar && tar < arr[mid]){ // Logic error: should compare with arr[mid]
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        // Otherwise, the right half must be sorted
        else{
            if(arr[mid] <= tar && tar <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return 0;
}

