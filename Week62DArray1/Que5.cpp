/*Write a program to print the row number having the maximum sum in a given matrix.
Input 1:
1 3 5 7
3 4 7 8
1 4 12 3*/


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

    int rnum=0;
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            sum+=a[i][j];
            }
            if(sum>maxsum){
            rnum=i+1;
            maxsum=sum;
        }
        
            sum=0;
        }
        cout<<"Row having the maximum sum in a given matrix is "<<rnum<<" with sum "<<maxsum;
}

    
