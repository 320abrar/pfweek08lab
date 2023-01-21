#include<iostream>
using namespace std;
void per(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    per(number);
}
void per(int number)
{
    float p1=0,p2=0,p3=0,p4=0,p5=0;
    float a=0,b=0,c=0,d=0,e=0;
    for(int y=0;y<=number;y++)
    {
        float x;
        cout<<"enter the numbers:"<<endl;
        cin>>x;
        if(x>=1&&x<200)
        {
            a=a+1;
            p1=(a/number)*100;
            cout<<"percentag of p1 is"<<p1<<endl;
        }
         if(x>=200&&x<400)
        {
            b=b+1;
            p2=(b/number)*100;
            cout<<"percentag of p2 is"<<p2<<endl;
        }
         if(x>400&&x<600)
        {
            c=c+1;
            p3=(c/number)*100;
            cout<<"percentag of p3 is"<<p3<<endl;
        }
         if(x>600&&x<800)
        {
            d=d+1;
            p4=(d/number)*100;
            cout<<"percentag of p4 is"<<p4<<endl;
        }
         if(x>800)
        {
            e=e+1;
            p5=(e/number)*100;
            cout<<"percentag of p5 is"<<p5<<endl;
        }
        

    }
}