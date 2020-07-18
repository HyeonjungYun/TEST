#include <iostream>
using namespace std;

int main()
{
    

    cout<<"What day of the week is it today? (Enter numerals, Sunday is 0. Monday is 1.) And do you want to know the day of the week after a few days?"<<endl;

    int a,b,c;

   
    cin>>a>>b;

    c=(a+b)%7;



    cout<<c<<endl;


    return 0;
    


}