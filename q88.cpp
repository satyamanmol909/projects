#include<iostream>
using namespace std;

class Sum {
    public:
    
    int add(int a, int b) {
        int result = a + b;
        cout << "add int = " << result << endl;
        return result;
    }


    string add(string a, string b) {
        string result = a + b;
        cout << "add (string) = " << result << endl;
        return result;
    }

    
};

int main() {
    Sum s;
    s.add(5, 6);
    cout<<endl<<false<<endl;       
    s.add("5", "6");     
    return 0;
}
