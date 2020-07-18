#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d,e,f,g,h,j;

    cout<<"Enter loan amount. for example 10000.25 : "; //대출액 입력
    cin>>a; //대출액 a
    cout<<"Enter annual interest rate. for example 6.25 : "; //연간 이자율 입력
    cin>>b; //연간 이자율 b
    cout<<"Enter number of years. for example 15 : "; //대출 연수 입력
    cin>>c; //대출 연수c

    //월 이자율 d 구하기
    d=b/1200;

    //매월 납입금 e 구하기
    e=a*d/(1-1/pow(1+d,c*12));

    //매월 납입금 e를 통하여 전체 납입금액 f 구하기
    f=e*c*12;

    e= static_cast<int>(e*1000)/100.0;
    f= static_cast<int>(f*1000)/100.0;

    cout<<"Your monthly payment is "<<e;
    cout<<"\nYour total payment is "<<f;


    

    return 0;
}