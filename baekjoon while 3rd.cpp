#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    int j = 0;

    cin>>b;

     a = b;

    while(1){

        c = (b / 10);
        d = (b % 10);

        b = d * 10 + ((c + d) % 10);
        
        j++;

        if(b == a){
            cout<<j<<endl;
            break;
        }
        
       
    }

    return 0;
    

}

