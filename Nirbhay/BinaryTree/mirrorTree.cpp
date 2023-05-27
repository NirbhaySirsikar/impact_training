#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left,*right;
    node(int val):data(val),left(NULL),right(NULL){}
    // node(int a[],int n){
    //     queue<node*>q;
    //     node* root=new node(a[0]);
    //     q.push(root);
    //     for(int i=1;i<n;i+=2){
    //         node* t=q.front();
    //         q.pop();
    //         t->left=new node(a[i]);
    //         q.push(t->left);
    //         t->right=new node(a[i+1]);
    //         q.push(t->right);
    //     }
    // }
};
node* create(int a[],int n){
    queue<node*>q;
    node* root=new node(a[0]);
    q.push(root);
    for(int i=1;i<n;i+=2){
        node* t=q.front();
        q.pop();
        t->left=new node(a[i]);
        q.push(t->left);
        t->right=new node(a[i+1]);
        q.push(t->right);
    }
    return root;
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    node*root1=create(a,7);
    return 0;
}