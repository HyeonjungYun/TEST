#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    a>0;
    
    int arr1[a];

    for(int i = 1; i <= a; i++){
    cin>>arr1[i];
    }

    for (int j = 1; j <= a; j++){
        if (arr1[j] < b)
        cout<<arr1[j]<<"\n";
    }



    return 0;

    
}