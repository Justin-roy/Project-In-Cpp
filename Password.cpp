#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Password=1234,pin,counter=0;
    do
    {
      cout<<"Enter Your Pin: ";
      cin>>pin;
      counter++;
    } while (counter<3 && pin!=Password);

    if(counter<=3)
        cout<<"Loading...";
    else
        cout<<"Blocked...";
return 0;
}
