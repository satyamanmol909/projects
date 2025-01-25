//traffic management system
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int red,green ,yellow;
    abc:
    for(red=0;red<=15;red++)
    {
        Sleep(1000);
         system("cls");
        cout<<"\t"<<"\033[31myou have to wait for 15s , signal is RED"<<endl;
        cout<<"\t\t"<<"\033[31mremain time="<<15-red<<endl;
    }
    for(yellow=0;yellow<=10;yellow++)
    {
        Sleep(1000);
        system("cls");
        cout<<"\t\033[33mget ready within 10s to go , signal is YELLOW"<<endl;
        cout<<"\t\t\033[33m "<<" remain time="<<10-yellow<<endl;

    }
    for(green=0;green<=20;green++)
    {
        Sleep(1000);
        system("cls");
        cout<<" \033[32myou can go now ,signal is GREEN"<<endl;
        cout<<" \033[32m  this way is open for 20s"<<endl;
        cout<<"\t\033[32mremain time="<<20-green<<endl;
        
    }
    goto abc;

    return 0;
}
