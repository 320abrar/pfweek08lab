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
   for(int x=1;x<=rows;x++)
   {
    for(int y=0;y<x;y++)
    {
        cout<<"*";
      
    }
      cout<<endl;
        
   }
}