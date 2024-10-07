#include<iostream>
using namespace std;

// recursively find the height of a binary tree
//creation of Node
struct Node{
    int data;
    Node* left;
    Node* right;

    Node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* createSampleTree(){
    Node* r=new Node(5);
    r->left=new Node(3);
    r->right=new Node(10);
    r->left->left=new Node(1);
    r->left->right=new Node(4);
    r->right->left=new Node(8);
    r->right->right=new Node(20);
    r->right->left->right=new Node(9);
    return r;
}

int max(int x,int y){
    if(x>y){
        return x;
    }
    return y;
}

int getHeight(Node* r){
    if(r==NULL){
        return 0;
    }
    int x=0;
    int y=0;
    x=1+getHeight(r->left);
    y=1+getHeight(r->right);
    return max(x,y);
}
int main(){
    Node* r=createSampleTree();
    cout<<getHeight(r);
}