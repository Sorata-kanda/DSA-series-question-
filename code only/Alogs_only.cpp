#include<iostream>
using namespace std;





// ============================================= Merge Sort =================================

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;  // Size of left half
    int n2 = r - mid;       // Size of right half
    
    int left[n1], right[n2];  // Temp arrays
    
    // Copy data to temp arrays
    for(int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = l;  // k tracks position in original array
    
    // Merge back into arr[]
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements
    while(i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l >= r) return;
    int mid = l + (r - l) / 2;  // Fixed: was (l-r), should be (r-l)
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int main(){
    int arr[] = {12,31,35,8,32,17,30};
    int n=7;
    mergeSort(arr,0,n-1);
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

