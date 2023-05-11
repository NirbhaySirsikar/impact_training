#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt,pre,ans(0);cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        cnt=0;
        int curr=num;
        while (!(num%10))
        {
            num/=10;
            cnt++;
        }
        if(num!=1){
            pre=curr;
            cnt=0;
        }
        else{
            cnt++;
        }
        ans+=cnt;
    };
    cout<<pre;
    for(int i=0;i<ans;i++)cout<<0;
    return 0;
}