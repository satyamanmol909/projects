#include<iostream>
using namespace std;

class parent
{
    public:
    virtual void display() = 0;
};

class child1: public parent
{
    public:
    void display() override
    {
        cout << "I am Satyam" << endl;
    }
};

class child2: public parent
{
    public:
    void display() override
    {
        cout << "I am Shushant" << endl;
    }
};

class child3: public parent
{
    public:
    void display() override
    {
        cout << "I am child3" << endl;
    }
};

int main()
{
    
    child1 c1;
    c1.display();

    child2 c2;
    c2.display();

    child3 c3;
    c3.display();

    return 0;
}
