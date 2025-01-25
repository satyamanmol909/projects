/*program to print given data is alphabate or number*/
#include<iostream>
using  namespace std;
int main()
{
    char x;
    cout<<"enter a single data ="<<" ";
    cin>>x;
    if((x>='a'&&x<='z')||(x>='A'&& x<='Z'))
    { 
        cout<<"give data is alphabate"<<endl;
     if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x==x=='O'||'U')
        {
            cout<<x <<" "<<"is vowel";
        }
        
        else
        {
        cout<<x<<" "<<"is consonant";
        }
    }
    else if((x<='a'&&x>='z')||(x<='A'&& x>='Z'))
    {
        cout<<x<<"symbol";
    }
    else
    {
        cout<<"given data is integer";
    }
    return 0;
}