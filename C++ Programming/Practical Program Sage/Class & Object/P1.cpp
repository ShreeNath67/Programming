// Object Oriented Concept
// Class & Object concept

#include<iostream>
using namespace std;

class student                                          //  Class  classname
{
    private:
    int rollno, marks;                                 // Data members 
    char name[20], gender[20];                         // Data members

    public:
    void input()                                       // Member Functions
    {
        cout<<" Enter Name of Student :";
        cin>>name;
        cout<<"\n Enter Gender :";
        cin>>gender;
        cout<<"\n Enter Roll no :";
        cin>>rollno;
        cout<<"\n Enter marks :";
        cin>>marks;
    }

    void output()                                       // Member Function
    {
       cout<<"\n Enter Name of Student :"<<name;
       cout<<"\n Enter Gender :"<<gender;
       cout<<"\n Enter Roll no :"<<rollno;
       cout<<"\n Enter marks :"<<marks;
    }
} a;                                                    // Defining object
 
int main()
{
    a.input();                                          // obj.member function()
    a.output();                                         // obj.member function()  
    return 0;
}
