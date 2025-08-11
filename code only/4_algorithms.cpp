//[not uploaded] - these problem are not found but solved here

#include<iostream>
#include<vector>
#include <climits>
#include <algorithm>
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


// int main(){
//     vector<int> arr = {3,4,5,6,7,0,1,2};
//     int tar = 0, start = 0, end = arr.size() - 1, mid;
//     while(start <= end){
//         mid = start + (end - start) / 2;
//         if(arr[mid] == tar){
//             cout << mid;
//             break;
//         }
//         // Check if the left half is sorted
//         if(arr[start] <= arr[mid]){
//             if(arr[start] <= tar && tar < arr[mid]){ // Logic error: should compare with arr[mid]
//                 end = mid - 1;
//             }
//             else{
//                 start = mid + 1;
//             }
//         }
//         // Otherwise, the right half must be sorted
//         else{
//             if(arr[mid] <= tar && tar <= arr[end]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//     }
//     return 0;
// }






//--------------------------------------Peak index in mountain---------------------------------------------------------

// int main() {
//     vector<int> arr = {0, 3, 8, 9, 5, 2};
//     int start = 0, end = arr.size() - 1;

//     while (start < end) {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] > arr[mid + 1]) {
//             end = mid; // The peak is in the left half, including mid
//         } else {
//             start = mid + 1; // The peak is in the right half, excluding mid
//         }
//     }
//     // At the end of the loop, start and end will both point to the peak element
//     cout << start;

//     return 0;
// }

//======================Teacher's code==================

//In this code we need check points, but there are some conditionds there are in question by which
//we don't need to use check points anymore

//1. array should be least 3 values long
//2. array should be always in decreasing and increasing order
//3. peak element can't exists on start or end [important condition]

// int main(){
//     vector<int> arr = {0,3,8,9,5,2};
//     // int start = 0, end = arr.size()-1, mid;
//     int start = 1, end = arr.size()-2 ,mid; 
//     // we take these values cause we have conditions by taking these 
//     //there is no need to add check points because by these our array will not overflow
//     while(start<=end){
//         mid = start + (end - start)/2;
//         if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
//             cout<<mid;
//             break;
//         }
//         if(arr[mid-1]<arr[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
// }


//---------------------------------single element in sorted array-------------------------------------------------------
                    // This is a wrong code written by me! 

                    // int main(){
                    //     vector<int> arr = {1,1,2,3,3,4,4,8,8};
                    //     int start = 0, end = arr.size()-1, mid;
                    //     while(start<end){
                    //         mid = start+ (end - start)/2;
                    //         if(arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]){
                    //             cout<<arr[mid];
                    //             break;
                    //         }

                    //         if(mid%2==0){
                            
                    //             if(arr[mid-1] == arr[mid]){
                    //                 end = mid - 1;
                    //             }
                    //             else{
                                
                    //                 start = mid + 1;
                    //             }
                    //         }
                    //         else{

                    //             if (arr[mid - 1] == arr[mid])
                    //             {
                    //                 start = mid + 1;
                    //             }
                    //             else
                    //             {
                    //                 end = mid - 1;
                    //             }
                    //         }
                    //     }
                    // }

//perfect code :-

// int main()
// {
//     vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
//     int start = 0, end = arr.size() - 1, mid;

//     while (start < end)
//     {
//         mid = start + (end - start) / 2;

//         // Ensure mid is the first in the pair
//         if (mid % 2 == 1)
//         {
//             mid--;
//         }

//         if (arr[mid] == arr[mid + 1])
//         {
//             // Unique element is after this pair
//             start = mid + 2;
//         }
//         else
//         {
//             // Unique element is before or at mid
//             end = mid;
//         }
//     }

//     // When loop ends, start == end, which is the index of the single element
//     cout << arr[start] << endl;
//     return 0;
// }


//Teacher's code:-

// int main(){
//     vector<int> arr = {1};
//     int start = 0, end = arr.size()-1, mid;
//     if (arr.size() == 1)
//     {
//         cout << arr[0];
//         return 0;
//     }
//     while(start<end){
//         mid = start+ (end - start)/2;


//         if (mid == 0 && arr[mid] == arr[mid + 1])
//         {
//             cout << arr[mid];
//             break;
//         }
//         if(mid == arr.size()-1 && arr[mid] == arr[mid-1]){
//             cout << arr[mid];
//             break;
//         }
//         if(arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]){
//             cout<<arr[mid];
//             break;
//         }

//         if(mid%2==0){

//             if(arr[mid-1] == arr[mid]){
//                 end = mid - 1;
//             }
//             else{

//                 start = mid + 1;
//             }
//         }
//         else{

//             if (arr[mid - 1] == arr[mid])
//             {
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }
// }

