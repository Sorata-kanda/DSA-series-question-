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

// digits of a number
void digitTaker(int n2){
    cout<<"digits: ";
    while(n2>0){
        int div = n2%10;
        cout<<div<<" ";
        n2 /=10;
    }
    cout<<endl;
}



//Armstrong number
bool isArmstrong(int n3){
    int summ=0;
    int temp = n3;
    while(n3>0){
        int div = n3%10;
        div = div*div*div;
        summ += div;
        n3/=10; 
    }
    if(summ == temp){
        return true;
    }
    else{
        return false;
    }
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

    cout<< "count: "<<count<<endl;



    //digits of a number
    int n2 = 3568;
    digitTaker(n2);

    //armstrong number
    int n3 = 153;
    if(isArmstrong(n3)){
        cout<<n3<<" is a Armstrong Number"<<endl;
    }
    else{
        cout<< n3<<" is Not a Armstrong Number"<<endl;
    }
    
}