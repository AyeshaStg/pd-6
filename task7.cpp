#include <iostream>
using namespace std;
string checkstudentstatus(int, int, int, int);
main()
{
int starting_hour;
int starting_minutes;
int arrival_hour;
int arrival_minutes;
string comment;
cout<<"Enter exam starting time (hour): ";
cin>>starting_hour;
cout<<"Enter exam starting time(minutes)";
cin>>starting_minutes;
cout<<"Enter student hour of arrival: ";
cin>> arrival_hour;
cout<<"Enter student minutes of arrival: ";
cin>> arrival_minutes;
comment=checkstudentstatus(starting_hour, starting_minutes, arrival_hour, arrival_minutes);
cout<< comment;
}
string checkstudentstatus(int starting_hour, int starting_minutes, int arrival_hour, int arrival_minutes)
{
string status;
string result;
int convertedhours1;
int convertedhours2;
int lefthours;
int leftminutes;
int remainingmin;
int remainingmin2;
convertedhours1=(starting_hour*60)+starting_minutes;
convertedhours2=(arrival_hour*60)+arrival_minutes;
remainingmin=convertedhours1-convertedhours2;
remainingmin2=convertedhours2-convertedhours1;
if((convertedhours1==convertedhours2) || (convertedhours1-convertedhours2==30))
{
  result="On time";
}
if(convertedhours1-convertedhours2>30)
{
  status="Early";
  if(starting_hour>arrival_hour)
  lefthours=starting_hour-arrival_hour;
  else
  lefthours=arrival_hour-starting_hour;
  if(starting_minutes>arrival_minutes)
  leftminutes=starting_minutes-arrival_minutes;
  else
  leftminutes=arrival_minutes-starting_minutes;
  result= status + "\n" + to_string(lefthours) + ":" + to_string(leftminutes) + " hours before the start"; 
  if(remainingmin<60)
  result=status + "\n" + to_string(remainingmin) + "minutes before the start";   
}
if(convertedhours2>convertedhours1)
{
  status="late";
  if(convertedhours2-convertedhours1>60)
  result=status "\n" + to_string(remainingmin2) + "minutes after the start";
}
return result;
}

