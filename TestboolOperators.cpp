#include <iostream>
using namespace std;

int main()
{
    int a ;
    0 < a <11;

    cout<<"What your favorite number? (0 < your Favorite number =< 10) \n";
    cin>>a;

    if( a % 2 == 0 && a % 3 == 0)
    cout<<" WTF!";

    if( a % 2 == 1 || a % 3 == 0)
    cout<<" Wow. you're pervert";

    if ( a % 2 == 1 && a % 3 == 1)
    cout<<" What? Are you seriously?";

    if ( a % 2 == 1 || a % 3 == 1)
    cout<< " Go to hell!";

    if ( a % 2 == 0 && a % 3 == 1)
    cout<<" why live in now?";

    if ( a % 3 == 2)
    cout<<" congratulatiun! From now on, you're not human.";

    return 0;
}
