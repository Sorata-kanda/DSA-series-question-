#include <iostream>
#include<vector>
using namespace std;

int main(){
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9},{10,11,12}};
    // cout<<matrix[2][1];
    for(int i=0; i<4; i++){
        for(int j=0; j <3; j++ ){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    // int taker[4][3];
    // //input
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>taker[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // //output
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << taker[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // linear search
    int target = 10;
    int flag =0;
    int row = -1 , col = -1;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j] == target){
                flag = 1;
                row = i;
                col = j;
                break;
            }else{
                flag =0;
            }
        }
        if (flag == 1)
            break;
    }
    
    if (flag == 0)
    {
        cout << "NOT FOUND";
    }
    else
    {
        cout << "Found at position: ("<<row<<","<<col<<")"<<endl;
    }
}