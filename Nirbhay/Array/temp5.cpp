// Given an array that contain both positive and negetive numbers find the product of the maximum product subarray.

#include<bits/stdc++.h>
using namespace std;

int maxproduct(int a[],int n){
    int pre=1;
    int suf=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        pre*=a[i];
        suf*=a[n-i-1];
        ans=max(ans,max(pre,suf));
        if(pre==0)pre=1;
        if(suf==0)suf=1;
    }
    return ans;
}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<maxproduct(a,n);
    return 0;
}