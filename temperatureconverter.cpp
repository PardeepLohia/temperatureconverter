#include<iostream>
using namespace std;
int main()
{ float C,F,c,f;
char a,b;
repeat:
cout<<"enter \'f\' to convert celcius to fahreheit ";
cout<<"enter \'c\' to convert fahreheit to celcius ";
cin>>a;
if (a=='f'||a=='F')
   { cout<<"enter temperature in celciuse";
   cin>>c;
     F = ((c*9)/5)+32;
    cout<<"temp in fahrenheit :"<<F; 
 }
 else if (a=='C'||a=='c')
 { cout<<"enter temperature in fahrenheit";
   cin>>f;
   C=((f-32)*5)/9;
   cout<<"temp in fahrenheit :"<<C; 
}
else 
{
     cout<<"wrong input:(";
     syapa:
     cout<<"\n enter \'r\' to try again or \'e\' to exit program";
     cin>>b;
     if(b=='r'||b=='R')
     { 
          goto repeat;
     }
     else if(b=='e'||b=='E')
     {
          cout<<"\n:(";
     }
     else{
          cout<<"please give correct input!";
          goto syapa;
     }

}
     return 0;
}