// Given an array of positive and nege integers find the subarray that gives you the maximum sum
// ex:
// 1 2 3 4 -2 6 -8 3
// ans: 14
// ex: -2 -3 4 -1 -2 1 5 -3
// ans: 7
// 5 -4 -2 1
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int max_sum = 0, sum = 0;
    int start=0,end=0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum < 0){
            sum = 0;
            start=i+1;
        }
        if(max_sum<sum){
            max_sum = sum;
            end=i;
        }

    }
    cout<<max_sum<<"\n"<<start<<" "<<end;
    return 0;
}
