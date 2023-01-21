#include<iostream>
using namespace std;
void printfibonacci(int number,int x);
main()
{
    int x;
    cout<<"ente the number:";
    cin>>x;
    int number;
    printfibonacci(number,x);
    
    

}

void printfibonacci(int number,int x)
{
    int n1=0;
    int n2=1;
    cout<<n1<<","<<n2;
    for(number=0;number<=x;number++)
    {
    
    int sum=n1+n2;
    cout<<","<<sum;
    n1=n2;
    n2=sum;
    number++;
    }

}