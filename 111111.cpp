#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

class flight{
    public:
     string name;
     string name_fb;
     string pass;
     string name_r;
     string pass_r;
     string cf;
     string ct;
     string tof;
     string typ1="Economy";
     string typ2="Premuim";  
     int nop;

     public:
void Main_screen(){
  system("cls");
    int ms;
    cout <<"\t\t\n\n\t\tWelcome to the Mediocre Airlines" <<endl << endl;

    cout <<"\t\t                             .-'-."<<endl;
    cout <<"\t\t                            ' ___ '"<<endl;
    cout <<"\t\t                  ---------'  .-.  '---------"<<endl;
    cout <<"\t\t   ________________________'  '-'  '_________________________"<<endl;
    cout <<"\t\t     ''''''-|---|--/    \--[^',_m_,'^][--/    \--|---|-''''''"<<endl;
    cout <<"\t\t                         ||/   H   \||  "<<endl;
    cout <<"\t\t                  '--'   OO   O|O  OO   '--'  "<<endl;     
    cout <<"\t\t\t   __________________________________________\n\n" << endl;
    cout<<"\t\t\t----------------------------------------------------\n\n";
    cout<<"\t\t\t                    Main Menu                       \n\n";
    cout<<"\t\t\t----------------------------------------------------\n\n";
    cout<<"\t||Enter 1 Login||\n";
    cout<<"\t||Enter 2 Register||\n";
    cout<<"\t||Enter 3 to see about us||\n";
    cout<<"Enter\n";
    cin>>ms;
    switch(ms){
    case 1:   
      login_screen();
      break;

      case 2:
     register_screen();
     break;
     
     case 3:
     	about();
     	break;

       default:
       system("cls");
       cout<<"Error"<<endl;
       Main_screen();
    }
}
void about(){
	int choice;
	system("cls");
	cout<<"Mediocre Airlines is just a concept on which all the modern airlines are based\non and with further advancements such as file handling and adding graphics we\ncan convert this into a fully functional app or website\n So sit tight and have a niceflight\n";
	cout<<"\nThe project was made by\nFaizan Ul Hadi\nKashif mehmod\nTaha Faisal\nPeerzada hassan aftab khan\n";
	cout<<"\n\nPress 1 to open Main Menu\n";
	cin>>choice;
	while(true){
	if(choice==1)
	Main_screen();
	else
	cout<<"Enter again\n";
}}

void register_screen(){
        system("cls");
        cout<<"registration"<<endl;
          cout<<"Name=";
          cin.ignore();
          getline(cin,name_r);
          cout<<"Password=";
          cin>>pass_r;
        char ml;
        up:
          cout<<"Registration sucessful"<<endl;
          cout<<"Press  P to proceed"<<endl;
          cin>>ml;
          if(ml=='p' or ml=='P'){
            login_screen();
          }
          else{
            goto up;
          }
}
void login_screen(){
      	system("cls");
        
    
          cout<<"Login"<<endl;
          cout<<"Name=";
          cin.ignore();
          getline(cin,name);
          cout<<"Password=";
          cin>>pass;
        if(name==name_r and pass==pass_r){
          char lg;
          up:
         cout<<"Login successfull"<<endl;
         cout<<"Press L to Logout or P to proceed"<<endl;
         cin>>lg;
         if(lg=='L' or lg=='l'){
           Main_screen();
         }
         else if(lg=='p' or lg=='P'){
           Flight_screen();
        
         }
          else{
            goto up;
        
          }  
    }
      else{
          Main_screen();
        }
    } 
void Flight_screen(){
  system("cls");
    int fs;
    cout<<"\t\t\t----------------------------------------------------\n\n";
    cout<<"\t\t\t                    Main Menu                       \n\n";
    cout<<"\t\t\t----------------------------------------------------\n\n";
    cout<<"\t||Enter 1 to Book a flight||\n";
    cout<<"\t||Enter 2 to check details about your flight||\n";
    cout<<"\t||Enter 3 to Logout||\n";
    cout<<"Enter\n";
    cin>>fs;
    switch(fs){
    case 1:   
      choice_flight();
      break;

      case 2:
     flight_details();
     break;

     case 3:
      Main_screen();
      break;
      
       default:
       system("cls");
       cout<<"Error"<<endl;
       Flight_screen();
    }
}
void choice_flight(){
    system("cls");
    cout<<"select one:";
    cout<<"\n1.Domestic Flight";
    cout<<"\n2.International Flight\n";
    int a;
    cin>>a;
    switch (a){
    case 1:
      flight_book_domestic();
      break;

      case 2:
    flight_book_international();
    break;

    default:
      choice_flight();
    }
}
void flight_book_domestic(){
  system("cls");
  cout<<"First Enter your name=";
  cin.ignore();
  getline(cin,name_fb);
  system("cls");
  char fsc;
  char f;
  l:
  cout<<name_fb<<" give us some detail about your flight."<<endl;
  cout<<"\nFrom:"<<endl;
  string l="Lahore";
  string k="Karachi";
  string i="Islamabad";
  string m="Multan";
  cout<<"l=Lahore\nk=Karachi\ni=Islamabad\nm=Multan\n";
  cin>>fsc;
  if(fsc=='l'){
     cf=l;
  }
  else if(fsc=='k'){
     cf=k;
  }
  else if(fsc=='i'){
     cf=i;
  }
  else if(fsc=='m'){
     cf=m;
  }
  else{
     goto l;
  }
  o:
  cout<<"\nTo:\n";
  cout<<"l=Lahore\nk=Karachi\ni=Islamabad\nm=Multan\n";
  cin>>fsc;
  if(fsc=='l'){
     ct=l;
  }
  else if(fsc=='k'){
     ct=k;
  }
  else if(fsc=='i'){
     ct=i;
  }
  else if(fsc=='m'){
     ct=m;
  }
  else{
     goto o;
  }
  int g;
  y:
  
  cout<<"\nType:\n";
  cout<<"1.Economy\n2.Premuim\n";
  cin>>g;
  if(g==1){
     tof=typ1;
  }
  else if(g==2){
    tof=typ2;
  }
  else{
    goto y;
  }
  int n;
  cout<<"\nPassengers:\n";
  cout<<"No of passengers=";
  cin>>n;
  nop=n;
  char tt;
  cout<<"\nEnter any key to get your ticket....";
  tt=getch();
  if(tt='a'){
     if(ct==l){
      Lahore();
     }
     else if(ct==k){
      Karachi();
     }
     else if(ct==i){
      Islamabad();
     }
     else if(ct==m){
      Multan();
     }
  }
   
}
void flight_book_international(){
  system("cls");
  cout<<"First Enter your name=";
  cin.ignore();
  getline(cin,name_fb);
  system("cls");
  char fsc;
  char f;
  l:
  cout<<name_fb<<" give us detail about your flight."<<endl;
  cout<<"\nFrom:"<<endl;
  string l="Lahore";
  string k="Karachi";
  string i="Islamabad";
  string m="Multan";
  string c="Canda";
  string d="Dubai";
  string u="USA";
  string a="Australia";
  cout<<"l=Lahore\nk=Karachi\ni=Islamabad\nm=Multan\n";
  cin>>fsc;
  if(fsc=='l'){
     cf=l;
  }
  else if(fsc=='k'){
     cf=k;
  }
  else if(fsc=='i'){
     cf=i;
  }
  else if(fsc=='m'){
     cf=m;
  }
  else{
     goto l;
  }
  o:
  cout<<"\nTo:\n";
  cout<<"c=Canada\nd=Dubai\nu=USA\na=Australia\n";
  cin>>fsc;
 if(fsc=='c'){
     ct=c;
  }
  else if(fsc=='d'){
     ct=d;
  }
  else if(fsc=='u'){
     ct=u;
  }
  else if(fsc=='a'){
     ct=a;
  }
  else{
     goto o;
  }
  int g;
  y:
  
  cout<<"\nType:\n";
  cout<<"1.Economy\n2.Premuim\n";
  cin>>g;
  if(g==1){
     tof=typ1;
  }
  else if(g==2){
    tof=typ2;
  }
  else{
    goto y;
  }
  int n;
  cout<<"\nPassengers:\n";
  cout<<"No of passengers=";
  cin>>n;
  nop=n;
  char tt;
  cout<<"\nEnter any key to get your ticket....";
  tt=getch();
  if(tt='a'){
     if(ct==d){
      Dubai();
     }
     else if(ct==a){
      Australia();
     }
     else if(ct==u){
      USA();
     }
     else if(ct==c){
      Canada();
     }
  }
  
}
void flight_details(){
    system("cls");
    char f;
    string l="Lahore";
  string k="Karachi";
  string i="Islamabad";
  string m="Multan";

  string c="Canada";
  string d="Dubai";
  string u="USA";
  string a="Australia";

    cout<<name_fb<<" here is your details of your flight.\n";
    cout<<"From: "<<cf;
    cout<<"\nTo: "<<ct;
    cout<<"\nType: "<<tof;
    cout<<"\nPassengers: "<<nop;
    char tt;
  cout<<"\nEnter any key to check your ticket....";
  tt=getch();
  if(tt='a'){
     if(ct==l){
      Lahore();
     }
     else if(ct==k){
      Karachi();
     }
     else if(ct==i){
      Islamabad();
     }
     else if(ct==m){
      Multan();
     }
     else if(ct==d){
      Dubai();
     }
     else if(ct==a){
      Australia();
     }
     else if(ct==u){
      USA();
     }
     else if(ct==c){
      Canada();
     }
  }
}
void Lahore(){
  system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:15 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 10:45 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 2:00 pm";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 12:45 pm";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:00 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}
void Karachi(){
   system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 6:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 10:45 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 11:00 pm";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 7:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 12:50 pm";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:20 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}
void Islamabad(){
 system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 6:55 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:45 pm";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:30 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 11:45 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 3:00 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}
void Multan(){
 system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 11:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 1:45 pm";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:20 pm";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 4:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 3:45 pm";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 11:00 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}
void Canada(){
  system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:15 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 9:45 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 12:00 pm";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 12:50 pm";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:45 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}
void USA(){
   system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 12:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:45 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 11:00 pm";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 7:00 pm";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 12:50 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 7:20 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}
void Dubai(){
 system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:00 pm";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 3:55 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 8:45 am";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:30 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 11:45 pm";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 2:00 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}
void Australia(){
 system("cls");
  if(tof==typ1){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 11:35 pm";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 4:45 pm";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:20 am";
      cout<<"\nThank you";
    }
  }
  else if(tof==typ2){
    if(nop==1){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 5:00 am";
      cout<<"\nThank you";
    }
    else if(nop==2 or nop==3){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 1:45 am";
      cout<<"\nThank you";
    }
    else if(nop>=4){
      cout<<"Your flight has been booked";
      cout<<"\nThe plane type "<<tof<<" from "<<cf<<" to "<<ct<<" will depart at 9:00 pm";
      cout<<"\nThank you";
    }
  }
  char f;
  char a;
    cout<<"\nPress any character to go back\n";
    a=getch();
    if(f='a'){
      Flight_screen();
    }

}


};

int main(){
    flight f;
    f.Main_screen();
    return 0;
}
