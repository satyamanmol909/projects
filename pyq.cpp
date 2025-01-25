#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;
    if(x>0&&y>0)
    {
        cout<<"in the first quardent";
    }
    else if(x<0 && y>0)
    {
      cout<<"in the second quardent";  
    }
    else if(x<0 && y<0)
    {
      cout<<"in the third quardent";  
    }
    else if(x>0 && y<0)
    {
      cout<<"in the fourth quardent";  
    }
    return 0;
}
    
