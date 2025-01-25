#include<iostream>
using namespace std;
int main()
{
    acb:
    cout <<"enter something ="<<" ";
    int x;
    cin>>x;
    cout<<"asci value ="<<" "<<char(x)<<endl;
    goto acb;
    return 0;
}