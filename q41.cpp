#include <iostream>
using namespace std;

class employ {
private:

    double emp_no;
public:
double n;
    employ() : emp_no(n) {}  
      friend void printWidth(employ e);
};
void printWidth(employ e) {
    double n;
    cout<<"enter the employ number";
    cin>>n;
    
    cout << "employ number " << n << endl;
}

int main() {
    
    employ e;
    printWidth(e); 
}
