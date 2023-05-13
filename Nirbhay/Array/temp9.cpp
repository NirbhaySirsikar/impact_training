//array of size n, All the elements are arranged 1 to n every int in the array appears exactly once except one element the task is to find the missing element and the repeated element.

// 1 2 4 3 5 1
// 1 6

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    // Sum method
    // int sum(0),sumsq(0),isum(0),isumsq(0);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    //     sum+=a[i];
    //     sumsq+=a[i]*a[i];
    //     isum+=(i+1);
    //     isumsq+=(i+1)*(i+1);
    // }
    // int x,y;
    // x=isum-sum;
    // y=isumsq-sumsq;
    // int z=y/x;
    // cout<<(z+x)/2<<" "<<(z-x)/2;

    // XOR method
    int x(0),y(0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        x^=a[i];
        y^=(i+1);
    }
    int z=x^y;
    int setbit=0;
    // cout<<z;
    // int setbit=z&~(z-1);
    // cout<<setbit;
    while(z){
        if(z&1){
            break;
        }
        setbit++;
        z>>=1;
    }
    int x1(0),y1(0);
    for(int i=0;i<n;i++){
        if(a[i]&(1<<setbit)){
            x1^=a[i];
        }else{
            y1^=a[i];
        }
        if((i+1)&(1<<setbit)){
            x1^=(i+1);
        }else{
            y1^=(i+1);
        }
    }
    cout<<y1<<" "<<x1;

    return 0;
}
