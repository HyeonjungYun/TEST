#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter a year\n";
    int year ;
    cin>>year;

    //연도가 윤년인지를 검사
    bool isLeapYear =(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    //결과 출력
    if (isLeapYear){
    cout<<year<< " is leap year!" ;
    }
    else{
    cout<<year<< " is not leap year!" ;
    }    

    return 0;
}