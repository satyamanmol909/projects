//simple program of inheritance
#include<iostream>
using namespace std;
class grandparent
{
    protected:
    string name;
    int age;
    
};
class parent:public grandparent
{
    protected:
    string pname, occupation;
    int page;
};
class child:public parent
{
    public:
    string cname,skill,adress;
    int cage;
    
    void in()
    {
        cout<<"Enter name of grandparent: ";
        cin>>name;
        cout<<"Enter age of grandparent: ";
        cin>>age;
        cout<<"Enter name of parent: ";
        cin>>pname;
        cout<<"Enter occupation of parent: ";
        cin>>occupation;
        cout<<"Enter age of parent: ";
        cin>>page;
        cout<<"Enter name of child: ";
        cin>>cname;
        cout<<"Enter skill of child: ";
        cin>>skill;
        cout<<"Enter adress of child: ";
        cin>>adress;
        cout<<"Enter age of child: ";
        cin>>cage;
        

    }
    void printdata()
    {
        cout<<"Name of grandparent: "<<name<<endl;
        cout<<"Age of grandparent: "<<age<<endl;
        cout<<"Name of parent: "<<pname<<endl;
        cout<<"Occupation of parent: "<<occupation<<endl;
        cout<<"Age of parent: "<<page<<endl;
        cout<<"Name of child: "<<cname<<endl;
        cout<<"Skill of child: "<<skill<<endl;
        cout<<"Adress of child: "<<adress<<endl;
        cout<<"Age of child: "<<cage<<endl;
        
    }

};
int main()
{
    child c1;
    c1.in();
    c1.printdata();
    return 0;
}