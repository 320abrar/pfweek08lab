#include<iostream>
using namespace std;
main()
{
    int x=1;
    int n;
    cout<<"enter the no:";
    cin>>n;
     int y=1;
    while(x<=10)
    {
       
        int table;
        table=n*y;
        cout<<n<<"*"<<y<<"="<<table<<endl;
         y=y+1;
        x=x+1;
    }
}