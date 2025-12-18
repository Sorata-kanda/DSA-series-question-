#include<iostream>
using namespace std;


class Teacher{
public:
    //Non- parameterized
    Teacher(){
        cout<<"I am a constructor\n";
        dept = "CSE Depratment";
    }
    //Parameterised
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    string name;
    string dept;
    string subject;
    string salary;

    void get_info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

//--------This pointer at :- 41:12---------------












int main(){
    Teacher t1("Rahul", "CSE", "DSA", 100000);
    t1.get_info();
    
    // t1.name = "Rahul";
    // t1.dept = "CSE";
    // t1.subject = "DSA";
    // cout<<t1.name<<endl;
    // cout<<"Department: "<<t1.dept<<endl;

    

}