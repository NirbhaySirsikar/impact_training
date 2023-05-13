// Given an integer array, count the inversion count of the array.
// Inversion count for an array indicates how far the array is fromm being sorted. where two elements a[i] and a[j] form an inversion if a[i]>a[j] & i<j

// ex: {8,4,2,1}
// 8>4,8>2,8>1,4>2,4>1,2>1
// so inversion count is 6

#include<bits/stdc++.h>
using namespace std;

int invcount(int a[], int n){
    return invcount()
}

int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<invcount(a,n);
    return 0;
}