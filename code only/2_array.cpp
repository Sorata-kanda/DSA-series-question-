#include<iostream>
#include<windows.h>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
//     int marks[3]= {1,2,3};
//     // double price[] = {99.9, 89.9, 100.9};// this array will automatically take 3 spaces
//     cout << marks[0]<< endl; 
// }


//basics of array
// int main(){
//     int size = 5;
//     int arr[size];
//     int a = 1; 
//     for(int i=0; i<size; i++){
//         cout<< "Enter array of "<< a<< "th place: ";
//         cin>>arr[i];
//         a++;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<endl;
//     }
// }


//finding smallest and largest


// int main(){
//     int f;
//     int temp;
//     cout<<"Enter 0 to find smallest and 1 for largest: ";
//     cin>>f;
//     if(f == 0){
//         temp = INT_MAX;
//     }
//     else{
//         temp = INT_MIN;
//     }
//     int arr[5]= {1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         if(f == 0){
//             if(arr[i]<temp){
//                 temp = arr[i];
//             }
//         }
//         else{
//             if(arr[i]>temp){
//                 temp = arr[i];
//             }
//         }
//     }
//     cout << temp;
// }


// array position finder

// int main(){
//     int arr[10] = {34,19,27,48,13,53,67,85,92,76};
//     int small = INT_MAX;
//     int position = 1;
//     for(int i =0; i<10; i++){
//         if(arr[i]<small){
//             small = arr[i];
//             position = i+1;
//         }
        
//         // cout<< position;
        
//     }
//     cout<<"Position: "<<position<<endl;
//     cout<<"Number: "<<small;
// }




//proof that array get call from refrence not from value

// void changer(int arr[3]){
//     for(int i=0;i <3;i++){
//         arr[i] = 3*arr[i];
//     }
// }
// int main(){
//     int arr[3] = {1,2,3};
//     cout<<endl;
//     cout<<"before function: ";
//     for(int i=0; i<3;i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<"\n\n";
//     changer(arr);
//     cout<<"after function: ";
//     for(int i=0; i<3;i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<endl;
//     cout<<endl;
// }



//linear search

// int main(){
//     int arr[10] = {34,19,27,48,13,53,67,85,92,76};
//     int target;
//     int position = 0;
//     int flag = 0;
//     cout<< "Enter the number: ";
//     cin >> target;
//     for(int i=0;i<10;i++){
//         if(arr[i] == target){
//             position = i+1;
//             flag = 1;
//             break;
//         }
//         position = i+1;
//         // if(arr[i]!=target){
//         //     cout<< "Not at position" << position<<endl;
//         // }
        
//     }
//     cout<<endl;
//     cout<< "Target to found: "<<target<<endl;
//     if(flag == 1){  
//         cout<<"Target found at position: "<<position;
//     }
//     else{
//         cout<<"Target does not exist in array";
//     } 
// }


//reversing a array using 2pointer approach
// int main(){
//     int size = 11;
//     int arr[size] = {1,2,3,4,5,6,7,8,9,10,11};
//     int start =0;
//     int end = size-1;
//     int temp;
//     for(int i=0;i<size/2;i++){
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Teacher's method

// void reverse(int arr[],int size){
//     int start = 0, end = size-1;
    
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = 10;
//     reverse(arr,size);
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Homework

// WAF to calculate sum & product of all numbers in an array.

// WAF to swap the max & min number of an array.

// WAF to print all the unique values in an array.

// WAF to print intersection of 2 arrays.

//H.P - 1
// int  sumed(int arr[],int size){
//     int sum =0;
//     for(int i=0; i<size; i++){
//         sum += arr[i];
//     }
//     return sum;
// }
// int  muled(int arr[],int size){
//     int mul =1;
//     for(int i=0; i<size; i++){
//         mul *= arr[i];
//     }
//     return mul;
// }
// int main(){
//     int size = 7;
//     int arr[size] = {1,2,3,4,5,6,7};
//     cout<<"sum: "<< sumed(arr,size);
//     cout<<endl;
//     cout<<"mul: "<<muled(arr,size);
// }   



//H.P - 2
// int main(){
//     int size = 7;
//     int arr[size] = {1,2,3,4,5,6,7};
//     int maxi = INT_MIN;
//     int mini = INT_MAX;
//     int pos1 =0, pos2 = 0;
//     for(int i=0;i<size;i++){
//         if(arr[i]<mini){
//             mini = arr[i];
//             pos1 = i;
//         }
//         if(arr[i]>maxi){
//             maxi = arr[i];
//             pos2 = i;
//         }
//     }
//     swap(arr[pos1],arr[pos2]);
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<< " ";
//     }
//     return 0;
// }


