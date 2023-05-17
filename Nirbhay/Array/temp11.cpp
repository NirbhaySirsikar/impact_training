// given a matrix of size m*n find the total number of moves required to each m-1,n-1 coornidate which is starting from 0,0 only directions allowed are right and down
// ans:leetcode

// Given n non negetive integers implimenting an elevation map where width of each bar is 1 . calc how much water can be trapped
//ans:leetcode

// Given a number of pages in n different books and m students the books are arranges in the accending order of number of pages. every student is assigned to read some consecutive books. The task is to assign books in such a way that maximum number of pages assigned to a student is minimum. 

// 12 34 67 90  
// n=2
// ans: 113
//gfg

//Given an array in increasing order search the element text if the element is available else return the index for which its suitable.
// 10 20 30 40 50
// search=25
// ans:2
// search=40
// ans:3
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int search;cin>>search;
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==search){
            ans=mid;
            break;
        }
        else if(arr[mid]>search){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(ans==-1){
        if(arr[low]>search){
            ans=low;
        }
        else{
            ans=low+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
