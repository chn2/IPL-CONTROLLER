#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;
void equip();
void exercise();
void addmem();
void addtrainer();
void delmem();
void deltrainer();
void menu();
void info();
void memberprice();
void charges();
void display_member();
void display_trainer();
void userInfo (int monthsPaid, int sessionAmt, int age);
double memberCost (int monthsPaid, int sessionAmt, int age);
int main ()

{
int response, monthsPaid, sessionAmt, age; 

do
{
menu ();
cin >> response;
cout << endl;


switch (response)
{
case 1:
	cout<<"FOLLOWING SHOWS THE EQUIPMENT IN OUR HEALTH CLUB"<<endl<<endl;
	equip();
	cout<<"FOLLOWING SHOWS THE EXERCISE IN OUR HEALTH CLUB"<<endl<<endl;
	exercise();
	break;

case 2:

cout << "FOLLOWING ARE ID'S OF MEMBERS AND TRAINERS  ." << endl; 
//userInfo(monthsPaid, sessionAmt, age);
display_member();
display_trainer();
break;
case 3:	char a;
	cout<<"To add member input 'a' to delete trainer press 'd'";
	cin>>a;
	if(a=='a')addmem();
	else delmem();
break; 
case 4:
	char ac;
	cout<<"To add trainer input 'a' to delete trainer press 'd'";
	cin>>a;
	if(a=='a')addtrainer();
	else deltrainer();
break;
case 5:
cout << "Here is some basic health club information, as well as prices and discounts" << endl << endl;
info ();
charges ();

char ab;
cout<<"Do you want to calculate membercost?(y/n)";
cin>>ab;
if(ab=='y')memberprice();


break;
default:
cout << "Invalid input" << endl;
break;
return 0;
}
}
while (response != 4);
return 0;
}
void menu ()
{

cout << "This program is menu-driven, either by pressing"
<< " 1, 2, 3 , 4 or 5. " << endl << endl;
cout << "1: You will  able to view different types of equipment and exercise." <<endl;
cout << "2: It will display the members  and trainers of of  health club." << endl; 
cout << "3: You will be able to add or delete a member from health club. " << endl;
cout << "4: You will be able to add or delete a trainer from health club. "<< endl;
cout << "5: It display the fee and training schedule." << endl;

}
void info ()
{
cout<< "The gym is open 7 days a week from 8am - 8pm" << endl << endl;
}

void equip()
{
	cout<<"1.Horizontal Seated Leg Press"<<endl;
	cout<<"2.Lat Pull-Down"<<endl;
	cout<<"3.Cable Biceps Bar"<<endl;
	cout<<"4.Cable Triceps Bar"<<endl;
	cout<<"5.Chest Press"<<endl;
	cout<<"6.Hanging Leg Raise"<<endl;
	cout<<"7.Cardio Rowing Machine"<<endl;
}
void exercise()
{
	cout<<"1.Pull ups"<<endl;
	cout<<"2.Inverted rows"<<endl;
	cout<<"3.Cable flys"<<endl;
	cout<<"4.Cycling"<<endl;
	cout<<"5.Ab wheel rollout"<<endl;
}
void charges ()
{
cout << "Prices \n" << endl << "1 month of membership = $10 \n" << "1 session = $10 " << endl << endl;
cout << "Discounts \n" << endl << "Purchase of 12 or more months = 15% per month \nPurchase of more than 5 sessions = 20% per session \n"
<< "Senior citizen discount (60 and older) = 30% off membership cost" << endl << endl;
}

void userInfo (int monthsPaid, int sessionAmt, int age)
{
cout << "Please enter the following information with spaces in between." << endl << "Months of membership, Sessions, and Age." << endl << endl; 
cin >> monthsPaid >> sessionAmt >> age;

return;
} 


void memberprice ()
{
int monthsPaid, sessionAmt , age;
cout << "Please enter the following information with spaces in between." << endl << "Months of membership, Sessions, and Age." << endl << endl; 
cin >> monthsPaid >> sessionAmt >> age;
int result;
result=memberCost ( monthsPaid,  sessionAmt, age);
cout <<"The cost is:"<<result<< endl;
return;
} 


double memberCost (int monthsPaid, int sessionAmt, int age)
{
double month, session, rate, memberCost, monthCost, sessCost;

if (monthsPaid >= 12)
month = 8.50;
else
month = 10.00; 

monthCost = monthsPaid * month;

if (sessionAmt > 5)
session = 8.00;
else
session = 10.00;

sessCost = sessionAmt * session;

if (age >= 60)
rate =0.7;
else
rate = 1.0;

memberCost = rate * (sessCost + monthCost);


return memberCost; 
}


void addmem(){			//add member
string id;
char choice;
fstream fl;

fl.open("filemem.txt",ios::in|ios::app);

cout<<"\nEnter the id:";
cin>>id;

fl<<id<<endl;

cout<<"Do you want to add more?(y/n)";

cin>>choice;
if(choice=='y'){
	addmem();
	}
else {

return;
}
}			//end

void delmem(){		//delete member
string line;

cout<<"What is the id you want to delete";
string id;
cin>>id;
fstream temp;
fstream fl;
fl.open("filemem.txt");
temp.open("temp.txt",ios::app);
while(getline(fl,line)){

	if(line!=id)
		temp<<line<<endl;

}
fl.close();
temp.close();
remove("filemem.txt");
rename("temp.txt","filemem.txt");
return;
}		//end

void addtrainer(){		// add trainer
string id;
char choice;
fstream fl;

fl.open("filetrainer.txt",ios::in|ios::app);

cout<<"\nEnter the id you want to add:";
cin>>id; 

fl<<id<<endl;
fl.close();
cout<<"Do you want to add more?(y/n)";

cin>>choice;
if(choice=='y'){
	addtrainer();
	}
else {

return;
}
}		// end

void deltrainer(){	//delete trainer
string line;

cout<<"What is the id you want to delete";
string id;
cin>>id;
fstream temp;
fstream fl;
fl.open("filetrainer.txt");
temp.open("temp.txt",ios::app);
while(getline(fl,line)){

	if(line!=id)
		temp<<line<<endl;

}
fl.close();
temp.close();
remove("filetrainer.txt");
rename("temp.txt","filetrainer.txt");
cout<<"deleted successfully";
return;
}	//end
void display_member()
{
    string getcontent;
    ifstream openfile ("filemem.txt");
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            getline(openfile, getcontent);
            cout << getcontent << endl;
        }
    }
}
void display_trainer()
{
    string getcontent;
    ifstream openfile ("filetrainer.txt");
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            getline(openfile, getcontent);
            cout << getcontent<< endl;
        }
    }
}
