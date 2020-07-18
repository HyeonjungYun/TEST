#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    
    if((a > 89) && (a < 101))
    cout<<"A";

    if((a > 79) && (a < 90))
    cout<<"B";

    if((a > 69) && (a < 80))
    cout<<"C";

    if((a > 59) && (a <70))
    cout<<"D"<<endl;

    if(a<60)
    cout<<"F"<<endl;

    return 0;

}