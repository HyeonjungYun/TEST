#include<iostream>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int a,b,c;
    cin>>a;

    for(int i = 1; i <= a; i++ ){
        cin>>c>>b;

        cout<<(c + b)<<"\n";
    }
    return 0;
}
