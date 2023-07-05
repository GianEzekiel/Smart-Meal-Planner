#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;
void welcome_page(string name)
{
system("cls");
const char *welcome =
"\t\t\t\t\t|SM PLANNER: Your Smart Meal Planner|\n"
"--------------------------------------------------|USER INFORMATION|----------------------------------------------------\n";
cout<<welcome;
cout<<"Name: "<<name<<endl;
cout<<"------------------------------------------------------------------------------------------------------------------------\n";
}
void loading_screen()
{
int bar1 = 177, bar2=219;
char const *text =
"\t  GETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGET          IGHTGET         HTLETSGETF         IGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGE  ITANDEATRIGHTGETFITEA  IG  LETSGET  T  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGE  ITANDEATRIGHTGETFITEA  IGH  ETSGE  IT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGE  ITANDEATRIGHTGETFITEA  IGHT  TSG  FIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGE  ITANDEATRIGHTGETFITEA  IGHTL  S  TFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGE  ITANDEATRIGHTGETFITEA  IGHTLE  GETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGET          IGHTGETFITEA  IGHTLETSGETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATR  HTGETFITEA  IGHTLETSGETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATR  HTGETFITEA  IGHTLETSGETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATR  HTGETFITEA  IGHTLETSGETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATR  HTGETFITEA  IGHTLETSGETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATR  HT      EA  IGHTLETSGETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGET          IGHT      EA  IGHTLETSGETFIT  DEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLE      IT  DEATRIGHT  TFIT   RIGH  ET   TFIT  DE      TG      ATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLE  GET IT  DEATRIG  GE  IT  T  GH  ET  E  IT  DE  RIGHTG  FIT  TRIGHTLETS\n"
"\t\tGETFITEATRIGHTLE      IT  DEATRIG      IT  TR  H  ET  ET  T  DE      TG      ATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLE  GETFIT  DEATRIG  GE  IT  TRI    ET  ETF    DE  RIGHTG  FI  ATRIGHTLETS\n"
"\t\tGETFITEATRIGHTLE  GETFIT       IG  GE  IT  TRIG   ET  ETFI   DE      TG  FIT  TRIGHTLETS\n"
"\t\tGETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETSGETFITANDEATRIGHTGETFITEATRIGHTLETS\n\n"
"\t\t\t\t\t\t\tLoading...\n\n"                                     ;
SetConsoleCP(437);
SetConsoleOutputCP(437);
system("Color 09");
printf("\e[?251");
cout<<text;
for (int i = 0; i<60;i++)
{
    cout<<(char)bar1;
}
cout<<"\r";
cout<<"\t\t\t\t";
for (int i=0; i < 60; i++)
{
    cout<<(char)bar2;
    Sleep(80);

}
    cout<<"\n\t\t\t\t\tWelcome TO SM Planner: Your Smart Meal Planner!\n";
    system("pause");

}

int main()
{
string name;
loading_screen();
system("cls");
cout<<"\t\t\t\t\t\tWelcome To SM Planner!\n";
cout<<"\t\t\t\t\tBefore we start we would love to know your name\n";
cout<<"Please enter your name: ";
getline(cin,name);
welcome_page(name);
//after this siguro pwede natin iredirect sa BMI Calculator?

return 0;
}
