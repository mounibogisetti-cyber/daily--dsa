#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10];
    int m,n;
    int col=arr[0][0];
    cout<<"Enter the rows size:";
    cin>>n;
    cout<<"Enter the column size:";
    cin>>m;
    cout<<"Enter the Elements:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     cout<<"Print the Elements before modifying:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //markers to set zero
    for(int i=0;i<n;i++){
        if(arr[i][0]==0){
            col=0;
        }
        for(int j=1;j<m;j++){
            if(arr[i][j]==0){
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }

    //set to zeroes
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=1;j--){
            if((arr[i][0]==0)||(arr[0][j]==0)){
                arr[i][j]=0;
                
            }
        }
        if(col==0){
            arr[i][0]=0;
        }
    }

    cout<<"Print the Elements:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}