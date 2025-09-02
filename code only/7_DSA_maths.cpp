#include <iostream>
#include<vector>
using namespace std;

//Prime Numebrs

string IsPrime(int n){
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return "Non - Prime\n";
        }
    }
    return "Prime\n";
}


//seive of Eratosthenes    //optimised approch to find prime number of a range
vector<int> isPrime(int n, bool F){

}


int main(){
    int n = 2;
    cout<<IsPrime(n);

    // seive of Eratosthenes
    int n1 = 50;
    vector<bool> isPrime(n1 + 1, true); //vector<int> primer(11(size),10(a constant value))
    int count =0;

    for(int i=2; i<n1;i++){
        if(isPrime[i]){
            count++;
            for(int j=i*2; j<n1; j = j+i){
                isPrime[j] = false;

            }
        }
    }

    cout<< "count: "<<count;

}