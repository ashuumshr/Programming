#include<iostream>
using namespace std;

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

int countNodes(Node *r){
    if(r==NULL){
        return 0;
    }
    int x=countNodes(r->left);
    int y=countNodes(r->right);
    return x+y+1;
}
int main(){
    Node* r=createSampleTree();
    cout<< "Number of nodes in the Tree : "<<countNodes(r);
return 0;
}