#include<iostream>
using namespace std;
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;
	void cgpa()
{
	const int n=100;
	char line[n];
	int regd;

	if(regd=1161)
	{
		ifstream inf("lp2.doc");
		while(inf)
		{
			inf.getline(line,n);
			cout<<line;
		}
		inf.close();
	}
	else	if(regd=1162)
	{
		ifstream inf("lp1.doc");
		while(inf)
		{
			inf.getline(line,n);
			cout<<line;
		}
		inf.close();
	}

	else	if(regd=1163)
	{
		ifstream inf("lp3.doc");
		while(inf)
		{
			inf.getline(line,n);
			cout<<line;
		}
		inf.close();
	}
	else	if(regd=1164)
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
	cout<<"Number of classes for week are 30"<<"\n";
	cout<<"Enter the number of classes you attended in a week:"<<"\n";
	cin>>z;
	if(z>25)
	{
		cout<<"\t\t\t\t\tATTENDENCE is:95%"<<"\n";
	}
	else if(z>20 && z<25)
	{
		cout<<"\t\t\t\t\tATTENDENCE is:90%"<<"\n";
	}
	else if(z>15 && z<20)
	{
		cout<<"\t\t\t\t\tATTENDENCE is:85%"<<"\n";
	}
	else if(z>10 && z<15)
    {
    	cout<<"\t\t\t\t\tATTENDENCE  is:80%"<<"\n";
	}
	else if(z>5 && z<10)
	{
		cout<<"\t\t\t\t\tATTENDENCE is:75%"<<"\n";
	}
	else if(z>0 && z<5)
	{
		cout<<"\t\t\t\t\tATTENDENCE is:70%"<<"\n";
	}
}
	void timetable()
{
	int choice;
	cout<<"\t\t\t\t\tEnter 1 for Monday time table:"<<"\n";
	cout<<"\t\t\t\t\tEnter 2 for Tuesday time table:"<<"\n";
	cout<<"\t\t\t\t\tEnter 3 for Wednesday time table:"<<"\n";
	cout<<"\t\t\t\t\tEnter 4 for Thursday time table:"<<"\n";
	cout<<"\t\t\t\t\tEnter 5 for Friday time table:"<<"\n";
	cout<<"\t\t\t\t\t"<<"Saturday and Sunday is Holiday!!!!!!!";
	cin>>choice;
	if(choice==1)
	{
		cout<<"\t\t\t\t\t9-10am  PHY109 room:34-109"<<"\n";
		cout<<"\t\t\t\t\t10-11am ECE213 room:34-413"<<"\n";
		cout<<"\t\t\t\t\t11-12am MTH166 room:34-102"<<"\n";
		cout<<"\t\t\t\t\t12-01pm PEL131 room:34-102"<<"\n";
		cout<<"\t\t\t\t\t01-02pm ECE213 room:34-102"<<"\n";
	}
	if(choice==2)
	{
		cout<<"\t\t\t\t\t9-10am  CSE202 room:38-805"<<"\n";
		cout<<"\t\t\t\t\t10-11am CSE326 room:38-805"<<"\n";
		cout<<"\t\t\t\t\t11-12am CSE326 room:38-805"<<"\n";
		cout<<"\t\t\t\t\t12-01pm ECE213 room:34-213"<<"\n";
		cout<<"\t\t\t\t\t01-02pm MNT002 room:34-101A"<<"\n";
		cout<<"\t\t\t\t\t03-04pm PHY109 room:34-102"<<"\n";
		cout<<"\t\t\t\t\t04-05pm MTH166 room:34-102"<<"\n";
	}
	if(choice==3)
	{
		cout<<"\t\t\t\t\t9-10am  CSE202 room:38-805"<<"\n";
		cout<<"\t\t\t\t\t10-11am CSE202 room:38-805"<<"\n";
		cout<<"\t\t\t\t\t11-12am PHY109 room:38-805"<<"\n";
		cout<<"\t\t\t\t\t12-01pm PHY119 room:27-102"<<"\n";
		cout<<"\t\t\t\t\t01-02pm PHY119 room:27-102"<<"\n";
		cout<<"\t\t\t\t\t03-04pm MEC103 room:34-101A"<<"\n";
		cout<<"\t\t\t\t\t04-05pm MEC103 room:34-101A"<<"\n";	
	}
	if(choice==4)
	{
		cout<<"\t\t\t\t\t10-11am CSE202 room:38-807"<<"\n";
		cout<<"\t\t\t\t\t11-12am CSE202 room:38-807"<<"\n";
		cout<<"\t\t\t\t\t12-01pm PEL131 room:34-102"<<"\n";
		cout<<"\t\t\t\t\t01-02pm PHY119 room:27-102"<<"\n";
		cout<<"\t\t\t\t\t03-04pm MEC103 room:34-101A"<<"\n";
		cout<<"\t\t\t\t\t04-05pm MEC103 room:34-101A"<<"\n";	
	}
	if(choice==5)
	{
		cout<<"\t\t\t\t\t9-10am  ECE216 room:33-104"<<"\n";
		cout<<"\t\t\t\t\t10-11am ECE216 room:33-104"<<"\n";
		cout<<"\t\t\t\t\t11-12am MTH166 room:34-102"<<"\n";
		cout<<"\t\t\t\t\t01-02pm PHY109 room:34-101A"<<"\n";
		cout<<"\t\t\t\t\t02-03pm MEC103 room:34-407"<<"\n";
		cout<<"\t\t\t\t\t03-04pm MEC103 room:34-407"<<"\n";
		cout<<"\t\t\t\t\t04-05pm PEL131 room:34-105"<<"\n";	
	}
}
void feestatus()
{
cout<<"Generally fee for all the students studying in cse is 34500 per semester,44500 for hostel,26000mess,3000 laundry"; 	
}
		 int seatingplan()
{
	

 void line();
void star();

int regd;

	if(regd=1161)
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
else if(regd=1162)
{
	cout<<"\n\n\n";
cout<<setw(49)<<"SEATING PLAN\n";
line();
cout<<setw(15)<<"Students's Name"<<setw(15)<<"Room no"<<setw(15)<<"Exam name"
     <<setw(15)<<"Timings"<<setw(20)<<"Reporting time"<<endl;
line();

{
cout<<setw(12)<<"Harsha vardhan"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(16)<<"9:30"<<endl;
}

{
cout<<setw(12)<<"Harsha vardhan"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Harsha vardhan"<<setw(17)<<"33-505"<<setw(17)<<"mec-103"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Harsha vardhan"<<setw(17)<<"36-205"<<setw(17)<<"mth-166"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Harsha vardhan"<<setw(17)<<"55-105"<<setw(17)<<"pel_131"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Harsha vardhan"<<setw(17)<<"14-305"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}

line();

cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
}
else if(regd=1163)
{
	cout<<"\n\n\n";
cout<<setw(49)<<"SEATING PLAN\n";
line();
cout<<setw(15)<<"Students's Name"<<setw(15)<<"Room no"<<setw(15)<<"Exam name"
     <<setw(15)<<"Timings"<<setw(20)<<"Reporting time"<<endl;
line();

{
cout<<setw(12)<<"Aravinda reddy"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(16)<<"9:30"<<endl;
}

{
cout<<setw(12)<<"Aravinda reddy"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Aravinda reddy"<<setw(17)<<"33-505"<<setw(17)<<"mec-103"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Aravinda reddy"<<setw(17)<<"36-205"<<setw(17)<<"mth-166"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Aravinda reddy"<<setw(17)<<"55-105"<<setw(17)<<"pel_131"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Aravinda reddy"<<setw(17)<<"14-305"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}

line();

cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
}
else if(regd=1164)
{
	cout<<"\n\n\n";
cout<<setw(49)<<"SEATING PLAN\n";
line();
cout<<setw(15)<<"Students's Name"<<setw(15)<<"Room no"<<setw(15)<<"Exam name"
     <<setw(15)<<"Timings"<<setw(20)<<"Reporting time"<<endl;
line();

{
cout<<setw(12)<<"Rohith chitlangia"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(16)<<"9:30"<<endl;
}

{
cout<<setw(12)<<"Rohith chitlangia"<<setw(17)<<"32-205"<<setw(17)<<"cse-202"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Rohith chitlangia"<<setw(17)<<"33-505"<<setw(17)<<"mec-103"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Rohith chitlangia"<<setw(17)<<"36-205"<<setw(17)<<"mth-166"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Rohith chitlangia"<<setw(17)<<"55-105"<<setw(17)<<"pel_131"
     <<setw(17)<<"10:00-12:00"<<setw(17)<<"9:30"<<endl;
}
{
cout<<setw(12)<<"Rohith chitlangia"<<setw(17)<<"14-305"<<setw(17)<<"cse-202"
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
		
	cout<<"\t\t\t\t\tenter 1 to call ambulance \n";
	cout<<"\t\t\t\t\tenter 2 to book appointment of doctor\n";
	cout<<"\t\t\t\t\tenter 3 to know about unihospital\n";	
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
		cout<<"Uni hospital is the only hospital located in  LPU it is located in 13th block ....and consultancy of doctors is freee";
		
	
	}
		}
			 int complaintRMS()
{
	char str[100];
	
	int n;
	cout<<"\t\t\t\t\tenter log request\n";
	cout<<"\t\t\t\t\tenter 1 to comlaint on hostel\n";
	cout<<"\t\t\t\t\tenter 2 to comlaint on studies\n";
	cout<<"\t\t\t\t\tenter 3 to comlaint on mess\n";
	cout<<"\t\t\t\t\tenter 4 to comlaint on teacher\n";
	cout<<"\t\t\t\t\tenter 5 to exit\n";
	cin>>n;
	if(n=1)
	{
		cout<<"\t\t\t\t\tenter your complaint\n";
		cin>>str;
			}
	else if(n=2)
	{
		cout<<"\t\t\t\t\tenter your complaint";
		cin>>str;
	}
	else if(n=3)
	{
		cout<<"\t\t\t\t\tenter your complaint";
		cin>>str;
	
	}
	
	else 
	{
		return 0;
	}
		}
	int profile()
		{
				if(int regd=1161)
				{
					cout<<"\t\t\t\tstudent name :Arjun tendulkar\n"<<"\t\t\t\tFathers name:Sachin tendulkar\n"<<"\t\t\t\tBOD:4/4/1999\n"<<"\t\t\t\tresidential address :shivajinagar;mumbai\n"<<"\t\t\t\tGender:male";		
				}
		
		else if(int regd=1162)
		{
					cout<<"\t\t\t\t\tstudent name :Harsha vardhan"<<"\t\t\t\t\tFathers name:venkataramudu\n"<<"\t\t\t\t\tBOD:4/4/1999\n"<<"\t\t\t\t\tresidential address :jesusnagar;anantapur\n"<<"\t\t\t\t\tGender:male";
							
				}
				else if(int regd=1163)
		{
					cout<<"\t\t\t\t\tstudent name :Aravinda reddy"<<"\t\t\t\t\tFathers name:reddy\n"<<"\t\t\t\t\tBOD:6/2/1998\n"<<"\t\t\t\t\tresidential address :jesusnagar;dharamavaram\n"<<"\t\t\t\t\tGender:male";
							
				}
				else if(int regd=1164)
		{
					cout<<"\t\t\t\t\tstudent name :Rohith chitlangia"<<"\t\t\t\t\tFathers name:chitlangia\n"<<"\t\t\t\t\tBOD:6/2/1994\n"<<"\t\t\t\t\tresidential address :edenstreet;Kolkatta\n"<<"\t\t\t\tGender:male";
							
				}
		
		else
		return 0;
}


void cgpacalculator()





class mid;
class ca;
class student 
{
	char name[20];
	int regno;

	public:
		void put()
		{
			cout<<"enter the name of student";
			cin>>name;
			cout<<"enter the regestration number of student";
			cin>>regno;
		}
		void get()
		{
			cout<<"Name of Student is:"<<name<<endl<<"Regestration number of Student is:"<<regno<<endl;
		}
};
class ca
{
	protected:
	int phy,pel,ece,mth,cse,mec;
	
	public:
		void get1()
		{
			
			cout<<"PHY";
			cin>>phy;
			cout<<"PEL";
			cin>>pel;
			cout<<"ECE";
			cin>>ece;
			cout<<"MTH";
			cin>>mth;
			cout<<"CSE";
			cin>>cse;
			cout<<"MEC";
			cin>>mec;
		}
		void show1()
		{
			cout<<phy<<'\t'<<pel<<'\t'<<ece<<'\t'<<mth<<'\t'<<cse<<'\t'<<mec<<endl;
		}
};
class ca1: virtual public ca
{
	
	public:
	void get2()
	{
		cout<<"Enter the CA1 marks for 30  :"<<endl;
		get1();
	}
	void show2()
	{
		cout<<"CA1 Marks are    :"<<'\t';
		show1();
	}	
	
};
class ca2:virtual public ca
{
	
	public:
	void get3()
	{
		cout<<"Enter the CA2 marks for 30 :"<<endl;
		get1();
	}
	void show3()
	{
		cout<<"CA2 Marks are    :"<<'\t';
		show1();
	}	
};
class ca3: virtual public ca
{
	
	public:
	void get4()
	{
		cout<<"Enter the CA3 marks for :"<<endl;
		get1();
	}
	void show4()
	{
		
		cout<<"CA3 Marks are    :"<<'\t';
		show1();
	}	
	
};
class sum:public ca1,public ca2,public ca3
{
	protected:
	int tphy,tpel,tece,tmth,tcse,tmec;
	public:
		void cal()
	{
	tphy=phy+phy+phy;
	tpel=pel+pel+pel;
	tece=ece+ece+ece;
	tmth=mth+mth+mth;
	tcse=cse+cse+cse;
	tmec=mec+mec+mec;
	}
	void sumk()
	{
	cout<<"total ca-marks marks are= "<<endl<<tphy<<endl<<tpel<<endl<<tece<<endl<<tmth<<endl<<tcse<<endl<<tmec<<endl;
	}
	friend class total;
};
class mid
{
	protected:
	int phy,pel,ece,mth,cse,mec;
	
	public:
		void get5()
		{
			cout<<"Enter midterm objective marks for 40 "<<endl;
			cout<<"PHY";			cin>>phy;
			cout<<"PEL";			cin>>pel;
			cout<<"ECE";			cin>>ece;
			cout<<"MTH";			cin>>mth;
			cout<<"CSE";			cin>>cse;
			cout<<"MEC";			cin>>mec;
		}
	void show5()
	{
		
		cout<<"Midterm marks are :"<<'\t';
		cout<<phy<<'\t'<<pel<<'\t'<<ece<<'\t'<<mth<<'\t'<<cse<<'\t'<<mec<<endl;
	}
	friend class total;
};
class endobj:virtual public ca
{
	public:
		void get6()
		{
			cout<<"Enter endterm objective marks for 20 "<<endl;
			get1();
		}
		void show6()
		{
			cout<<"End-obj marks are "<<endl;
			show1();
		}
		friend class result;
};
class endthe:virtual public ca
{
	public: 
	void get7()
	{
		cout<<"Enter endterm theory marks for 50 "<<endl;
		get1();
	}
	void show7()
	{
		cout<<"End-the marks are :"<<endl;
		show1();
	}
	friend class result;
};
class result
{
	protected:
		int pphy,ppel,pece,pmth,pcse,pmec;
	public:
 		void cal(endobj y,endthe z)
	{
	pphy=y.phy+z.phy;
	ppel=y.pel+z.pel;
	pece=y.ece+z.ece;
	pmth=y.mth+z.mth;
	pcse=y.cse+z.cse;
	pmec=y.mec+z.mec;
	}
	void sumk()
	{
		cout<<"Endterm  marks are: "<<'\t';
		cout<<pphy<<'\t'<<ppel<<'\t'<<pece<<'\t'<<pmth<<'\t'<<pcse<<'\t'<<pmec<<endl;
	}
	friend class total;
};
class total
{
	protected:
		float phy,pel,ece,mth,cse,mec,cgpa;
	public:
		void qaz(sum x,mid m,result r)
		{
			phy=((x.tphy/3)+(m.phy/2)+((r.pphy)*(5/7)))/10;
			pel=((x.tpel/3)+(m.pel/2)+((r.ppel)*(5/7)))/10;
			ece=((x.tece/3)+(m.ece/2)+((r.pece)*(5/7)))/10;
			mth=((x.tmth/3)+(m.mth/2)+((r.pmth)*(5/7)))/10;
			cse=((x.tcse/3)+(m.cse/2)+((r.pcse)*(5/7)))/10;
			mec=((x.tmec/3)+(m.mec/2)+((r.pmec)*(5/7)))/10;
			cgpa=(phy+pel+ece+mth+cse+mec)/3;

		}
		void qwe()
		{
			cout<<"CGPA = "<<cgpa;
		}
};

}


	




