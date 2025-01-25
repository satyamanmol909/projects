#include <iostream>
using namespace std;

int main()
{
    int a[20][20], b[20][20], sum[20][20], r1, c1, r2, c2, i, j;

    cout << "Enter rows  for first matrix: ";
    cin >> r1 ;
    cout << "Enter coloum for first matrix: ";
    cin>>c1;
    cout << "Enter rows  for second matrix: ";
    cin >> r2 ;
    cout << "Enter coloum for second matrix: ";
    cin>>c2;

 
    while (c1!=c2||r1!=r2)
    {
        cout << "Error! column of first matrix not equal to coloum of second.";

        cout << "Enter rows  for first matrix: ";
        cin >> r1 ;
        cout << "Enter coloum for first matrix: ";
        cin>>c1;
        cout << "Enter rows  for second matrix: ";
        cin >> r2 ;
        cout << "Enter coloum for second matrix: ";
        cin>>c2;   
    }
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            sum[i][j]=0;
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            
            {
                sum[i][j] == a[i][j]+ b[i][j];
            }
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    
    for(j = 0; j < c2; ++j)
    {   
        cout << " " << sum[i][j];
       
    }
    
    
    
    return 0;
}