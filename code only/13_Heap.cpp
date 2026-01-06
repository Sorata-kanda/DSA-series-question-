#include<iostream>
using namespace std;



class MaxHeap{
public:
    int arr[100];
    int size;

    MaxHeap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size++;
        arr[size] = val;

        int  i = size;
        while(i>1 && arr[i/2] < arr[i]){
            swap(arr[i],arr[i/2]);
            i = i/2;
        }
    }

    void print(){
        for(int i= 1; i<=size; i++){
            cout<<arr[i]<<" ";
            
        }
        cout<<endl;
    }
};


int main(){
    MaxHeap h;
    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(60);

    h.print();
}