#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;

// int main(){
    //all function:- size, erase, clear, begin, end, rbegin, rend,insert, front, back {these also exist in list}

    // vector<int> vec; //{vector is a dynamic array}
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);


    // vec.erase(vec.begin());
    // vec.erase(vec.begin()+2);
    // vec.insert(vec.begin()+2,3); //first we give poisiton then we give the value we want to insert  
    // vec.empty(); // used to check if the vector is empty or not


    // //Iterators

    // vec.begin();
    // vec.end();
    // for(int i: vec){
    //     cout<<i<<" ";
    // }



    //List {behave like a doubly linked list}

    // list<int> l;

    // l.push_back(1); //push_back and emplace_back are sam options!!
    // l.push_back(2);
    // l.push_back(3);
    // l.push_front(0);
    // l.push_front(-1);
    // l.push_front(-2);
    // l.push_front(-3);
    // l.pop_front();
    // l.pop_back();

    // for(int i: l){
    //     cout<< i<<" ";
    // }
    // cout << l[2]; //{diffrence between list and deque is , list can't print random valur address}

    //Deque {Double ended queue}   note:- {deque and dequeue , dequeue is like pop} 

    // deque<int> l;
    // l.push_back(1); 
    // l.push_back(2);
    // l.push_back(3);
    // l.push_front(0);
    // l.push_front(-1);
    // l.push_front(-2);
    // l.push_front(-3);
    // l.pop_front();
    // l.pop_back();

    // for (int i : l)
    // {
    //     cout<< i<<" ";
    // }
    // cout<<endl; 
    // cout<<l[2]; //{diffrence between list and deque is , list can't print random valur address}


    //Pair :-

    // pair<int,int> p= {1,2};
    // pair<int, pair<string, int>> pp = {1, {"Rahul Jangra" , 1}};
    // cout << p.first << endl;
    // cout << p.second << endl;

    // cout << pp.first << endl;
    // // cout << pp.second << endl; // {this will throw an error}
    // cout << pp.second.first << endl;
    // cout << pp.second.second << endl;


    //Vector with pairs:-

    // vector<pair<int, int>> vec = { {1, 2}, {15,3}, {5, 4}, {4, 8}, {11, 9} };

    // vec.push_back({44,44});   // This kust insert
    // vec.emplace_back(44,44);  // In-place objects create 

    // // for(pair<int,int> p : vec){
    // //     cout<<p.first<< " "<<p.second<<endl;
    // // }

    // ////Insetead of writeen the upper loop we  can jsut write the lower once

    // for (auto p : vec)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }




    //Stack:-  {LIFO (last in forst out) }
    // all function :- push, emplace, top, pop, size, empty, swap
    // stack<int> s;

    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // stack<int> s2;
    // s2.swap(s);

    // cout << "s size: " << s.size() << endl;
    // cout << "s2 size: " << s2.size() << endl;

    
    // while (!s2.empty())
    // {
    //     cout << s2.top() << " ";
    //     s2.pop();
    // }

    // cout << endl;


    //Queue (FIFO [forst in first out!!])

    // queue<int> s;

    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // while(!s.empty()){
    //     cout << s.front() << endl;
    //     s.pop();
        
    // }



    //Priority queue
    // priority_queue<int> pq;

    // pq.push(5);
    // pq.push(2);
    // pq.push(33);
    // pq.push(46);
    // pq.push(2);

    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }



    //reverse order:-

    // priority_queue<int, vector<int>, greater<int>> pq;

    // pq.push(5);
    // pq.push(2);
    // pq.push(33);
    // pq.push(46);
    // pq.push(2);

    // while (!pq.empty())
    // {
    //     cout << pq.top() << endl;
    //     pq.pop();
    // }



    //Map [key & value pairs (key are unique while value can have duplicates)]

    // map<string,int> m;
    // m["Rahul   "] = 1;
    // m["Avik    "] = 2;
    // m["Raj     "] = 3;

    // m.insert({"insert  " , 4});
    // m.emplace("emplace ",5);
    // m.erase("Avik    ");

    // for(auto p: m){
    //     cout<< p.first << " : "<< p.second<<endl;
    // }
    // cout<<endl;
    // cout<< "count function : " << m.count("Rahul   ")<<"\n\n";

    // //find function - if it found the target it returns it's iterator(not int), if not then it returns the m.end() value

    
    // if(m.find("Rahul   ") != m.end()){
    //     cout<<"FOUND!\n";
    // }else{
    //     cout<<"Not found\n";
    // }



    //multi map [it can store duplicates, cause of that we can't use:-  m[] = example ,, we have to use insert or emplace]
    // multimap<string,int> mm;
    
    // mm.emplace("robot", 100);
    // mm.emplace("robot", 60);
    // mm.emplace("robot", 0);
    // mm.emplace("robot", 10);
    // mm.emplace("robot", 500);
    // cout << "count of robot: "<<mm.count("robot")<<endl;

    // // mm.erase("robot"); //This will erase the whole map
    // mm.erase(mm.find("robot")); // but this will only remove one, as this will remove that specific itreator/address
    
    // for(auto p : mm){
    //     cout<< p.first << " : "<<p.second<<endl;
    // }
    // cout<< "count of robot: "<< mm.count("robot")<<endl;



    //unordered map :- it gives data in random pattern // also it have O(1) time complexity while map have O(logn)

    // unordered_map<string, int> mm;

    // mm.emplace("robot", 100);
    // mm.emplace("unknow thing 1", 60);
    // mm.emplace("unknow thing 2", 0);
    // mm.emplace("unknow thing 3", 10);
    // mm.emplace("unknow thing 4", 500);

    // for(auto p : mm){
    //     cout<< p.first << " : "<<p.second<<endl;
    // }


    //set :- O(logn) // very similar to map

    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(7);

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // //no duplicate allowed and they will not get count even if we insert them again

    // cout<<"Lower bound: " << *(s.lower_bound(3))<<endl; // as lower bound is an iterator we use * to derefrence it
    // cout << "Lower bound: " << *(s.lower_bound(4.5)) << endl; // we will get the lower bound of it that is :- 4 
    // cout << "Upper bound: " << *(s.upper_bound(3)) << endl; // upper bound is not the opposite of lower bound :- check upper  bound here:- https://youtu.be/okhdtEk1iKk?si=st1PwfiFhzvcZTEg&t=4026

    // cout<<"Size: "<<s.size()<<endl;
    // for(auto val: s){
    //     cout<<val<<" ";
    // }


    //multi set :- can have duplicates

    // multiset<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(7);

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // cout<<"multiset: ";
    // for (auto val : s)
    // {
    //     cout << val << " ";
    // }


    //unordered set :- O(1) time complexity // gives data in random pattern

    // unordered_set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(7);
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // cout<<"unordered set: ";
    // for (auto val : s)
    // {
    //     cout << val << " ";
    // }


    //Algorithms

    // int arr[] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5};
    // int n = 15;
    // sort(arr, arr+15);
    // for (int i = 0; i < 15; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
    // // sort(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end(), greater<int>());  // This will sort in descneding order

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    

    // vector<pair<int,int>> arr = {{1,2},{3,4},{5,6},{7,8},{9,0}};
    // sort(arr.begin(),arr.end());
    // for(auto p: arr){
    //     cout<< p.first<<" "<<p.second<<endl;
    // }
    //the upper loop will sort the pairs based on their 1st value,  but what if we wan to  sor tbased on 2nd value?


    

    // return 0;
    // }