int main()
{
    string pass ="";
    int regd;
    char ch;
 
	
	cout<<"\t\t\t\t\t\t\t";
	cout<< "LPU TOUCH"<<"\n";
	cout<<"\t";

    cout << "Enter the Registration Id:"<<"\t";
    cin>>regd;
    cout<<"\t";
    cout<<"Enter the Password\t\t\t:"<<"\t";
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
		cout<<"\t\t\t\t\t\t\tWELCOME TO MYWORLD!!!!"<<"\n";
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
		 cgpa();
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
			seatingplan();
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
			 profile();
		 
	
		 getch();
		 goto mainhome;
		}
		
			else if(choice==9)
		{
		 cgpacalculator();
		 getch();
		 goto mainhome;
	}
		getch();
		endobj y;endthe z;
	sum x;
	mid m;
	result r;
	total t;
	student s;
	s.put();
	x.get2();
	x.get3();
	x.get4();
	m.get5();
	y.get6();
	z.get7();
	x.cal();
	r.cal(y,z);
	t.qaz(x,m,r);
	s.get();
	cout<<"Exams  :"<<'\t'<<'\t'<<"phy"<<'\t'<<"pel"<<'\t'<<"ece"<<'\t'<<"mth"<<'\t'<<"cse"<<'\t'<<"mec"<<endl;
	x.show2();
	x.show3();
	x.show4();
	m.show5();
	r.sumk();
	t.qwe();
	getch();
	getch();
}





	


