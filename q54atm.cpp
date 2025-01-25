
#include <iostream>
#include <Windows.h> // For Sleep() function
using namespace std;

int main()
{
    int sec = 0, mi = 0, ho = 0, n, a;

    cout << "________stopwatch_________" << endl;

    // Label for restarting the stopwatch
abc:
asd:
    cout << endl;
    cout << "Press 5 to start, 9 to stop the stopwatch: ";
    cin >> n;

    if (n == 5)
    {
        while (true)
        {
            Sleep(1000); // Sleep for 1 second (1000 milliseconds)
            sec++;

            if (sec == 60)
            {
                mi++;
                sec = 0;
            }

            if (mi == 60)
            {
                ho++;
                mi = 0;
            }

            cout << "\t\t" << ho << ":" << mi << ":" << sec << endl;

            if (GetAsyncKeyState('9')) // Stop if '9' is pressed
            {
                cout << "\nStopwatch stopped." << endl;
                break;
            }
        }

        cout << "\t\t" << "Final result: " << ho << ":" << mi << ":" << sec << endl;
    }
    else
    {
        cout << "Please input 5 to start the stopwatch." << endl;
        goto asd;
    }

    cout << "\nIf you want to start the stopwatch again, press 6: ";
    cin >> a;

    if (a == 6) // Check for 'a' instead of 'n'
    {
        ho = mi = sec = 0; // Reset time values
        goto abc; // Restart stopwatch
    }

    return 0;
}
