//program to print reverse of a number using function
#include <iostream> 
using namespace std; 
int reverse(int num) 
{ 
	int rev_num = 0; 
    while(num>0)
    {
		rev_num = rev_num * 10 + num % 10; 
		num = num / 10; 
    }
    return rev_num;
}  
int main() 
{ 
	int num; 
    cout<<"enter a number";
    cin>>num;
	cout << "Reverse of num is " << reverse(num); 
	return 0; 
}