#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("satyamanmol.txt");  // Open the file for reading
    ofstream fout("satyamanmol_output.txt");  // Open a separate file for writing (since fin is for reading)

    /*if (!fin) {
        cout << "Error opening input file!" << endl;
        return 1;
    }
*/
    double a, b, sum;
    
    // Reading the numbers from the file (assuming the file contains two numbers)
    fin >> a >> b;

   /* if (fin.fail()) {
        cout << "Error reading from file!" << endl;
        return 1;
    }*/

    sum = a + b;

    fout << "The sum of " << a << " and " << b << " is " << sum << endl;

    // Closing the files
    fin.close();
    fout.close();

    cout << "Operation completed. Check 'satyamanmol_output.txt' for the result." << endl;

    return 0;
}
