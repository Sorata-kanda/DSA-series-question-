#include<iostream>
#include<vector>
#include<iomanip>
#include<fstream>
using namespace std;



// class rectangle{
// public:
//     int l;
//     int b;
//     int area();
//     rectangle(){ }
//     rectangle(rectangle &obj){
//         this->l = obj.l;
//         this->b = obj.b;
//     }
// };

// int rectangle::area(){
//     return l*b;
// }


// class stud{
// public:
//     string name;
//     int roll;
//     string dept;
//     stud(){ }
//     stud(string n, int r, string d){
//         this->name = n;
//         this->roll = r;
//         this->dept = d;
//     }
//     void display(){
//         cout<<name<<" "<<roll<<" "<<dept<<endl;
//     }
// };
// int main(){
//     stud s1;
//     s1.name = "Rahul";
//     s1.roll = 1;
//     s1.dept = "CSE";
//     // stud(name, roll, dept);
//     s1.display();

//     rectangle r1;
//     r1.l = 10;
//     r1.b = 20;
//     cout<<r1.area()<<endl;

//     rectangle r2(r1);
//     cout<<r2.area()<<endl;

// }



int main(){
    string str;
    ifstream fin;
    ofstream fout;
    fout.open("temp.txt");
    fin.open("temp.txt");
    fout<<"Adding a new line" << endl;
    while(getline(fin,str)){
        cout<<str<<endl;
    }
    fin.close();
    fout.close();

    // remove("temp.txt");
    cout<<remove("temp.txt")<<endl;
}
