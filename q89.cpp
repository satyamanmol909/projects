//program to enter five fruits name
#include<iostream>
using namespace std;
class fruit
{
    public:
    string fruit_name;
    int n;
    void gaetdata()
    {
        cout<<"Enter the number of fruits : ";
        cin>>n;
        for(int i=1;i<=n; i++)
        {
            cout<<"Enter the name of fruit ";
            cin>>fruit_name;

        }

    }
    void printdata()
    {

        for(int i=1;i<=n;i++)
        {
            cout<<endl<<i<<". fruites name ="<<fruit_name<<endl;
        }
    }
};
int main()
{
    fruit f;
    f.gaetdata();
    cout<<system("cls");
    f.printdata();
    return 0;
}