//-----------------------------------vectors---------------------------------------------

// int main(){
//     vector<int> vec = {1,2,3,4,5};
//     vector<int> fuck (3,0); //1st parameter shows the size while the second shows what kind of value are there
//     cout << vec[0]<<endl;
//     cout<< fuck[1];

//     return 0;
// }

// int main(){
//     vector<char> yoyo = {'a','b','c','d','e','f'};
//     for(char i: yoyo){
//         cout<< i<< endl;
//     }

//         //we can also print the size of a vector
//     cout<< "size = "<<yoyo.size();
// }


// int main(){
//     vector<int> vec;
//     cout<<"initial size: "<< vec.size()<<endl;
//     vec.push_back(25); // we can only push one value in one funciton '_'
//     vec.push_back(89);
//     vec.push_back(26);
//     vec.push_back(45);
//     cout<<"After pushing at the end of vector, size is:"<<vec.size()<<endl;
//     for(int i:vec){
//         cout<<i<< " ";
//     }
//     cout<< "\n\n";


//     //using pop_back
//     vec.pop_back();
//     for(int i:vec){
//         cout<<i<< " ";
//     }
//     cout<< "\n\n";

//     //using front and back and at
//     cout << vec.front()<<endl;
//     cout << vec.back()<<endl;
//     cout << vec.at(2);
//     cout << vec.at(3); // this will give an error as we pop of the 3rd value in our vector
    

// }

// int main(){
//     vector<int> vec;

//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     // vec.push_back(3);
//     // vec.push_back(4);
//     cout<< vec.size() << endl<< vec.capacity();  // capactiry came 4 because vecotr gets double each time if it get's full :) 
// }


//finding the unique value in the vector
//caution ::⚠️This value can find only 1 unique value, if there are multiple unique value in vector this code fails, ex:-  vector<int> vec = {1,2,3,1};
// int main(){
//     vector<int> vec = {1,2,3,1,2};
//     int ans = 0;

//     for(int i:vec){
//         ans ^=i;
//     }
//     cout<<ans;
// }


// H.W 
// remaining {
// WAF to print all the unique values in an array.

// WAF to print intersection of 2 arrays.}

//WAF of linear search using vector

//WAF reverse a array using vector







//--------------------------------------------kadane's algorithm------------------------------------------------------------------


//finding th sum of subarray
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int sum=0;
//     for(int start=0;start<size;start++){
//         for(int end=start; end<size;end++){
//             for(int i = start; i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<< " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//brute force approch
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int maxsum = INT_MIN;
//     for(int start=0;start<size;start++){
//         int curr_sum = 0;
//         for(int end=start; end<size;end++){
//             curr_sum += arr[end];
//             maxsum = max(curr_sum,maxsum);
//         }
//         // cout<<endl;
//     }
//     cout<<maxsum;
//     return 0;
// }

//using kadanes algorithm

// int main(){
//     int size = 5;
//     int arr[size] = {1,2,-3,4,-5};
//     int curr_sum =0, maxi = INT_MIN;
//     for(int i=0;i<size;i++){
//         curr_sum += arr[i];
//         maxi = max(curr_sum,maxi);
//         if(curr_sum<0){
//             curr_sum = 0;
//         }
//     }
//     cout<<maxi;
// }


//using vector
// int main(){
//     int size = 5;
//     vector<int> vec = {1,2,-3,4,-5};
//     int curr_sum =0, maxi = INT_MIN;
//     for(int i:vec){
//         curr_sum += i;
//         maxi = max(curr_sum,maxi);
//         if(curr_sum<0){
//             curr_sum = 0;
//         }
//     }
//     cout<<maxi;
// }


//---------------------------------------------- Pair sum (Brute force approch)--------------------------------------------------

// int main(){
//     vector<int> vec = {1,2,3,4,5};
//     int ans = 0;
//     int target = 7;
//     for(int i:vec){
//         for(int j = i+1; j<vec.size(); j++){
//             if(vec[i]+vec[j] == target){
//                 cout<< vec[i]<<" + "<<vec[j]<<" = "<<vec[i]+vec[j]<<"\n";
                
//             }
//         }
//     }
//     return 0;
// }

//Teacher's approch

// vector<int> pairs(vector<int> arr, int target){
//     vector<int> ans;
//     int size = arr.size();
//     for(int i=0; i<size;i++){
//         for(int j=0; j<size;j++){
//             if(arr[i] + arr[j] == target){
//                 // ans.push_back(arr[i]); //these give the index value 
//                 // ans.push_back(arr[j]);
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 // return ans;
//             }
//         }
//     }
//     return ans; 
// }
// int main(){
//     vector<int> arr = {2,7,11,15};
//     int target = 9;

