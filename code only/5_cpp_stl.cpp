#include <iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);


    vec.erase(vec.begin());
    vec.erase(vec.begin()+2);
    vec.insert(vec.begin()+2,3); //first we give poisiton then we give the value we want to insert  
    vec.empty(); // used to check if the vector is empty or not


    //Iterators

    vec.begin();
    vec.end();
    for(int i: vec){
        cout<<i<<" ";
    }
    return 0;
}