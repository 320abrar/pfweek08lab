#include<iostream>
using namespace std;
void function(int rows);
main()
{
    int rows; 
    cout<<"enter the rows:";
    cin>>rows;
    function(rows);
}
void function(int rows)
{
    for(int x=rows;x>0;x--)
    {
        for(int y=x;y>0;y--)
        {
        cout<<"*";
        }
         cout<<endl;
    }
   
}