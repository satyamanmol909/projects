#include<iostream>
using namespace std;
int que(int a,int b){
    return (a/b);
}
int rem(int a,int b){
    return (a%b);
}
int main(){
    cout<<que(6,3)<<endl<<rem(6,3)<<endl;
    cout<<rem(4,6);
    return 0;
}
