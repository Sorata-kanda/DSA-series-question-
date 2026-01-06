#include<iostream>
using namespace std;





// ============================================= Merge Sort =================================

// void merge(int arr[], int l, int mid, int r){
//     int n1 = mid - l + 1;  // Size of left half
//     int n2 = r - mid;       // Size of right half
    
//     int left[n1], right[n2];  // Temp arrays
    
//     // Copy data to temp arrays
//     for(int i = 0; i < n1; i++)
//         left[i] = arr[l + i];
//     for(int j = 0; j < n2; j++)
//         right[j] = arr[mid + 1 + j];
    
//     int i = 0, j = 0, k = l;  // k tracks position in original array
    
//     // Merge back into arr[]
//     while(i < n1 && j < n2){
//         if(left[i] <= right[j]){
//             arr[k] = left[i];
//             i++;
//         } else {
//             arr[k] = right[j];
//             j++;
//         }
//         k++;
//     }
    
//     // Copy remaining elements
//     while(i < n1){
//         arr[k] = left[i];
//         i++;
//         k++;
//     }
//     while(j < n2){
//         arr[k] = right[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int l, int r){
//     if(l >= r) return;
//     int mid = l + (r - l) / 2;  // Fixed: was (l-r), should be (r-l)
//     mergeSort(arr, l, mid);
//     mergeSort(arr, mid + 1, r);
//     merge(arr, l, mid, r);
// }
// int main(){
//     int arr[] = {12,31,35,8,32,17,30};
//     int n=7;
//     mergeSort(arr,0,n-1);
//     cout << "Sorted Array: ";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }





// ============================================= Bubble Sort =================================

// void bubble(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j = 0; j<n-i-1; j++){
//             if(arr[j]> arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// void selection(int arr[], int n){
//     for(int i =0; i<n-1; i++){
//         int smallest = i;
//         for( int j = i+1; j<n; j++){
//             if(arr[j] < arr[smallest]){
//                 smallest = j;
//             }
//         }
//         swap(arr[i], arr[smallest]);
//     }
// }

// void insertion(int arr[], int n){
//     for(int i=1; i<n-1; i++){
//         int curr = i;
//         prev = i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1] = arr[prev];
//             prev--; 
//         }
//         arr[prev+1]=curr;
//     }
// }
// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";

//     }
//     cout<<endl;
// }

// int main(){
//     int n = 5;
//     int arr[] = {4, 1, 5, 2, 3};
//     // bubble(arr,n);
//     selection(arr,n);
//     printArray(arr,n);

//     return 0;
// }






// ============================================= Quick Sort =================================

// int partition(int arr[], int st,int end){
//     int idx = st-1;
//     int pivot = arr[end];
//     for(int j = st;j<end; j++){
//         if(arr[j] <= pivot){
//             idx++;
//             swap(arr[j], arr[idx]);
//         }
//     }
//     idx++;
//     swap(arr[end], arr[idx]);
//     return idx;
// }

// void quick(int arr[], int st, int end){
//     if(st >= end){
//         return;
//     }
//     int pivot = partition(arr, st, end);
//     quick(arr, st, pivot - 1);
//     quick(arr, pivot + 1, end);
// }

// int main(){
//     int arr[5] = {10,3,8,6,9};
//     int n = 5;
//     quick(arr,0,n-1);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// ============================================= Linear & Binary Searching =================================

// void search(int arr[], int val){
//     for(int i=0; i<=5;i++){
//         if(arr[i] == val){
//             cout<<"Found at index: "<<i<<endl;
//             return;
//         }
//     }
//     cout<<"Not found"<<endl;
// }

// void Binsearch(int arr[], int val){
//     int start = 0;
//     int end = 5;
//     int mid;
//     while(start <= end){
//         mid = start + (end - start)/2;
//         if(arr[mid] == val){
//             cout<<"Found at index: "<<mid<<endl;
//             return;
//         }else if(arr[mid] < val){
//             start = mid + 1;
//         }else{
//             end = mid - 1;
//         }
//     }
//     cout<<"Not found"<<endl;

// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int val = 3;
//     Binsearch(arr, val);

// }