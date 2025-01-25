//program to show use of distructor
#include<iostream>
using namespace std;
class happy
{
    public:
    happy()
    {
        cout<<"happy constructor is called"<<endl;
    }
    ~happy()
    {
        cout<<"happy destructor is called"<<endl;
    }
};
int main()
{
    happy h; 
    return 0;
}

