#include <iostream>
using namespace std;

int main()
{
    double fahrenheit;
    cout<<"Enter a dergee in Fahrenheit:";
    cin>>fahrenheit;

    //섭씨 값 구하기 
    double celsius = (5.0/9)*(fahrenheit -32);

    //결과 값 화면 표시
    cout<<"Fahrenheot"<<fahrenheit<<"is "<<celsius<<" in Celsius" <<endl;

    return 0;
}