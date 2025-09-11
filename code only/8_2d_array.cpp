#include <iostream>
#include<vector>
#include<climits>
using namespace std;




int diag(int matrix[][4], int n){
    int sum =0;  //{O(n*n)}
    // for(int i=0; i<n;i++){  
    //     for(int j=0; j<n; j++){
    //         if(i==j){
    //             sum += matrix[i][j];
    //         }else if(j == n-i-1){
    //             sum += matrix[i][j];
    //         }
    //     }
    // }
    // return sum;

    //optimised code:- {O(n)}
    for(int i=0;i<n;i++){
        sum += matrix[i][i];
        if(i!=n-i-1){

            sum += matrix[i][n-i-1];
        }
    }

    return sum;
}





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
    // int target = 10;
    // int flag =0;
    // int row = -1 , col = -1;
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         if(matrix[i][j] == target){
    //             flag = 1;
    //             row = i;
    //             col = j;
    //             break;
    //         }else{
    //             flag =0;
    //         }
    //     }
    //     if (flag == 1)
    //         break;
    // }
    
    // if (flag == 0)
    // {
    //     cout << "NOT FOUND";
    // }
    // else
    // {
    //     cout << "Found at position: ("<<row<<","<<col<<")"<<endl;
    // }

    
//row sums
    // int mat[3][3] = {{1,2,3}, {4,5,66}, {7,8,10}};
    
    // int big = INT_MIN;
    // for(int i=0; i<3; i++){
    //     int sum = 0;
    //     for(int j=0; j<3;j++){
    //         sum += mat[i][j];

    //     }
    //     if(sum>big){
    //         big = sum;
    //     }
    // }
    // cout<<"Biggest row values: "<<big<<endl;

// diagonal sums:-

    int mat2[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int n = 4;
    cout<<"Sum of diagonals: "<<diag(mat2,n)<<endl;
    

    //2d vectors  ==> in vectors we can dynamically add elements too like we did {4,5,6,9,2}

    vector<vector<int>> mat = {{1,2,3}, {4,5,6,9,2}, {7,8,9}};

    //rows => mat.size()
    //cols = 1 row element,,,, mat[i].size
    cout<<endl;
    cout<< "This is a vector matix: "<<endl;
    for(int i=0; i<mat.size();i++){
        for(int j=0;j <mat[i].size(); j++){
            cout<< mat[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}