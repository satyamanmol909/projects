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
};
class son:public child
{
    public:
    string p;
    int page;


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
        cout<<"enter the name of son ";
        cin>>p;
        cout<<"enter the age of son ";
        cin>>page;

    }
    void out()
    {
        cout<<"name of parent is "<<n<<endl;
        cout<<"age of the parent "<<age<<endl;
        cout<<"name of child is  "<<name<<endl;
        cout<<"age of the child "<<c_age<<endl;
        cout<<"name of son is "<<p<<endl;
        cout<<"age of the son "<<page<<endl;
    }
};
int main()
{
   son c;
    c.in();
    cout<<system("cls");
    c.out();
    return 0;
}
