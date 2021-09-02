#include<iostream>
using namespace std;

signed main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }


//spiral order print
    
    int rowstart=0 , rowend=n-1,columnstart=0,columnend=n-1;

    while(rowstart<=rowend && columnstart<=columnend){

        //for row start 
        for(int col=columnstart;col<=columnend;col++){
            cout<<a[rowstart][col]<<" ";
        }
        rowstart++;

        //for column end
        for(int row=rowstart;row<=rowend;row++){
            cout<<a[row][columnend]<<" ";
        }
        columnend--;
        
        //for row end

        for(int col=columnend;col>=columnstart;col--){
         cout<<a[rowend][col]<<" ";
        }

        //for column start

        for(int row=rowend;row>=rowstart;row--){
            cout<<a[row][columnstart]<<" ";
        }
        columnstart++;

    }

}