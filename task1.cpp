#include <iostream>
#include <string>
using namespace std;
string checkactivity(string, string);
main()
{
string temperature;
string humidity;
string Activity;
cout<<"Enter temperature (warm or cold): ";
cin>> temperature;
cout<<"Enter humidity (dry or humid): ";
cin>> humidity;
Activity=checkactivity(temperature, humidity);
cout<<"Recommended activity: "<<Activity ;
}
string checkactivity(string temperature, string humidity)
{
string activity;
if(temperature=="warm" && humidity=="dry")
{
  activity="Play tennis";
}
if(temperature=="warm" && humidity=="humid")
{
 activity="Watch tennis";
}
if(temperature=="cold" && humidity=="dry")
{
 activity="Play basketball" ;
}
if(temperature=="cold" && humidity=="humid")
{
 activity="Watch Tv";
}
return activity;
}

