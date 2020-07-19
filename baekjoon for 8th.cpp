#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int a,b;
    
    cin>>a; 
    
    for(b = 1; b <= a; b++){
        cout<<setw(a-b+1);


        for(int c =1; c <= b; c++){
            cout<<"*";
    }
    cout<<"\n";
    }

    return 0;
}