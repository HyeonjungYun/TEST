#include<iostream>
using namespace std;

int main()
{
    int a,b;
    a = 5;
    int arr[a];
    int i;

    for(i = 1; i <= a; i++){

        cin>>arr[i];

        if(arr[i] < 41){
        arr[i] = 40; 
    }
    }

  
    cout<<(arr[1] + arr[2] + arr[3] + arr[4] + arr[5])/5<<"\n";

    return 0; 




}