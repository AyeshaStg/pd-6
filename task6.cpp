#include <iostream>
using namespace std;
string calculatehotelprices(string, int);
main()
{
string month;
int days;
string hotel;
cout<<"Enter the month(May, June, July, August, September, October): ";
cin>> month;
cout<<"Enter the number of days: ";
cin>> days;
hotel=calculatehotelprices(month, days);
cout<< hotel;
}
string calculatehotelprices(string month, int days)
{
string result;
float Apartment;
float Studio;
if(month=="May" || month=="October")
{
  if(days<7)
  {
   Studio=days*50;
   Apartment=days*65;
   }
  if(days>=7 && days<14)
  {
    Studio=(50*days)-((5*(50*days)) / 100);
  }
   if(days>=14)
  {
   Studio=(50*days)-((30*(50*days)) / 100);
   Apartment=(65*days)-((10*(65*days)) /100);
   }
}
if(month=="June" || month=="September")
{
  if(days<=14)
  {
   Studio=75.20*days;
   Apartment=68.70*days;
   }
  if(days>14)
  {
   Studio=(75.20*days)-((20*(75.20*days)) / 100);
   Apartment=(68.70*days)-((10*(68.70*days)) / 100);
   }
}
if(month=="July" || month=="August")
{
   Studio=76*days;
   if(days>14)
  {
   Apartment=(77*days)-((10*(77*days))/100);
   }
}
result="Apartment: " + to_string(Apartment) + "\nStudio: " + to_string(Studio);
return result;
}
    

