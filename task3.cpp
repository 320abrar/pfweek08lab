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
    int count=0;
    while(number>0)
    {
        count++;
        number=number/10;
        

    }
    cout<<count;

}
