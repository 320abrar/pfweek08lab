#include<iostream>
using namespace std;
void function(int number1,int number2,int gcd);
main()
{
    int number1,number2,gcd;
    cout<<"enter first no";
    cin>>number1;
    cout<<"enter the second no";
    cin>>number2;
   function(number1,number2,gcd);

}

void function(int number1,int number2,int gcd)
{
    int x;
    gcd=0;
    for(x=1;x<=number1;x++)
    {
        if((number1%x==0)&&(number2%x==0))
        {
            gcd=x;
            cout<<gcd;
        }
    }
}