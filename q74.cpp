//input the numbers in the string data type
//print the asci value
#include<iostream>
using  namespace std;
int main()
{
    string value;
    cout<<"Enter the string value"<<endl;
    getline(cin,value);
    for(char c:value)
    {
        cout<<"the asci value of "<<c<<"=="<<int(c)<<endl;

    }
    return 0;
}