//C++ Program to Check Whether a character is Vowel or Consonant
#include <iostream>
using namespace std;
int main()
{
   char n;
    cout<<"enter an alphabate =";
    cin>>n;
    if(n=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    {
        cout<<n<<"is vowel";
    }
    
    else
    {
    cout<<n<<"is consonant";
    }
    return 0;
}
