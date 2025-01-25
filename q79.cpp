//program to use class and object
#include<iostream>
using namespace std;
class satyam
{
    public:
    string name;
    int age;
    void anmol()
    {
        cout<<" enter the name ";
        cin>>name;
        cout<<"enter the age ";
        cin>>age;
    }
    void display()
    {
        cout<<"name is "<<name<<endl;
        cout<<"age is "<<age<<endl;
    }
    
};
int main()
{
    satyam df;
    df.anmol();
    df.display();
    return 0;
}