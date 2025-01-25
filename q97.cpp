//program to create a time
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int h, m, s;
    cout << "Enter the hour: ";
    cin >> h;
    cout << "Enter the minutes: ";
    cin >> m;
    cout << "Enter the seconds: ";
    cin >> s;

    while(h > 0 || m > 0 || s > 0)
    {
        Sleep(1000);
        s--;
        if(s < 0)
        {
            s = 59;
            m--;
        }
        if(m < 0)
        {
            m = 59;
            h--;
        }

        cout << h << ":" << m << ":" << s << endl;
    }

    cout << "Time's up!" << endl;

    return 0;
}
