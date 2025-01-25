#include <iostream>
using namespace std;
class calculator
{
    private:
    float a1;
    float a2;

    public:
    calculator(float a, float b)
    {
            a1 = a;
            a2 = b;
    }
    float add()
    {
        return a1 + a2;
    }
    float subtr()
    {
        return a1 - a2;
    }
    float multi()
    {
        return a1 * a2;
    }
    float divid()
    {
        return a1 / a2;
    }   
};
int main()
{
    float a,b,n;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    calculator calc(a,b);
    cout<<"enter the number to input choice"<<endl;
    cout<<"if n==1 add\nn=2 subtract\nn=3 multiply\nn=4 divide"<<endl;
    cin>>n;

    if(n==1)
    cout << "Addition: " << calc.add() << endl;
    else if(n==2)
    cout << "Sbtract: " << calc.subtr() << endl;
    else if(n==3)
    cout << "Multiple: " << calc.multi() << endl;
    else if(n==4)
    cout << "Divid: " << calc.divid () << endl;
    
    return 0;
}