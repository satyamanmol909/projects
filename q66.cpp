//program to use the class
#include<iostream>
using namespace std;
class car
{
    public:
    int speed;
    int mileage;
    void hero()
    {
        cout<<"Hero car"<<endl;
        cout<<"highest speed ";
        cin>>speed;
        cout<<"highest milage ";
        cin>>mileage;
        
    }
    void output()
    {
        cout<<"Hero car"<<endl;
        cout<<"highest speed = "<<speed<<endl;
        cout<<"highest milage ="<<mileage;
        
    }


};
int main()
{
    car c;
    c.hero();
    cout<<system("cls");
    c.output();

}