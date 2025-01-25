//friend function
#include<iostream>
using namespace std;
class car
{
    private:
    string name;
    string color,car_no;
    int speed;
    public:
    friend void getdata(car& c);
    friend void showdata(car& d);

};
void getdata(car& c)
{
    cout<<"enter the car name: ";
    cin>>c.name;
    cout<<"enter the car color: ";
    cin>>c.color;
    cout<<"enter the car number: ";
    cin>>c.car_no;
    cout<<"enter the speed of the car: ";
    cin>>c.speed;
}
void showdata(car& d)
{
    cout<<"car name= "<<d.name<<endl;
    cout<<"car color="<<d.color<<endl;
    cout<<"car no. = "<<d.car_no<<endl;
    cout<<"car speed = "<<d.speed<<endl;
}
int main()
{
    car c1;
    getdata(c1);
    showdata(c1);
    return 0;
}