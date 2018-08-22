#include<iostream>      // including library

using namespace std;      //including standard namesapce 
int main()           //decalring main function 
{
     float a;           //decalring variables
     cout<<"\nEnter the temperature in farenhiet:"; // intruction to the user to input the values.
     cin>>a;//recieving the value inputed by the user and assinging it to the variable/	variables.
     cout<<"\n the value entered in fareinheit is equal to this value in celcius:"<<(a-32)/1.8<<endl;
     /* printing the converted value*/
     return 0;
}