//     vector<int> oyye = pairs(arr,target);
//     cout<<oyye[0]<<", "<<oyye[1];
// }


//Optimised approch

// int main(){
//     vector<int> arr = {2,7,11,15};
//     int target = 9;
//     int i =0;
//     int j = arr.size() - 1;
//     while(i<j){
//         if(arr[i]+arr[j]>target){
//             j--;
//         }
//         else if(arr[i]+arr[j]<target){
//             i++;
//         }
//         else {
//             cout<<arr[i]<<", "<<arr[j];
//             i++;j--;
//         }
//     }
//     return 0;
// }


//Teacher;s approch

// vector<int> pairs(vector<int> arr, int target){
//     vector<int> ans;
//     int size = arr.size();
//     int i=0, j=size-1;
//     while(i<j){
//         int pair = arr[i]+ arr[j];
//         if(pair>target){
//             j--;
//         }
//         else if(pair<target){
//             i++;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans; 
// }
// int main(){
//     vector<int> arr = {2,7,11,15};
//     int target = 26;

//     vector<int> oyye = pairs(arr,target);
//     cout<<oyye[0]<<", "<<oyye[1];
// }




//---------------------------------------Majority Element (Brite force approch)-------------------------------------------------


// int main(){
//     vector<int> arr = {1,3,4,1,1,1};
//     int size = arr.size();
//     for(int i: arr){
//         int fre = 0;
//         for(int j:arr){
//             if(j==i){
//                 fre++;
//             }
//         }
//         if(fre>size/2){
//             cout<<i;
//             break;
//         }
//     }
// }   

// A small optimised approch


// int main(){
//     vector<int> vec ={2,2,1,1,1,2,2};
//     int size = vec.size(); 
//     sort(vec.begin(), vec.end());
//     int freq =1;
//     int ans = vec[0];
//     for(int i=1;i<size;i++){
//         if(vec[i]==vec[i-1]){
//             freq++;
//         }
//         else{
//             freq =1;
//             ans = vec[i];
//         }
//         if(freq>size/2){
//             cout<< ans;
//             break;
//         }
//     }
//     return 0;
// }



// -------------------------------------------Moore's voting algorithm---------------------------------------

// int main(){
//     vector<int> arr = {1,2,2,1,1};
//     int size= arr.size();
//     int freq =0; 
//     int ans =0;
//     for(int i=0;i<size;i++){
//         if(freq==0){
//             ans= arr[i];
//         }
//         if(ans == arr[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }
//     // To check the variation (just in case there is not majority element)
//     int count =0;
//     for(int i:arr){
//         if(i==ans){
//             count++;
//         }
//     }
//     if(count>size/2){
//         cout<<ans;
//     }
//     else{
//         cout<<"Nothing in majority";
//     }
//     // cout<<ans;
// }




/*
so today i have done time and space complaxity out of which i am having trouble understadning the recurion
time and space complaxity so for now i am leaving it as such and i am thinking to complete that later on
when i will elarn more about recursion and some more sorting methonds

https://youtu.be/PwKv8fOcriM?si=c_2pbKD7mKNfHlrE&t=3956

The time stamp is and try to understand the whole time and space complexity fo recursion from 
aounr 45:00
That's all for today , have a nice day*/




//binary exponetiation x^n


// int main(){
//     long big = 10;
//     double ans = 1;
//     double x = 2.0000;
//     while(big>0){
//         if(big%2==1){
//             ans *=x;

//         }
//         x*=x;
//         big  /=2;

//     }
//     cout << ans; 

// }

//if our power is in negative :-

// int main(){
//     long big = -2;
//     double ans = 1;
//     double x = 2.0000;
//     if(big<0){
//             x = 1/x;
//             big = -big;
//         }

//     while(big>0){
//         if(big%2==1){
//             ans *=x;

//         }
        
//         x*=x;
//         big  /=2;

//     }
//     cout << ans; 

// }


//---------------------------------------Buy and sell problem---------------------------

int main(){
    vector<int> prices = {7,1,5,3,6,4}; 
    int max_profit = 0;
    int best_buy =  prices[0];
    for(int i=0; i<prices.size();i++){
        if(prices[i]>best_buy){
            max_profit = max(max_profit,prices[i]-best_buy);
        }
        best_buy = min(best_buy,prices[i]);
    }
    cout<< max_profit;
}