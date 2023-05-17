// find the maximum element in the stack in O(1). You will be given n queries. 1 for push 2 for pop 3 for printing highest element

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    stack<int> s;
    stack<int> s1;
    while(n--){
        int q;cin>>q;
        if(q==1){
            int x;cin>>x;
            s.push(x);
            if(s1.empty()){
                s1.push(x);
            }
            else{
                if(s1.top()<x){
                    s1.push(x);
                }
                else{
                    s1.push(s1.top());
                }
            }
        }
        else if(q==2){
            s.pop();
            s1.pop();
        }
        else{
            cout<<s1.top()<<endl;
        }
    }
    return 0;
}