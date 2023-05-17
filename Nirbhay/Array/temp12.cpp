//  given an integer n wap to count the number of ones in the biinary representation of an integer
//  6 
//  2

//  9
//  2 
//1 1 2 1 2 2 3 1 2 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<n+1;i++){
        if(i&1){
            a[i]=a[i/2]+1;
        }else{
            a[i]=a[i/2];
        }
    }
    for (int i = 0; i < n+1; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}