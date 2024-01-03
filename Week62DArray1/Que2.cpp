/*Write a program to add two matrices and save the result in one of the given matrices.
Input 1:
1 2 3
4 5 6
7 8 9

4 5 8
0 0 8
1 2 0*/


#include <iostream>
using namespace std;

int main(){

    int m;
    cout<<"Enter number of rows for a array:";
    cin>>m;

    int n;
    cout<<"Enter number of columns for a array: ";
    cin>>n;

    if(m==n){

    cout<<"Enter values in array:";
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter values in array:";
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cin>>b[i][j];
        }
    }

    cout<<"The resultant sum of array is:"<<endl;
    int r[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            r[i][j] = a[i][j]+b[i][j];
            
            cout<<r[i][j]<<" ";
        } 
        cout<<endl;
    }       
    
}
else{
    cout<<"Matrix cannot be added!";
}
}