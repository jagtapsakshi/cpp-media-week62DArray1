/*Write a C++ program to find the largest element of a given 2D array of integers.
Input 1:
1 3 4 6
2 4 5 7
3 5 6 8
4 6 7 9*/

#include <iostream>
#include <climits>
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

    

    int max=INT_MIN;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
        cout<<"Largest value in the 2D array is: "<<max;

    
}