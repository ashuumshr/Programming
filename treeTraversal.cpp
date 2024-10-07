#include<iostream>
using namespace std;

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
void preOrder(Node* r){
    if(r==NULL){
        return;
    }
    cout<<r->data<<" ";
    preOrder(r->left);
    preOrder(r->right);
}

void postOrder(Node* r){
    if(r==NULL){
        return;
    }
    postOrder(r->left);
    postOrder(r->right);
    cout<<r->data<<" ";
}

void inOrder(Node* r){
    if(r==NULL){
        return;
    }
    inOrder(r->left);
    cout<<r->data<<" ";
    inOrder(r->right);
}

int main(){
    Node* r=createSampleTree();
    cout<<"preOrder traversal (root,left,right): ";
    preOrder(r);
    cout<<endl;
    cout<<"postOrder traversal (left,right,root): ";
    postOrder(r);
    cout<<endl;
    cout<<"inOrder traversal (left,root,right): ";
    inOrder(r);
    
return 0;
}