/*Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
Input 1:
1 2 3 4 5
3 4 5 6 7
7 6 5 4 3
8 7 6 5 4
1 2 37 8 0*/


#include <iostream>
using namespace std;
int main(){

    int m;
    cout<<"Enter number of rows for a array:";
    cin>>m;

    int n;
    cout<<"Enter number of columns for a array: ";
    cin>>n;


    cout<<"Enter values in array:";
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"elements of middle row and the elements of middle column are: "<<endl;
    int x=m/2, y=n/2;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==x || j==y){
                cout<<a[i][j]<<" ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

    
