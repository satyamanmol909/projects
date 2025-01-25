#include<iostream>
using namespace std;
class parent
{
    public:
    string n;
    int age;
};
class child:public  parent
{
    public:
    string name;
    int c_age;
    void in()
    {
        cout<<"Enter name of parent: ";
        getline(cin,n);
        cout<<"enter the age of parent ";
        cin>>age;
        cout<<"enter  the name of child ";
       cin>>name;
        cout<<"enter the age of child ";
        cin>>c_age;
    }
    void out()
    {
        cout<<"name of parent is "<<n<<endl;
        cout<<"age of the parent "<<age<<endl;
        cout<<"name of child is  "<<name<<endl;
        cout<<"age of the child "<<c_age<<endl;
    }
};
int main()
{
    child c;
    c.in();
    cout<<system("cls");
    c.out();
    return 0;
}
