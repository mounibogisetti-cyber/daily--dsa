#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x=0;
    int rev=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0){
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    cout<<"Reverse the number:"<<rev<<endl;
}