//----------------------------------palindrome number-------------------------------------------------------
// int main(){
//     int x = -121;
//     int temp = x;
//     int y=0;
//     if(x<0){
//         cout<<"false";
//     }
//     else{
//         while(x>0){
//             y = y*10 + x%10;
//             x/=10;
//             // cout<<y<<" ";
//         }
//         if(temp==y){
//             cout<<"true";
//         }else{
//             cout<<"false";
//         }
//     }
// }


//----------------------------------Book allocation [Hard] [not uploaded]------------------------------------------------

// bool isValid(vector<int> arr, int n, int m, int mid){
//     int student = 1, pages =0;

//     for(int i=0;i<n;i++){
//         if(arr[i]>mid){
//             return false;
//         }

//         if(pages + arr[i]<=mid){
//             pages += arr[i];
//         }else{
//             student++;
//             pages = arr[i];
//         }
//     }
//     if(student == m){
//         return true;
//     }
//     else{
//         return false;
//     }
// }



// int allocateBooks(vector<int> arr, int n, int m){
//     if(m>n){
//         return -1;
//     }
//     int summ =0;
//     for(int value: arr){
//         summ += value; 
//     }
//     int start =0 ,end = summ,ans=-1;
//     while(start<=end){
//         int mid = start + (end -start)/2 ;
//         if(isValid(arr, n, m, mid)){
//             ans = mid;
//             end = mid-1;
//         }
//         else{
//             start = mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     // vector<int> arr = {2, 1, 3, 4};
//     vector<int> arr = {15,17,20};
    
//     int n=4 ,m=2;

//     cout<< allocateBooks(arr,n,m)<<endl;
//     return 0;
// }


//---------------------------Painter Partition problem [Hard] [not uploaded]----------------------------------

// bool isPossible(vector<int> arr, int n, int m, int mid){
//     int painters =1, time = 0;
//     for(int i=0; i<n; i++){
//         if(time + arr[i]<=mid){
//             time += arr[i];
//         }else{
//             painters++;
//             time = arr[i];
//         }
//     }
//     if(painters <= m){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int minTimeToPaint(vector<int> arr, int n, int m){
//     int summ = 0;
//     int maxVal = INT_MIN;
//     for(int i=0; i<n;i++){
//         summ += arr[i];
//         maxVal = max(maxVal, arr[i]);
//     }
    
//     int start = maxVal;
//     int end = summ;
//     int ans = -1;

//     while (start <=end)
//     {
//         int mid = start + (end-start)/2;
//         if(isPossible(arr, n, m, mid)){
//             ans = mid;
//             end = mid -1;
//         }
//         else{
//             start = mid+1;
//         }
//     }
//     return ans;
    
// }
// int main(){
//     vector<int> arr = {40, 30, 10, 20};
//     int n=4 , m=2;

//     cout<<minTimeToPaint(arr, n, m)<<endl;
//     return 0;

// }


//-----------------------------------------Aggresive cows problem [Hard] [not uploaded]------------------------------------

// bool isValid(vector<int> arr, int n, int c,int mid){
//     int cows= 1 , last = arr[0];
//     for(int i=1; i<n;i++){
//         if(arr[i] - last >= mid){
//             cows ++ ;
//             last  = arr[i];
//         }
//         if(cows == c){
//             return true;
//         }
//     }
//     return false;
// }

// int finder(vector<int> arr, int n, int c){
//     sort(arr.begin(), arr.end());
//     int start = 1; int end = arr[n-1]-arr[0];
//     int ans = -1;
//     while (start<=end)
//     {
//         int mid = start + (end -start)/2; 
//         if(isValid(arr, n,c,mid)){
//             ans = mid;
//             start = mid+1;

//         }else{
//             end = mid-1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {1,2,8,4,9};
//     int n = 5, c = 3;

//     cout<<finder(arr,n,c)<<endl;

// }


/* 
=======================================NOTICE=======================================

                DATE :- (Thrusday) 8 AUG 2025 [revise previous hard question and understood them]
                [The next topic is sorting and I will start that from MONDAY]
                [No extra question added]
                [Thanks]


*/
 
// ----------------------------------Sorting----------------------------------------

//===============Bubble Sort==================// O(n^2) [not good techique]
void bubble(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {   
        bool isSorted = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSorted = true;
            }
        }
        if(!isSorted){
            return;
        }
    }
    cout << "Bubble:     ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout<<endl;
}

// ====================selection sort===============
void selection(vector<int> arr, int n){
    for(int i=0; i<n;i++){
        int smallest = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[smallest]){
                smallest = j;   
            }
        }
        swap(arr[i],arr[smallest]);
    }
    cout << "Selection:  ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout<<endl;
}


//==============insertion sort==========
void insertion(vector<int> arr, int n){ //O(n^2)
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    cout<< "Insertion:  ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    cout << "\n\n";
    bubble(arr,n);
    selection(arr, n);
    insertion(arr, n);
    cout << "\n\n";
}

