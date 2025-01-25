#include <iostream>
using namespace std;
class Remainder {
private:
    int dividend, divisor, result;
public:
    Remainder(int a, int b) {
        dividend = a;
        divisor = b;
        result = dividend % divisor; 
    }
    void displayRemainder() {
        cout << "The remainder of " << dividend << " divided by " << divisor << " is: " << result << endl;
    }
};
int main() {
    int a, b;
    cout << "Enter the dividend: ";
    cin >> a;
    cout << "Enter the divisor: ";
    cin >> b;
    Remainder rem(a, b);
    rem.displayRemainder();
    return 0;
}
