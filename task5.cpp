#include <iostream>
using namespace std;
float calculatefruitprice(string, string, double);
main()
{
string fruit;
string day;
double quantity;
float total;
cout<<"Enter the fruit name: "<<endl;
cin>> fruit;
cout<<"Enter the day of the week: "<<endl;
cin>> day;
cout<<"Enter the quantity: "<<endl;
cin>> quantity;
if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" || day=="sunday" )
{
  total=calculatefruitprice(fruit, day, quantity);
  cout<< total;
}
else
  cout<<"error";
}
float calculatefruitprice(string fruit, string day, double quantity)
{
float totalprice;
totalprice=0;
if(((day=="monday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")) && (fruit=="banana"))
{
  totalprice=2.50*quantity;
}
if(((day=="sunday") && (day=="saturday")) && (fruit=="banana"))
{
  totalprice=2.70*quantity;
}

if(((day=="monday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")) && (fruit=="apple"))
{
  totalprice=1.20*quantity;
}
if(((day=="sunday") && (day=="saturday")) && (fruit=="apple"))
{
  totalprice=1.25*quantity;
}

if(((day=="monday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")) && (fruit=="orange"))
{
  totalprice=0.85*quantity;
}
if(((day=="sunday") && (day=="saturday")) && (fruit=="orange"))
{
  totalprice=0.90*quantity;
}

if(((day=="monday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")) && (fruit=="grapefruit"))
{
  totalprice=1.45*quantity;
}    
if(((day=="sunday") && (day=="saturday")) && (fruit=="grapefruit"))
{
  totalprice=1.60*quantity;
}
    
if(((day=="monday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")) && (fruit=="kiwi"))
{
  totalprice=2.70*quantity;
}  
if(((day=="sunday") && (day=="saturday"))&& (fruit=="kiwi"))
{
  totalprice=3.00*quantity;
}  

if(((day=="monday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")||(day=="saturday")) && (fruit=="pineapple"))
{
  totalprice=5.50*quantity;
}
if(((day=="sunday") && (day=="saturday")) && (fruit=="pineapple"))
{
  totalprice=5.60*quantity;
}

if(((day=="monday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")||(day=="saturday")) && (fruit=="grapes"))
{
  totalprice=3.85*quantity;
}
if(((day=="sunday") && (day=="saturday"))&& (fruit=="grapes"))
{
  totalprice=4.20*quantity;
}
return totalprice;
}

