#include<iostream>
using namespace std;

int main()
{
    
    int a,b,c,d;
    cin>> a;
    cin>>c;
    if(c < a){
        a = c;
    }
    cin>>c;
    if(c < a){
        a = c;
    }
    cin>>b;
    cin>>d;
    if(d < b){
        b = d;
    }

    cout<<a + b -50<<"\n";

    return 0;

   

}


