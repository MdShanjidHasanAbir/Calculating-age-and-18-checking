/*Calculating age and A person is eligible to vote if his/her age is greater than or equal to 18.
 Define a function to find out if he/she is eligible to vote.*/
#include<iostream>
#include<conio.h>
using namespace std;
int pD ,pM,pY,bD,bM,bY,y;
void calculateAge ()
{

int d, m, y;
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
   y = pY -bY;
if (pM<bM)
{
    y--;
    m =12-(bM-pM);
}
else
{
    m= pM-bM;
}
if (pD<bD)
{
    m--;
    d= month[pM-1] -(bD-pD);
}
else
{
    d= pD-bD;
}
cout<<endl;
cout<<"Your age is : "<<y<<" years "<<m<<" months "<<d<<" days "<<endl;



    if(y>=18)
cout<<" you are elegible for vote.";

    else
cout<<" you can  not give the vote.";

}

int main()
{

    cout<<"Enter  the present date (dd mm yyyy) :";
    cin>>pD >> pM>> pY;
    cout<<"Enter your birth date (dd mm yyyy) :";
    cin>>bD >> bM>> bY;
    calculateAge();

    getch();
}
