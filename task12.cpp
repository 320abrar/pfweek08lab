#include<iostream>
using namespace std;
void function(int rows);
main()
{
    int rows;
    cout<<"enter the number of rows:";
    cin>>rows;
    function(rows);
}

void function(int rows)
{
    int balls=0;
   for (int x=1; x <= rows;  x++)
   {
    balls=balls+x;
    
    
   }
   cout<<balls;
}
    