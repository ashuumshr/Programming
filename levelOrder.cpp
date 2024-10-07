#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* createSampleTree(){
    Node* r=new Node(1);
    r->left=new Node(2);
    r->right=new Node(3);
    r->left->left=new Node(4);
    r->left->right=new Node(5);
    r->right->left=new Node(7);
    r->right->right=new Node(8);
    r->right->left->right=new Node(9);
    return r;
}

void printCurLevel(Node* r,int l){
    if(r==NULL) return;
    if(l==1) cout<<r->data<<" ";
    else{
        printCurLevel(r->left,l-1);
        printCurLevel(r->right,l-1);
    }
}
int height(Node* r){
    if(r==NULL) return 0;
    int x=height(r->left);
    int y=height(r->right);
    if(x>y) return(1+x);
    else return(1+y);
}

void printLevelOrder(Node*r){
    if(r==NULL) return;
    int h=height(r);
    cout<<r->data<<" ";
    for(int i=1;i<=h;i++){
        printCurLevel(r->left,i);
        printCurLevel(r->right,i);
    }
}

int main(){
    Node* r= createSampleTree();
    printLevelOrder(r);
return 0;
}