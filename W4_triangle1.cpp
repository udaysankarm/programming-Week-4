#include<iostream>      // including library

using namespace std;      //including standard namesapce 
int main()           //decalring main function 
{
     int a,w;  //decalring variables
     cout<<"\nEnter the 2 angles of the triangle:"; // intruction to the user to input the values.
     cin>>a>>w;//recieving the value inputed by the user and assinging it to the variable/	variables.
     cout<<"\n the third angle of the triangle:"<<180-(a+w)<<endl;
     /* printing the needed output*/
     return 0;
}
