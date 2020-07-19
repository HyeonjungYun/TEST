#include<iostream>
using namespace std;

int main()
{
   int a,b,c;
   int mid;

   cin>>a>>b>>c;

   if(a >= b){
       mid = (b >= c) ? b : (c >= a) ? a : c;

   }
   else // b>a
   {
       mid = (a >= c) ? a : (c >= b) ? b : c;
   }

   cout<<mid<<endl;

   return 0;
   
}