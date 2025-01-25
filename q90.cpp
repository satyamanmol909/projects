#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[n];
    int sum = 0;
    
    
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements of the array:" << endl;
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
   
    for(int i = 0; i < n; i++) 
    {
        sum =sum + arr[i];
    }
    cout << "The sum of the array elements is: " << sum << endl;
    
    return 0;
}
