#include <iostream>
#include <string>
using namespace std;
string findzodiacsign(int date, string month);
main()
{
int date;
string month;
string symbol;
cout<<"Enter the date of birth: "<<endl;
cin>>date;
cout<<"Enter the month of birth(e.g ,january,  Febuary): "<<endl;
cin>>month;
symbol=findzodiacsign(date, month);
cout<<"Zodiac sign: "<<symbol ;
}
string findzodiacsign(int date, string month)
{
string result;
if(((date>=21 && date<=31) && (month=="march")) || ((date>=1 && date<=19) && (month=="april")))
{
  result="Aries";
}
if(((date>=20 && date<=31) && (month=="april")) || (( date>=1 && date<=20) && (month=="may")))
{
  result="Taurus";
}
if(((date>=21 && date<=31) && (month=="may"))   || ((date>=1 && date<=20) && (month=="june")))
{
  result="Gemini";
}
if(((date>=21 && date<=31) && (month=="june"))  || ((date>=1 && date<=22)  && (month== "july")))
{
  result="Cancer";
}
if(((date>=23 && date<=31) && (month=="july"))  || ((date>=1 && date<=22) && (month=="august")))
{
  result="Leo";
}
if(((date>=23 && date<=31) && (month=="august")) || ((date>=1 && date<=22) && (month=="september")))
{
  result="Lirgo";
}
if(((date>=23 && date<=31) && (month=="september"))|| ((date>=1 && date<=22 )&& (month=="october")))
{
  result="Libra";
}
if(((date>=23 && date<=31) && (month=="october"))  || ((date>=1 && date<=21) && (month=="november")))
{
  result="Scorpio";
}
if(((date>=22 && date<=31) && (month=="november"))  || ((date>=1 && date<=21) && (month=="december")))
{
  result="Sagittarius";
}
if(((date>=22 && date<=31) && (month=="december"))  || ((date>=1 && date<=19) && (month=="january")))
{
  result="Capricorn";
}
if(((date>=20 && date<=31) && (month=="january")) || ((date>=1 && date<=18)  && (month=="february")))
{
  result="Aquarius";
}
  return result;
}
