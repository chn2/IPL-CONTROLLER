#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;
	void cgpa(int regd)
{

	const int n=100;
	char line[n];


	if(regd==1160)
	{
	
		ifstream inf("lp1.doc");
		while(inf)
		{
			inf.getline(line,n);
			cout<<line;
		}
		inf.close();
	}
	else	if(regd==1161)
	{
		ifstream in("lp2.doc");
		while(in)
		{
			in.getline(line,n);
			cout<<line;
		}
		in.close();
	}

	else	if(regd==1162)
	{
		ifstream inf("lp3.doc");
		while(inf)
		{
			inf.getline(line,n);
			cout<<line;
		}
		inf.close();
	}
	else	if(regd==1163)
	{
		ifstream inf("lp4.doc");
		while(inf)
		{
			inf.getline(line,n);
			cout<<line;
		}
		inf.close();
	}
	
	
	else
	{
	cout<<"invalid regd";	
	}
}
    	void attendence()
{
	int z;
	cout<<"Number of classes for week are 37"<<"\n";
	cout<<"Enter the number of classes you attended in a week:"<<"\n";
	cin>>z;
	if(z>25)
	{
		cout<<"ATTENDENCE is:90%"<<"\n";
	}
	else if(z>20 && z<25)
	{
		cout<<"ATTENDENCE is:95%"<<"\n";
	}
	else if(z>15 && z<20)
	{
		cout<<"ATTENDENCE is:80%"<<"\n";
	}
	else if(z>10 && z<15)
    {
    	cout<<"ATTENDENCE  is:75%"<<"\n";
	}
	else if(z>5 && z<10)
	{
		cout<<"ATTENDENCE is:65%"<<"\n";
	}
	else if(z>0 && z<5)
	{
		cout<<"ATTENDENCE is:50%"<<"\n";
	}
}
	void timetable()
{
	int choice;
	cout<<"Enter 1 for Monday time table:"<<"\n";
	cout<<"Enter 2 for Tuesday time table:"<<"\n";
	cout<<"Enter 3 for Wednesday time table:"<<"\n";
	cout<<"Enter 4 for Thursday time table:"<<"\n";
	cout<<"Enter 5 for Friday time table:"<<"\n";
	cout<<"\t\t\t\t\t"<<"Saturday and Sunday is Holiday!!!!!!!";
	cin>>choice;
	if(choice==1)
	{
		cout<<"9-10am  PHY109 room:34-109"<<"\n";
		cout<<"10-11am ECE213 room:34-413"<<"\n";
		cout<<"11-12am MTH166 room:34-102"<<"\n";
		cout<<"12-01pm PEL131 room:34-102"<<"\n";
		cout<<"01-02pm ECE213 room:34-102"<<"\n";
	}
	if(choice==2)
	{
		cout<<"9-10am  CSE202 room:38-805"<<"\n";
		cout<<"10-11am CSE326 room:38-805"<<"\n";
		cout<<"11-12am CSE326 room:38-805"<<"\n";
		cout<<"12-01pm ECE213 room:34-213"<<"\n";
		cout<<"01-02pm MNT002 room:34-101A"<<"\n";
		cout<<"03-04pm PHY109 room:34-102"<<"\n";
		cout<<"04-05pm MTH166 room:34-102"<<"\n";
	}
	if(choice==3)
	{
		cout<<"9-10am  CSE202 room:38-805"<<"\n";
		cout<<"10-11am CSE202 room:38-805"<<"\n";
		cout<<"11-12am PHY109 room:38-805"<<"\n";
		cout<<"12-01pm PHY119 room:27-102"<<"\n";
		cout<<"01-02pm PHY119 room:27-102"<<"\n";
		cout<<"03-04pm MEC103 room:34-101A"<<"\n";
		cout<<"04-05pm MEC103 room:34-101A"<<"\n";	
	}
	if(choice==4)
	{
		cout<<"10-11am CSE202 room:38-807"<<"\n";
		cout<<"11-12am CSE202 room:38-807"<<"\n";
		cout<<"12-01pm PEL131 room:34-102"<<"\n";
		cout<<"01-02pm PHY119 room:27-102"<<"\n";
		cout<<"03-04pm MEC103 room:34-101A"<<"\n";
		cout<<"04-05pm MEC103 room:34-101A"<<"\n";	
	}
	if(choice==5)
	{
		cout<<"9-10am  ECE216 room:33-104"<<"\n";
		cout<<"10-11am ECE216 room:33-104"<<"\n";
		cout<<"11-12am MTH166 room:34-102"<<"\n";
		cout<<"01-02pm PHY109 room:34-101A"<<"\n";
		cout<<"02-03pm MEC103 room:34-407"<<"\n";
		cout<<"03-04pm MEC103 room:34-407"<<"\n";
		cout<<"04-05pm PEL131 room:34-105"<<"\n";	
	}
}
void feestatus()
{
cout<<"Generally fee for all the students studying in cse is 34500 per semester,54500 for hostel,26000mess,3000 laundry"; 	
}
		 int seatingplan(int regd)
{
	

 void line();
void star();



	if(regd==1160)
	{
cout<<"\n\n\n";
cout<<setw(49)<<"SEATING PLAN\n";
line();
cout<<setw(15)<<"Students's Name"<<setw(15)<<"Room no"<<setw(15)<<"Exam name"
     <<setw(15)<<"Timings"<<setw(20)<<"Reporting time"<<endl;
line();

{
cout<<setw(12)<<"Arjun tendulkar"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(16)<<"9:30"<<endl;
}

{
cout<<setw(12)<<"Arjun tendulkar"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Arjun tendulkar"<<setw(17)<<"33-505"<<setw(17)<<"mec-103"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Arjun tendulkar"<<setw(17)<<"36-205"<<setw(17)<<"mth-166"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Arjun tendulkar"<<setw(17)<<"55-105"<<setw(17)<<"pel_131"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Arjun tendulkar"<<setw(17)<<"14-305"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}

line();

cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
}
else if(regd==1161)
{
	cout<<"\n\n\n";
cout<<setw(49)<<"SEATING PLAN\n";
line();
cout<<setw(15)<<"Students's Name"<<setw(15)<<"Room no"<<setw(15)<<"Exam name"
     <<setw(15)<<"Timings"<<setw(20)<<"Reporting time"<<endl;
line();

{
cout<<setw(12)<<"THARUN KUMAR"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(16)<<"9:30"<<endl;
}

{
cout<<setw(12)<<"THARUN KUMAR"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"THARUN KUMAR"<<setw(17)<<"33-505"<<setw(17)<<"mec-103"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"THARUN KUMAR"<<setw(17)<<"36-205"<<setw(17)<<"mth-166"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"THARUN KUMAR"<<setw(17)<<"55-105"<<setw(17)<<"pel_131"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"THARUN KUMAR"<<setw(17)<<"14-305"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}

line();

cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
}
else if(regd==1162)
{
	cout<<"\n\n\n";
cout<<setw(49)<<"SEATING PLAN\n";
line();
cout<<setw(15)<<"Students's Name"<<setw(15)<<"Room no"<<setw(15)<<"Exam name"
     <<setw(15)<<"Timings"<<setw(20)<<"Reporting time"<<endl;
line();

{
cout<<setw(12)<<"SATYA"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(16)<<"9:30"<<endl;
}

{
cout<<setw(12)<<"SATYA"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"SATYA"<<setw(17)<<"33-505"<<setw(17)<<"mec-103"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"SATYA"<<setw(17)<<"36-205"<<setw(17)<<"mth-166"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"SATYA"<<setw(17)<<"55-105"<<setw(17)<<"pel_131"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"SATYA"<<setw(17)<<"14-305"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}

line();

cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
}
else if(regd==1163)
{
	cout<<"\n\n\n";
cout<<setw(49)<<"SEATING PLAN\n";
line();
cout<<setw(15)<<"Students's Name"<<setw(15)<<"Room no"<<setw(15)<<"Exam name"
     <<setw(15)<<"Timings"<<setw(20)<<"Reporting time"<<endl;
line();

{
cout<<setw(12)<<"DEEPAK"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(16)<<"9:30"<<endl;
}

{
cout<<setw(12)<<"DEEPAK"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"DEEPAK"<<setw(17)<<"33-505"<<setw(17)<<"mec-103"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"DEEPAK"<<setw(17)<<"36-205"<<setw(17)<<"mth-166"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"DEEPAK"<<setw(17)<<"55-105"<<setw(17)<<"pel_131"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"DEEPAK"<<setw(17)<<"14-305"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}

line();

cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
}

else 
return 0;
}
void line()
    {
            for(int i=1;i<45;i++)
          cout<<"--";

     cout<<"\n";
   }



