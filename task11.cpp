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
    for(int x=1;x<=number;x++)
    {
        int y=x;
        if(y%4==0)
        {
        y=y*10;
        }
        cout<<","<<y;
    }
}
