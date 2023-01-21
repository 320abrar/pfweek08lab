#include<iostream>
using namespace std;
void function(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    function(number);

}
void function(int number)
{
     int c=0;
    while(number>0)
    {
    int a=number%10;
    
     c=c+a;
    number=number/10;
     
    }
    cout<<c;
  

}