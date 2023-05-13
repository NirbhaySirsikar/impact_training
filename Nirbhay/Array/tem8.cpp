//An array of size n+1. Every elemen is in the range of [1 to n]. find the duplicate number.

//Cycle detection in an array ALSO CALLED tortoise hare problem/ slow and fast pointer ploblem
//Floyd's cycle detection algorithm

#include<bits/stdc++.h>
using namespace std;

int findDup( int a[], int n){
    int slow=a[0];
    int fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);
    fast=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return slow;
}

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    cout<<findDup(arr,n);
    return 0;
}