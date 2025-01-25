#include<iostream>
using namespace std;

class counter {
    private: 
        int count;

    public:
        counter(): count(0) {}

        counter& operator++() {
            ++count;
            return *this;
        }

        
        void display() {
            cout << "count: " << count << endl;
        }
};

int main() {
    counter c1;
    c1.display();
    
    ++c1;  
    c1.display();  

    return 0;
}
