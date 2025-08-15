#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main(){
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
/*************  ✨ Windsurf Command 🌟  *************/
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    // cout<<endl;

    

    stack<int> s2;
    swap(s, s2); // swapping the elements of stack s to s2
    s2.swap(s);
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    // cout << endl;

    cout<<"s size : " << s.size()<<endl;
    cout << "s2 size : " << s2.size() << endl;
/*******  200f8a01-4d66-4395-b17e-c99c5106d2b7  *******/

    return 0;
    }