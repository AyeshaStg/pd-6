#include <iostream>
#include <cmath>
using namespace std;
int calculateVolleyballGames(string, int, int); 
main()
{
string yearType;
int holidays;
int hometownweekends;
int volleyballgame;
cout<<"Enter year type: ";
cin>> yearType;
cout<<"Enter number of holidays: ";
cin>> holidays;
cout<<"Enter number of weekends: ";
cin>> hometownweekends;
volleyballgame=calculateVolleyballGames(yearType, holidays, hometownweekends);
cout << volleyballgame ;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownweekends)
{
    int totalWeekends = 48;
    double gamesInSofia;
    int weekendsInSofia = totalWeekends - hometownweekends;
    gamesInSofia = (3.0 / 4.0) * weekendsInSofia;
    gamesInSofia= gamesInSofia + ((2.0 / 3.0) * holidays);
    gamesInSofia= gamesInSofia + hometownweekends;
    if (yearType == "leap")
    {
      gamesInSofia= gamesInSofia * 1.15;
    }
return gamesInSofia;
}