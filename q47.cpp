//program of file handling
#include <iostream>
#include <fstream>
using namespace std;

int main (){

    ofstream fout("satyam.txt");
    fout << "Hi, This is Harshit";
    cout << "Hi, This is Harshit";

    return 0;
}