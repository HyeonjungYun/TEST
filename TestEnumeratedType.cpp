#include <iostream>
using namespace std;

int main()
{
    enum Day {Monday = 1, Tuesday, Wednesday, Thursday, Friday} day;

    cout<<"Enter a day number (1 for Monday, 2 for Tuesday, etc.)\n";
    int daynumber;
    cin>>daynumber;

    switch(daynumber)
    {
        case Monday:cout<<"Play battleground"<<endl;
        break;
        case Tuesday:cout<<"Play maplestory"<<endl;
        break;
        case Wednesday:cout<<"Play dungeon n fighter"<<endl;
        break;
        case Thursday:cout<<"Play Kartrider"<<endl;
        break;
        case Friday:cout<<"Play cypers"<<endl;
        break;
        default:cout<<"Errors"<<endl;

           
    }
    return 0;
}