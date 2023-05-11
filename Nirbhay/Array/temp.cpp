// Given an array of size n you need to count the numbber of special elements in the array.
// An element is special, if removal of that element makes the array balance.
// an array will be balanced if the sum of even index elements is equal to sum of odd index elements

// ex:
// 2 1 6 4
// ans: 1

// 5 5 2 5 8
// ans: 2 ( 5 and 5 )

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum_even = 0, sum_odd = 0, ans = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i % 2 == 0){
            sum_even += a[i];
        }
        else{
            sum_odd += a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sum_even -= a[i];
        }
        else{
            sum_odd -= a[i];
        }
        if(sum_even == sum_odd){
            ans++;
            // cout<<i<<" ";
        }
        if(i % 2 == 0){
            sum_odd += a[i];
        }
        else{
            sum_even += a[i];
        }
    }
    cout << ans;
    return 0;
}