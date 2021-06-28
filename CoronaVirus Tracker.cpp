#include <iostream>
using namespace std;
struct CoronaVirus
{
  string Country_Name[3];
  double Total_Population[3];
  double Infected_Patients[3];
  double Recovered_Patients[3];
};
struct CoronaVirus Record()
{
    struct CoronaVirus Cv1;
    for(int i=0;i<3;i++)
    {
    cout<<"\nEnter Your Country Name: ";
    cin>>Cv1.Country_Name[i];
    cout<<"Enter Total Population: ";
    cin>>Cv1.Total_Population[i];
    cout<<"Enter Infected Patients: ";
    cin>>Cv1.Infected_Patients[i];
    cout<<"Enter Recovered Patients: ";
    cin>>Cv1.Recovered_Patients[i];
    }
    return Cv1;
}
void Display(struct CoronaVirus Cv2)
{
    for(int i=0;i<3;i++)
    {
    cout<<"\nCountry Name: "<<
    Cv2.Country_Name[i]<<endl;
    cout<<"Total Population: "<<
    Cv2.Total_Population[i]<<endl;
    cout<<"Infected Patients: "<<
    Cv2.Infected_Patients[i]<<endl;
    cout<<"Recovered Patients: "<<
    Cv2.Recovered_Patients[i]<<endl;
    }
}
void CheckStatus(struct CoronaVirus Cv3)
{
    double Max = Cv3.Infected_Patients[0];
    for(int i=1;i<3;i++)
    {
      if(Cv3.Infected_Patients[i]>Max){
        Max = Cv3.Infected_Patients[i];
      }
    }
     for(int i=0;i<3;i++)
     {
        if(Max == Cv3.Infected_Patients[i]){
        cout<<"\nCountry Name: "<<
        Cv3.Country_Name[i]<<endl;
        cout<<"Infected Patients: "<<
        Max<<endl;
        }
     }
}
struct CoronaVirus UpdateNewRecordIF(struct CoronaVirus Cv4)
{
    string name;
    cout<<"\nEnter Country Name You Want Update: ";
    cin>>name;
    for(int i=0;i<3;i++)
    {
      if(Cv4.Country_Name[i]==name)
      {
         double n;
         cout<<"Update New Infected Record: ";
         cin>>n;
         Cv4.Infected_Patients[i] = n;
         cout<<"\n\t\tRecord Updated...\t\n"<<endl;
         cout<<"Press ENTER";
         system("Pause>0");
      }
    }
    return Cv4;
}
struct CoronaVirus UpdatedRecord(struct CoronaVirus Cv5)
{
    for(int i=0;i<3;i++)
    {
      cout<<"\nCountry Name: "<<
      Cv5.Country_Name[i]<<endl;
      cout<<"Updated Infected Patients: "<<
      Cv5.Infected_Patients[i] - Cv5.Recovered_Patients[i]<<endl;
    }
    return Cv5;
}
struct CoronaVirus UpdateNewRecordRE(struct CoronaVirus Cv6)
{
    string name;
    cout<<"\nEnter Country Name You Want Update: ";
    cin>>name;
    for(int i=0;i<3;i++)
    {
      if(Cv6.Country_Name[i]==name)
      {
         double n;
         cout<<"Update New Recovered Record: ";
         cin>>n;
         Cv6.Recovered_Patients[i] = n;
         cout<<"\n\t\tRecord Updated...\t\n"<<endl;
         cout<<"Press ENTER";
         system("Pause>0");
      }
    }
    return Cv6;
}
int main()
{
    struct CoronaVirus Cv;

    int ch;
    do
    {
cout<<"\n\t\t*****CoronaVirus Tracker*****\t\n\n";
    cout<<"1. Enter CoronaVirus Records"<<endl;
    cout<<"2. Display All Records"<<endl;
    cout<<"3. Check Highest Infected Patients Cases Entered"<<endl;
    cout<<"4. Update Record of Infected Cases"<<endl;
    cout<<"5. Update Record of Recovered Cases"<<endl;
    cout<<"6. See Updated Record"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>ch;
    system("cls");
    switch (ch)
    {
    case 1:Cv = Record();
        break;
    case 2:Display(Cv);
        break;
    case 3:CheckStatus(Cv);
        break;
    case 4:Cv = UpdateNewRecordIF(Cv);
        break;
    case 6:Cv = UpdatedRecord(Cv);
        break;
    case 5:Cv = UpdateNewRecordRE(Cv);
        break;
    }
    } while(ch!=7);
return 0;
}
