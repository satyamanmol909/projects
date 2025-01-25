#include <iostream>
using namespace std;
class Trangle{
    float base;
    float height;

    public:
    Trangle( float b, float h){
        base = b;
        height = h;
    }
    float area(){
        return base * height/2;
    }
};
int main(){
    Trangle tra(5.3, 2.5);
    cout << "Area of Trangle: " << tra.area() << endl;
    return 0;
}