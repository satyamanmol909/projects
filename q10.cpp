#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    double phone;
    string adress;
    public:
    student(string n,int a,double p,string ad)
    {
        name=n;
        age=a;
        phone=p;
        adress=ad;

    }
    student()
    {
         string n=name;
         int a=age;
         double p=phone;
         string ad=adress;
    }
    void setdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"enter the age ";
        cin>>age;
        cout<<"enter the phone number ";
        cin>>phone;
        cout<<"enter the adress ";
        cin>>adress;
    }
    void printdata()
    {
        cout<<"name ="<<name<<endl;
        cout<<"age="<<age<<endl;
        cout<<"phone number="<<phone<<endl;
        cout<<"adress="<<adress<<endl;

    }

};
int main()
{
    student s("satyam",19,6206691983,"maile");
    s.printdata();
    student s1;
    s1.setdata();
    s1.printdata();
    return 0;
    

     
}


