#include<iostream>
using namespace std;
//return latest common ancestor

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
    Node* r= new Node(1);       //the tree will look like-       1
    r->left=new Node(2);                         //            /   \  
    r->right=new Node(3);                        //           2     3
    r->left->left=new Node(4);                  //           / \   /  
    r->left->right=new Node(5);                //           4   5 6
    r->right->left=new Node(6);
    return r;
}

int printData(Node* r){
    int x=r->data;
    return x;
}
int main(){
    Node* r= createSampleTree();
    cout<<printData(r);
    return 0;
    //complete it and solve segmentation fault
}