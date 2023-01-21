#include<iostream>
using namespace std;
float cal(int age,float wprice,int tprice);
main()
{
    int age;
    cout<<"enter the age of lilly:";
    cin>>age;
    float wprice;
    cout<<"enter the price of washing machine:";
    cin>>wprice;
    int tprice;
    cout<<"enter the price of toy:";
    cin>>tprice;
    float result=cal(age,wprice,tprice);
    cout<<result;
}
float cal(int age,float wprice,int tprice)
{
    int amount=0;
    int toy=0;
    int toyprice;
    int left;
    int multi=1;
    for(int x=1;x<=age;x++)
    {
        if(x%2==0)
        {
            int cashPrice=10*multi;
            amount=amount+cashPrice;
            amount=amount-1;
            multi++;
        }
        if(x%2!=0)
        {
            toy=toy+1;
        }
    }    
    toyprice=tprice*toy;
    toyprice=toyprice+amount;
    if(toyprice>=wprice)
    {
        cout<<"yes enough money:";
        left=toyprice-wprice;
    }
    else if(toyprice < wprice)
    {
        cout<<"not enough money:";
        left=wprice-toyprice;
    }
    return left;
}