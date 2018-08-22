#include<iostream>// including library
#include<cstring> 
using namespace std;//including standard namesapce 
int main()//decalring main function 
{
double a;//decalring variables
cout<<"\nEnter a length in centimeters:";// intruction to the user to input the values.
cin>>a;//recieving the value inputed by the user and assinging it to the variable/variables.
cout<<"\n the value entered in centimeter is equal to this value in kilometers:"<<a/100000;
/* printing the converted value*/
cout<<"\n the value entered in centimeter is equal to this value in meters:"<<a/100;
return 0;
}

