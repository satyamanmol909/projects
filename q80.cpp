/*program to use the constructor and distructor*/
#include<iostream>
using namespace std;
class anmol
{
    public:
    anmol()
    {
        cout<<"constructor is called"<<endl;
    }
    ~anmol()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    anmol obj;
    return 0;
}

