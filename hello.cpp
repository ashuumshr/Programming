#include <iostream>
using namespace std;
class student{
    public:
        string name;
        string subject;
        int marks;
        void enter(){
            
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter subject : ";
            cin>>subject;
            cout<<"enter marks : ";
            cin>>marks;

        }
        void display(){
            cout<<"name of student : "<<name<<endl;
            cout<<"subject : "<<subject<<endl;
            cout<<"marks of student : "<<marks<<endl;    
        }
};
int main(){
    student stud1;
    stud1.enter();
    stud1.display();
}