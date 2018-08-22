#include<iostream>      // including library

using namespace std;      //including standard namesapce 
int main()           //decalring main function 
{
     int a,b,c,d,e,t;  //decalring variables
     cout<<"\nEnter the maximum mark that a student can get in one eaxamination(same for all subjects):";  // intruction to the user to input the values.
     cin>>t;  //receiving the tottal mark        
     cout<<"\nenter mark acquried by the student for subject 1:";                                            
     cin>>a;                                                        //recieving and assinging it to the variable/variables.
     cout<<"\nenter mark acquried by the student for subject 2:"; 
     cin>>b;   
     cout<<"\nenter mark acquried by the student for subject 3:";
     cin>>c;    
     cout<<"\nenter mark acquried by the student for subject 4:";
     cin>>d;    
     cout<<"\nenter mark acquried by the student for subject 5:";
     cin>>e;    
     cout<<"\n the tottal mark of the student when all subjects combined is:"<<a+b+c+d+e<<endl;
     cout<<"\n average mark of the student is:"<<(float) (a+b+c+d+e)/5;
     cout<<"\n the percentage of the student is :"<<(float)(a+b+d+c+e)*100/(5*t)<<"%\n";
     /* printing the needed output*/
     return 0;
}
