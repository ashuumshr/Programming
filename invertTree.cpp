#include<iostream>
using namespace std;

//          4                         4
//     2         3       to      3          2
// 1       7  5     9        7       1    9     5
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
    Node* r = new Node(4);
    r->left = new Node(2);
    r->left->left = new Node(1);
    r->left->right = new Node(7);
    r->right= new Node(3);
    r->right->left= new Node(5);
    r->right->right= new Node(9);
    return r;
}

void invertTree(Node* r){
    if(r==NULL){ return;}
    if(r->left==NULL && r->right== NULL){ return; }
    if(r->left!=NULL || r->right!=NULL){
        
        Node* temp=r->left;
        r->left=r->right;
        r->right=temp;
        invertTree(r->left);
        invertTree(r->right);
        
    }
    //     if(r->right!=NULL && r->left==NULL){
    //     Node* temp=r->right;
    //     r->right=NULL;
    //     r->left=temp;
    //     invertTree(r->left);
    // }
    // if(r->left!=NULL && r->right==NULL){
    //     Node* temp=r->left;
    //     r->left=NULL;
    //     r->right=temp;
    //     invertTree(r->right);
    // }
}

void printTree(Node*r){
    //inOrder 
    if(r==NULL) return;
    printTree(r->left);
    cout<<r->data<<" ";
    printTree(r->right);
}

int main(){
    Node* r=createSampleTree();
    printTree(r);
    cout<<endl;
    invertTree(r);
    printTree(r);
return 0;
}