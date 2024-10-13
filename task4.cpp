#include <iostream>
#include <string>
using namespace std;
string cellulercompany(char, char, int);
main()
{
char code;
char time;
int minutes;
string result;
cout<<"Enter the service code (r/R, p/P): ";
cin>>code;
if(code=='p' || code=='P')
{
cout<<"Enter time of te call (D/d for day, N/n for night): ";
cin>> time;
}
cout<<"Enter the number of minutes used: ";
cin>> minutes;
result= cellulercompany(code, time, minutes);
cout<< result;
}
string cellulercompany(char code, char time, int minutes)
{
float totalbill;
string service;
string Total;
if(code=='r'|| code=='R')
{
   totalbill=10;
   if(minutes>50)
   {
      totalbill=totalbill + ((minutes-50)*0.20);
      service="Reguler";
   }
}
if(code=='p' || code=='P')
{
    if(time=='d' || time=='D')
    {
       totalbill=25;
       service="Premium";
       if(minutes>75)
       {
         totalbill=totalbill +((minutes-75)*0.10);
       }
     }
}
if(code=='p' || code=='P')
{
    if(time=='n' || time=='N')
    {
       totalbill=25;
       service="Premium";
       if(minutes>100)
       {
         totalbill=totalbill + ((minutes-100)*0.05);
       }
     }
}
Total= "Enter the number of minutes used: " + to_string(minutes) + " minutes\nService type: "+ service + "\nAmount Due: " + to_string(totalbill) + "$";
return Total;
}