#include <iostream>
using namespace std;
float calculateaverage(float, float, float, float, float);
string calculategrade(float);
main()
{string name;
float marksenglish;
float marksmaths;
float markschemistry;
float markssocialstudies;
float marksbiology;
float Percentage;
string Result;
cout<<"Enter student name: ";
cin>> name;
cout<<"Enter marks of english: ";
cin>> marksenglish;
cout<<"Enter marks of math: ";
cin>>marksmaths;
cout<<"Enter marks of chemistry: ";
cin>> markschemistry;
cout<<"Enter marks of socialstudies: ";
cin>> markssocialstudies;
cout<<"Enter marks of biology: ";
cin>> marksbiology;
Percentage=calculateaverage(marksenglish, marksmaths, markschemistry, markssocialstudies, marksbiology);
cout<<"Percentage: "<<Percentage <<endl;
Result=calculategrade(Percentage);
cout<<"Grade: "<<Result;
}
float calculateaverage(float marksenglish, float marksmaths, float markschemistry, float markssocialstudies, float marksbiology)
{
float average;
average=((500 - (marksenglish + marksmaths + markschemistry + markssocialstudies + marksbiology)) / 500)*100;
return average;
}
string calculategrade(float average)
{
string Grade;
if(average>=90 && average<=100)
{
  Grade="A+";
}
if(average>=80 && average<90)
{
  Grade="A";
}
if(average<=70 && average<80)
{
 Grade="B+";
}
if(average>=60 && average<70)
{
 Grade="B";
}
if(average>=50 && average<60)
{
 Grade="C";
}
if (average>=40 && average<50)
{
 Grade="D";
}
if (average<40)
{
 Grade="F";
}
return Grade;
}


