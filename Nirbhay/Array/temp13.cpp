// given an array of integers representing the histogram bar height. where width of each bar is 1 return the area of the largest rectangle

//Given ann array print the next greater element for every element
// arr: 4 5 2 25
// ans: 5 25 25 -1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < n; i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(!s.empty() && s.top()<arr[i]){
            cout<<arr[i]<<" ";
            s.pop();
        }
        s.push(arr[i]);
    }
    while(!s.empty()){
        cout<<-1<<" ";
        s.pop();
    }

    return 0;
}