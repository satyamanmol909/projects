
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int h=0,m=0,s=0;
    int n;
    cout<<"to strat stopwatch then press :5\nto stop press: 7"<<endl;
    cin>>n;
    while(true)
    {
        if(n==5)
        {
        Sleep(1000);
        s++;
        if(s==60)
        {
            s=0;
            m++;
        }
        if(m==60)
        {
            m=0;
            h++;
        }
        cout<<"Time: "<<h<<":"<<m<<":"<<s<<endl;
        
        }
        if (GetAsyncKeyState('7')){
                cout << "\nStopwatch stopped." << endl;
                break;
            }
    }
    return 0;
}
