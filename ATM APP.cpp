#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
// Balance        Deposit       Withdraw
//void show(string name2,int mobile_no,long long int Money2);
void showmenu()
{
    cout<<"\n\n**************MAIN MENU**************"<<endl;
    cout<<"1. Show Detail"<<endl;
    cout<<"2. Check Balance"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdraw"<<endl;
    cout<<"5. All Account"<<endl;
    cout<<"6. Add Account"<<endl;
    cout<<"7. Exit"<<endl<<endl;
}

void Display(string name,int pass,int mny)
{
    cout<<"Account Holder Name: "<<name<<endl;
    cout<<"Your Password: "<<pass<<endl;
    cout<<"Current Balance: Rs."<<mny<<endl;
}
void show(string name2,int mobile_no,long long int Money2)
{
     cout<<"Account Holder Name: "<<name2<<endl;
    cout<<"Current Balance: Rs."<<Money2<<endl;
    cout<<"Your Mobile Number: "<<mobile_no<<endl;
    //Allaccount();
    exit(0);
}
void Add()
{
    string name2;
    int mobile_no;
    long long int Money2;
    cout<<"Enter Your Name: ";
    //getline(cin,name2);
    cin>>name2;
    cout<<"Enter Your Amount: ";
    cin>>Money2;
    cout<<"Enter Your Mobile Number: ";
    cin>>mobile_no;
    show(name2,mobile_no,Money2);
}

void Allaccount(string name,int pass,int mny)
{
    cout<<"1st Customer details ...."<<endl<<endl;
    cout<<"Account Holder Name: "<<name<<endl;
    cout<<"Your Password: "<<pass<<endl;
    cout<<"Current Balance: Rs."<<mny<<endl;
//    cout<<"\n2nd Customer details ...."<<endl<<endl;
//    cout<<"Account Holder Name: "<<name2<<endl;
//    cout<<"Your Mobile Number: "<<mobile_no<<endl;
//    cout<<"Your Password: "<<pass<<endl;
//    cout<<"Current Balance: Rs."<<Money2<<endl;
}
int main()
{
    string name = "Justin Roy";
    int option;
    char another ='Y';
    int Password=1234,pin,counter=0;
    long long int Money=500,Aadhar,mob;
    cout<<"***********WELCOME TO JUSTIN BANK***********"<<endl;
    do
    {
      cout<<"Enter Your Pin: ";
      cin>>pin;
      counter++;
    } while (counter<3 && pin!=Password);

    if(counter<3){
        goto Pass;
    }
    else{
        goto Exit;
    }
    do{
       Pass:
        showmenu();
        cout<<"Choose Option: ";
        cin>>option;
        system("cls");
    switch (option)
    {
    case 2:cout<<"\nCurrent Balance "<<" "<<Money<<endl;
        break;
    case 3:cout<<"Enter Your Amount To Deposit "<<endl;
    long long int depositeAmount;
    cin>>depositeAmount;
    Money += depositeAmount;
        break;
    case 4:cout<<"Enter Your Amount To Withdraw "<<endl;
    long long int WithdrawAmount;
    cin>>WithdrawAmount;
    if(WithdrawAmount<=Money)
    Money -= WithdrawAmount;
    else
        cout<<"Not enough Money";
        break;
    case 1: Display(name,Password,Money);
        break;
    case 6:
        Add();
        break;
    case 5:Allaccount(name,Password,Money);
        break;
    }
    }while(option!=7);
  Exit:
      cout<<"\nYour Account is Blocked!";
        system("pause>0");
return 0;
}
