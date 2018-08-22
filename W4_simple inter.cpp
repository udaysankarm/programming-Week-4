#include<iostream>      // including library

using namespace std;      //including standard namesapce 
int main()           //decalring main function 
{
     int p,t,r;  //decalring variables
cout<<"\n\t\tWelcome to the program for calculatimg simple interest";
     cout<<"\nenter the principle amount:";  // intruction to the user to input the values.
     cin>>p;  //receiving the principle amount
     cout<<"\nenter the time for which interest is to be calculated(in years):";      
     cin>>t;
     cout<<"\nEnter the rate of interest:";
     cin>>r;   
     
     cout<<"\n the interest after the given time is"<<p*r*t/100<<endl;
    
     /* printing the needed output*/
     return 0;
}