void star()
    {
            for(int i=1;i<45;i++)
          cout<<"**";

     cout<<"\n";
   }
	

void unihospital()
		{
			int w;
		
	cout<<"enter 1 to call ambulance \n";
	cout<<"enter 2 to book appointment of doctor\n";
	cout<<"enter 3 to know about unihospital\n";	
	cin>>w;
	if(w=1)
	{
		cout<<"\t\t\t\t\tcontact ambulance with:080-3330-99999\n";
		
			}
	else if(w=2)
	{
		cout<<"\t\t\t\t\tyour appointment is booked we will message you th time slot\n ";
		
	}
	else if(w=3)
	{
		cout<<"uni hospital is the only hospital located in  lpu it is located in 13th block ....and consultancy of doctors is freee";
		
	
	}
		}
			 int complaintRMS()
{
	char str[100];
	
	int n;
	cout<<"enter log request\n";
	cout<<"enter 1 to complaint on hostel\n";
	cout<<"enter 2 to complaint on studies\n";
	cout<<"enter 3 to complaint on mess\n";
	cout<<"enter 4 to complaint on teacher\n";
	cout<<"enter 5 to exit\n";
	cin>>n;
	if(n=1)
	{
		cout<<"enter your complaint\n";
		cin>>str;
			}
	else if(n=2)
	{
		cout<<"enter your complaint";
		cin>>str;
	}
	else if(n=3)
	{
		cout<<"enter your complaint";
		cin>>str;
	
	}
	
	else 
	{
		return 0;
	}
		}
	int profile(int regd)
		{
				if( regd==1161)
				{
					cout<<"\t\t\t\tstudent name :Arjun tendulkar\n"<<"\t\t\t\tFathers name:Sachin tendulkar\n"<<"\t\t\t\tBOD:4/4/1999\n"<<"\t\t\t\tresidential address :shivajinagar;mumbai\n"<<"\t\t\t\tGender:male";		
				}
		
		else if(regd==1162)
		{
					cout<<"\t\t\t\t\tstudent name :THARUN KUMAR\n"<<"\t\t\t\t\tFathers name:RAVINDER\n"<<"\t\t\t\t\tBOD:4/4/1999\n"<<"\t\t\t\t\tresidential address :jesusnagar;anantapur\n"<<"\t\t\t\t\tGender:male";
							
				}
				else if(regd==1163)
		{
					cout<<"\t\t\t\t\tstudent name :SATYA\n"<<"\t\t\t\t\tFathers name:UPPALAPATI\n"<<"\t\t\t\t\tBOD:6/2/1998\n"<<"\t\t\t\t\tresidential address :jesusnagar;dharamavaram\n"<<"\t\t\t\t\tGender:male";
							
				}
				else if( regd==1164)
		{
					cout<<"\t\t\t\t\tstudent name :DEEPAK\n"<<"\t\t\t\t\tFathers name:CHILL\n"<<"\t\t\t\t\tBOD:6/2/1994\n"<<"\t\t\t\t\tresidential address :edenstreet;Kolkatta\n"<<"\t\t\t\tGender:male";
							
				}
		
		else
		return 0;
}

