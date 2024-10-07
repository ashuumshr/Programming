#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node (int val){ //Node(int data){
        data=val;  //this->data= data;
        next= NULL;
    }
    // void printData(){
    // cout<<data;// compiler will run this as cout<< this->data; we can also define func. in struct in cpp
    // }
};
Node * insertAtHead(Node* h, int val){      //this is call by value if we use call by reference ie, ...( Node &h, int val) then we will use the third line|
    Node *newNode= new Node(val);                                                                                                                        // |
    newNode->next=h;                                                                                                                                    //V
    //h=newNode;// this line will not affect the code (optional)
    return h;
}

void deleteAlt(Node* h){
    while(h!=NULL && h->next!=NULL){
        Node* temp=h->next;
        h->next=h->next->next;
        h=h->next;
        delete temp;
    }
    return;
}
Node* createSampleList(){
    Node *h=new Node(0);// in C language malloc is used instead of new ... malloc does not call a constructor but new call constructor
    h->next= new Node (1);
    h->next->next= new Node (2);
    h->next->next->next= new Node (8);
    return h;
}
Node *reverse(Node *h){
    if(h==NULL || h->next==NULL){
        return h;
    }
    Node *newH =NULL;
    while(h!= NULL){
        Node *temp =h;
        h=h->next;
        temp->next=newH;
        newH = temp;
    }
    return newH;
}
Node* getMiddle(Node* h){
    int c=0;
    while(h!=NULL){
        c++;
        h=h->next;
    }
    while((c+1)/2){
        h=h->next;
    }
    return h;
}

bool isPalindrome(Node *h){
    if(h==NULL || h->next==NULL){
        return true;
    }
    Node *m=getMiddle(h);
    m=reverse(m);
    Node *om=m; //to preserve the actual list to be returned to the main function without changing 
    bool res=true; //result=true by default
    while(m!=NULL){
        if(h->data !=m->data){
            res=false;
            break;
        }
        h=h->next;
        m=m->next;
    }
    reverse(om);
    return res;
}
Node* createCopy(Node* h){
    Node* h1=new Node(h->data);
    Node* oh1=h1;
    while(h->next!=NULL){
        h1->next=new Node(h->next->data);
        h=h->next;
        h1=h1->next;
    }
    return oh1;
}
Node* add(Node* h1, Node*h2){
    if(h1==NULL){
        return createCopy(h2);
    }
    if(h2==NULL){
        return createCopy(h1);
    }
    h1=reverse(h1);
    Node* oh1=h1;
    h2=reverse(h2);
    Node* oh2=h2;
    Node* h3=NULL;
    int c=0;
    while(h1!=NULL || h2!=NULL || c!=0){
        int sum=c;
        if(h1!=NULL){
            sum+=h1->data;
            h1=h1->next;
        }
        if(h2!=NULL){
            sum+=h2->data;
            h2=h2->next;
        }
        c=sum/10;
        Node* temp=new Node(sum%10);
        temp->next=h3;
        h3=temp;
    }
    reverse(oh1);
    reverse(oh2);
    return h3;
}
void printList(Node*h){
    Node* oh=h;
    while(h!=NULL){
        cout<<h->data;
        if(h->next!=NULL){
            cout<<"->";}
        h=h->next;
    }
    cout<<endl;
    h=oh;
}
Node * insertSorted(Node *h, int val){
    Node *newNode= new Node(val);
    if(h== NULL || h->data >= val){
        newNode->next=h;
        return newNode;
    }
    Node* oh=h;// original head might not be returned after being changed therefore we will store it 
    //for inserting in between 
    while(h->next!= NULL && h->next->data < val){
        h=h->next;
    }
        newNode->next=h->next;
        h->next=newNode;
        return oh;
}
int main(){
    Node* h=createSampleList();
    printList(h);
    insertSorted(h,4);
    printList(h);
    Node* h2= createCopy(h);
    printList(h);
    printList(h2);
    printList(add(h,h2));
    //cout<<isPalindrome(h);
    cout<<'f';
}