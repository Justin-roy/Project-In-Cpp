#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
void ConverterToMb(int gb)
{
    int OneGB = 1024;//1gb=1024mb
    cout<<gb<<" GB = "<<OneGB*gb<<" Megabyte";
}
void ForSimplecal()
{
    int num1,num2,oper;
    cout<<"\n Simple Calculator";
    cout<<"\n\n*************************************************\n";
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"\n\n";
    cout<<"Press 1 For Addition \n";
    cout<<"Press 2 For Subtraction \n";
    cout<<"Press 3 For Multiplication \n";
    cout<<"Press 4 For Division \n";
    cout<<"Press 5 For Modulas \n";
    cout<<"Enter Your Choice: "<<endl;
    cin>>oper;
    switch (oper)
    {
    case 1:cout<<num1<<" "<<"+"<<" "<<num2<<" = "<<num1+num2;
        break;
    case 2:cout<<num1<<" "<<"-"<<" "<<num2<<" = "<<num1-num2;
        break;
    case 3:cout<<num1<<" "<<"*"<<" "<<num2<<" = "<<num1*num2;
        break;
    case 4:cout<<num1<<" "<<"/"<<" "<<num2<<" = "<<num1/num2;
        break;
    case 5: cout<<num1<<" "<<"%"<<" "<<num2<<" = "<<num1%num2;
        break;
    default: cout<<"Invalid Input";
        break;
    }
}
void ForScientificCal()
{
    cout<<"\n\n*************************************************\n";
    cout<<"\n Scientific Calculator\n\n";
    int a,b,oper1;
    cout<<"Press 1 For Power: \n";
    cout<<"Press 2 For Sin: \n";
    cout<<"Press 3 For Cos \n";
    cout<<"Press 4 For Tan \n";
    cout<<"Press 5 For Cosec \n";
    cout<<"Press 6 For Sec \n";
    cout<<"Press 7 For Cot \n";
    cout<<"Press 8 For Log \n";
    cout<<"Press 9 For BaseLog \n";
    cout<<"Press 10 For SquareRoot \n";
    cout<<"Press 11 For Convert GB to MB\n";
    cout<<"Enter Your Choice: "<<endl;
    cin>>oper1;
    switch (oper1)
    {
    case 1:cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
        cout<<"Power = "<<pow(a,b);
        break;
    case 2:cout<<"Enter Any Number: ";
    cin>>a;
        cout<<"Sine = "<<sin(a);
        break;
    case 3:cout<<"Enter Any Number: ";
    cin>>a;
        cout<<"Cosine = "<<cos(a);
        break;
    case 4:cout<<"Enter Any Number: ";
    cin>>a;
        cout<<"Tangent = "<<tan(a);
        break;
    case 5:cout<<"Enter Any Number: ";
    cin>>a;
         cout<<"Cosec = "<<asin(a);
        break;
    case 6:cout<<"Enter Any Number: ";
    cin>>a;
        cout<<"Sec = "<<acos(a);
        break;
    case 7:cout<<"Enter Any Number: ";
    cin>>a;
        cout<<"Cot = "<<atan(a);
        break;
    case 8:cout<<"Enter Any Number: ";
    cin>>a;
        cout<<"Log = "<<log(a);
        break;
    case 9:cout<<"Enter Any Number: ";
    cin>>a;
         cout<<"LogBase10 = "<<log10(a);
        break;
    case 10:cout<<"Enter Any Number: ";
    cin>>a;
         cout<<"Square Root = "<<sqrt(a);
        break;
    case 11:cout<<"Enter Your Data in Gigabyte: ";
        int gb;
        cin>>gb;
        ConverterToMb(gb);
        break;
    default: cout<<"Invalid Input";
        break;
    }
}
int main()
{
    int opt;
    do
    {
    cout<<"\n\n*************************************************\n";
    cout<<endl;
    cout<<"Press 1 For Simple Calculator: \n";
    cout<<"Press 2 For Scientific Calculator: \n";
    cout<<"Press 3 For Exit: \n";
    cin>>opt;
     switch (opt)
     {
     case 1:ForSimplecal();
         break;

     case 2:ForScientificCal();
         break;
     }
     } while(opt!=3);

     if(opt==3){
        cout<<"\nThanks For Using"<<endl;
        cout<<"Have A Nice Day!";
     }
     system("pause>0");
return 0;
}
