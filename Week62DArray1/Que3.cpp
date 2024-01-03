/*Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).
Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
Input 2:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 0 , l2 = 0 , r2 = 3*/


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
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cin>>A[i][j];
        }
    }

    int l1,r1,l2,r2;
    cout<<"l1=";
    cin>>l1;
    cout<<"l2=";
    cin>>l2;
    cout<<"r1=";
    cin>>r1;
    cout<<"r2=";
    cin>>r2;

    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1; j<=r2; j++){
            sum+=A[i][j];
        }
    }
    cout<<"sum of the rectangle from "<<"("<<l1<<","<<r1<<")"<<"& ("<<l2<<","<<r2<<") is:"<<sum;
   
    }       