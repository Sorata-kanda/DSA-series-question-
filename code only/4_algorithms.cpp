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



int binaryse(vector<int> arr, int target){
    int start = 0, end = arr.size() - 1, mid;
    while(start <= end){
        mid = (start + end) / 2;
        if(arr[mid] > target){
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1; // Return -1 if the target is not found
}
int main(){
    vector<int> arr = {-1,0,3,4,7,8,9};
    int tar1 = 8;
    // cout<<binaryse(arr,tar1);

    vector<int> arr2 = {-1,0,3,5,6,12};
    int tar2 = 3;
    cout << binaryse(arr2, tar2);
}


