#include<iostream>      // including library

using namespace std;      //including standard namesapce 
int main()           //decalring main function 
{
     int a,w,y,d;  //decalring variables
     cout<<"\nEnter the number of days:"; // intruction to the user to input the values.
     cin>>a;//recieving the value inputed by the user and assinging it to the variable/	variables.
     y=a/365; //finding number of years using 
     w=(a%365)/7; //finding number of weeks a%365 gives reminder when divideed by 365 that divided by 7 gives number of weeks
     d=(a%365)%7;//gives us the number of days
     cout<<"\n the number of days is equivalent to:\n"<<y<<"years\t"<<w<<"weeks\t"<<d<<"days\n"<<endl;
     /* printing the needed out put values
 value*/
     return 0;
}
