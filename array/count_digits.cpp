#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int c=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0){
        n=n/10;
        c++;
    }
    cout<<"Count of digits:"<<c<<endl;
}