// custom functor
bool comparator( pair<int, int> p1,  pair<int, int> p2){
    if (p1.second < p2.second)
        return true;
    if(p1.second>p2.second)
        return false;

    //If the value of p2.second and p1.second is same then the below code will check for first values
    if(p1.first<p2.first)
        return true;
    else 
        return false;
}












// int main(){
    // vector<pair<int, int>> vec = {{1, 2}, {3, 2}, {5, 6}, {7, 8}, {9, 0}};
    // sort(vec.begin(), vec.end(), comparator);
    // for (auto p : vec)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }
    // return 0;


    //reversing a vector:-

    // vector<int> vec  = {1,2,3,4,5};
    // // reverse(vec.begin(),vec.end());
    // //we can also pass some range:-
    // reverse(vec.begin()+1, vec.begin()+3);

    // for (auto p : vec)
    // {
    //     cout << p<<" ";
    // }


    //Permutation

    // string s = "ABC";
    // next_permutation(s.begin(),s.end());
    // // prev_permutation(s.begin(),s.end());
    // cout<< s<<endl;


    //vector max and min finder & binary search

    // vector<int> vec = {1,2,3,4,5};
    // cout<< *(max_element(vec.begin(),vec.end()))<<endl;
    // cout << *(min_element(vec.begin(), vec.end())) << endl;

    // cout<<binary_search(vec.begin(),vec.end(),10)<<endl; //in last we give target and we get output in boolean value


    //builtin comparitor
    // int n=15;
    // long int n2= 15;
    // long long int n3= 15;
    // cout<< __builtin_popcount(n)<<endl;
    // cout<< __builtin_popcountl(n2)<<endl;
    // cout << __builtin_popcountll(n3) << endl;
// }
