//program to use the constructor and distructor
#include<iostream>
using namespace std;
class car
{
    private:
    string car_n;
    int car_no;
    public:
    car()//default constructor
    {
        string name;
        int no;
        car_n=name;
        car_no=no;
    }
    car(string name,int no)//constuctor(paramitized )
    {
        car_n=name;
        car_no=no;

    }
    void data_in()
    {
        cout<<"enter the car name ";
        cin>>car_n;
        cout<<"enter the car number ";
        cin>>car_no;
    }
    void data_out()
    {
    
        cout<<"car name is "<<car_n<<endl;
        cout<<"car number is "<<car_no<<endl;
    }
    

};
int main()
{
    car c1("satyam",78);
    c1.data_out();
    car c;
    c.data_in();
    c.data_out();
    
    return 0;
}