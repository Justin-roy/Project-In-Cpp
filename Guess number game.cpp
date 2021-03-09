#include <iostream>
#include <fstream>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Guest,Host;
    srand(time(0));
    Host = (rand()%10) + 1;
    cout<<"Enter any number (Given by Guest): ";
    cin>>Guest;
    (Guest==Host) ? cout<<"Congo!" : cout<<"Failed!";
//    if(Random==Guest)
//        cout<<"Congo!";
//    else
//        cout<<"Failed!";
        cout<<"\nGiven Number by Host is: "<<Host<<endl;
    system("pause>0");
return 0;
}
