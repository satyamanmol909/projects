/*access spcifier:  it defines hown the data will be accessed.
      types of access specifiers 
      1.public:-it will allow to access the data in whole program.
      2.private:-it will allow to access the data only in class.
      3.protected:- it will allow to access the data in class and its drived class.

*/
#include<iostream>
using namespace std;
class access
{
    public:
    string name;
    
    int salary;
    int rollno;

};
int main()
{
    access a;
    cout<<"enter the roll number :";
    cin>>a.rollno;
    cout<<"roll no:"<<a.rollno<<endl;
    cout<<"enter the salary :";
    cin>>a.salary;
    cout<<"salary:"<<a.salary<<endl;
    cout<<"enter the name :";
    cin>>a.name;
    cout<<"name:"<<a.name<<endl;
    return 0;
}