int main()
{
    string pass ="";
    int regd;
    char ch;
 
	
	cout<<"\t\t\t\t\t\t\t";
	cout<< "LPU TOUCH"<<"\n";
	cout<<"\t\t\t\t\t";

    cout << "Enter the Registration Id:";
    cin>>regd;
    cout<<"\n\t\t\t\t\t";
    cout<<"Enter the Password:";
    ch = _getch();
    while(ch != 13)
	{
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
    }
    if(pass == "harsha")
	{
     goto mainhome;
    }
	else
	{
      getch();
      
    }
	mainhome:
		cout<<"\n";
		cout<<"\t\t\t\t\t\t\tWelcome to My world!!!!"<<"\n";
		cout<<"Enter 1 to know your CGPA:"<<"\n";
		cout<<"Enter 2 to know your ATTENDENCE:"<<"\n";
		cout<<"Enter 3 to know the time table:"<<"\n";
		cout<<"Enter 4 to know your feestatus:"<<"\n";
		cout<<"Enter 5 to know Exam seatingplan:"<<"\n";
		cout<<"Enter 6 to file a complaint(rms):"<<"\n";
		cout<<"Enter 7 to know about unihospital:"<<"\n";
		cout<<"Enter 8 to see your profile:"<<"\n";
		cout<<"Enter 9 to exit:"<<"\n";
		int choice;
		cout<<"Enter your choice:"<<"\n";
		cin>>choice;
		if(choice==1)
		{
		 cgpa(regd);
			getch();
			goto mainhome;
		}
		else if(choice==2)
		{
			attendence();			
		
	      getch();

			

			goto mainhome;
		}
		else if(choice==3)
		{
		timetable();
			
			getch();
			goto mainhome;
		}
		else if(choice==4)
		{
			feestatus();
		
		 getch();
		 goto mainhome;
		}
	    else if(choice==5)
		{
			seatingplan(regd);
		 getch();
		 goto mainhome;
		}
		else if(choice==6)
		{
			complaintRMS();	
		 getch();
		 goto mainhome;
		}
		else if(choice==7)
		{
	unihospital();
		
		 getch();
		 goto mainhome;
		}
		
			else if(choice==8)
		{
			 profile(regd);
		 
	
		 getch();
		 goto mainhome;
		}
		
			else if(choice==9)
		{
		 return 0;
	}
		getch();
}
