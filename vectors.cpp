#include <iostream>
#include <vector>
using namespace std;

//method 1
void printVector(vector<int> v){
    if(v.size()==0){
        cout<<"vector is empty"<<endl;
        return;
    }
    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//method 2
void printV(vector<int> v){
    for(auto a=v.begin(); a!=v.end(); a++){
        cout<<*a<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.assign(3,-1);  //this will assign -1 , upto 3 positions in the vector
    printVector(v);
    printV(v);
    cout<<v.size()<<" "<<v.capacity()<<" "<<v.max_size()<<" "<<v.empty()<<endl;
    v.resize(10);
    cout<<v.size()<<endl;
    v.push_back(0);
    printVector(v);
    v.pop_back();
    printVector(v);
    v.insert(v.begin(),1);  //this will insert 1 at the beginning of the vector
    printV(v);
    v.insert(v.begin()+1,2); // first argument is always a postion and cannot be passed as an integer 
    //                          which means "v.insert(1,2)" is incorrect 
    printVector(v);
    v.clear();
    printVector(v);
    return 0;
}