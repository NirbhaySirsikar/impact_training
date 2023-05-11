// find the majority element in an array, an element a[i] is said to be majority element if it occurs more than n/2 in an array.

// ex:
// arr[] = {1,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5}
// output: 5

// moores voting algorithm
// 1. find the candidate for majority element
// 2. check if the candidate is majority element or not
// 3. if candidate is majority element,
// 4. return candidate
// 5. else return -1


#include<bits/stdc++.h>
using namespace std;

int majorityElement(int a[],int n){
    int cnt=0,mc=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            mc=a[i];
        }
        if(a[i]==mc){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==mc){
            cnt++;
        }
    }
    if(cnt>n/2){
        return mc;
    }
    return -1;
}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<majorityElement(a,n);
    return 0;
}