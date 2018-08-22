#include<iostream>      // including library
#include<cmath>

using namespace std;      //including standard namesapce 
int main()           //decalring main function 
{
     float p,t,r,c;  //decalring variables
     cout<<"\n\t\tWelcome to the program for calculatimg compound interest";
     cout<<"\nenter the principle amount:";                                  // intruction to the user to input the values.
     cin>>p;                                                                                              //receiving the principle amount
     cout<<"\nenter the time for which interest is to be calculated(in number of periods that interest is compounded):"; // intruction to the user to input the values.
     cin>>t;//receiving the period
     cout<<"\nEnter the rate of interest per time in which it is compounded:";// intruction to the user to input the values.
     cin>>r;   //receiving the rate
     c = pow((1+(r/100)),t);//the formula for interest is P(((1+r)^t)-1)
     cout<<"\n the interest after the given time is"<<p*(c-1) <<endl;
    /* printing the needed output*/
     return 0;
}
