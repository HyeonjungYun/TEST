#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio;

    int a,b,c;

    a > 0;
    b < 10;
    

    while(a !=0 || b != 0) {

    cin>>a>>b;
    if (a == 0 && b == 0){
        break;
    }

    c = a + b;

    cout<<c<<"\n";
}





    return 0;
}