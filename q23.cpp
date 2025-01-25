#include <iostream>
using namespace std;
class traingle
{
    public:
    int b, h, p;
    int area(int b, int h)
    {
        int area_traigle;
        
        area_traigle = b*h/2;
        cout << "area of traigle=" << area_traigle<<endl;
        return area_traigle;

    }

    int permeter(int b, int h, int p)
    {
        int pri;
       
        pri= b+h+p;
        cout << "permeter of traingle =" << pri;
        return pri;
    }
};
int main()
{
    traingle t;
    t.area(5,4);
    t.permeter(6,7,8);
    return 0;

}