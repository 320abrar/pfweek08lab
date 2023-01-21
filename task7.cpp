#include<iostream>
using namespace std;
float function(float money,int live);
main()
{
    float money;
    cout<<"enter the money you get:";
    cin>>money;
    int live;
    cout<<"enter the year to which he live:";
    cin>>live;
    float result=function(money,live);
    // cout<<result;
    if(result>=0)
    {
        cout<<"enough money"<<money<<"is left";
    }
    if(result<0)
    {
        result=result*-1;
        cout<<"not enough money"<<(result)<<"is needed:";
    }
}
float function(float money,int live)
{
    int year;
    int age =18;
    for(year=1800;year<=live;year++)
    {
        if(year%2==0)
        {
            money-=12000;
        }
        if(year%2!=0)
        {
            money-=(12000+50*age);
        }
        age++;
        cout<<money<<endl;
    }
    return money;
}