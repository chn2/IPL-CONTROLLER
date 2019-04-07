#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
void stimetable();
void mon(); void tues(); void wed(); void thur(); void fri();
class Student
{
public:
	void academics();
	void smenu();
	void pwd();
	void exams();
    void profile();
	void accounts();
	void rms();
}a;

int main()
{
	char l;
	cout<<"\n To Login as Student--> S";
	cin>>l;
	
if(l=='s'||l=='S')
		a.smenu();
	else
	{
		cout<<"\n Wrong Choice!!! "<<endl;
		return 0;
	}
	return 0;
}
void Student::smenu()
{
	int c1;
 		cout<<"ACADEMICS-->A"<<endl;
 		cout<<" CHANGE PASSWORD -->D "<<endl;
 		cout<<" EXAMINATIONS -->M "<<endl;
 		cout<<" MY PROFILE --->E "<<endl;
 		cout<<" RMS ---> L "<<endl;
 		cout<<" ACCOUNTS ---> C "<<endl;
 		c1=getche();
 		cout<<endl;
 		if(c1=='A'||c1=='a')
 			a.academics();
		else if(c1=='d'||c1=='D')
			a.pwd();
		else if(c1=='m'||c1=='M')
			a.exams();
		else if(c1=='E'||c1=='e')
			a.profile();
			else if(c1=='L'||c1=='l')
		     a.rms();
		else if(c1=='C'||c1=='c')
	a.accounts();
		else
		{
			cout<<"Wrong Choice \nEnter Again"<<endl;
			a.smenu();
 		}
		a.smenu();
}
void Student::academics()
{
	int choice;
	cout<<"Enter 1 for ANNOUNCEMENTS"<<"\n";
	cout<<"Enter 2 for MARKS"<<"\n";
	cout<<"Enter 3 for ATTENDANCE"<<"\n";
	cout<<"Enter 4 for COURSES"<<"\n";
	cout<<"Enter 5 for MAKE UP ADJUSTMENTS"<<"\n";
	cout<<"Enter 6 for TEACHER ON LEAVE"<<"\n";
	cout<<"press 7 to back "<<endl;
	cin>>choice; 
	if(choice==1)
	{
		cout<<"Announcments"<<"\n";
		cout<<"1.update regarding placement drive by aspiring minds"<<"\n";
		cout<<"2.Wow!!!wizards of words final results"<<"\n";
		cout<<"3.demo session on foreign languages"<<"\n";
		cout<<"4.Aamne Saamne dace off session"<<"\n";
		cout<<"5.second physical efficiency test 2016-17"<<"\n";
		
	}
	if(choice==2)
	{
		cout<<"marks"<<"\n";
		cout<<"your mid-terms"<<"\n";
		cout<<"CSE-202-39/40"<<"\n";
		cout<<"ECE-213-40/40"<<"\n";
		cout<<"MEC-103-38/40"<<"\n";
		cout<<"MNT -002-40/40"<<"\n";
		cout<<"MTH-166-37/40"<<"\n";
		cout<<"\t\t\t\t\t\t\t\tyour's CGPA is:9.99"<<"\n";
	}
	if(choice==3)
	{
		cout<<"attendance"<<endl;
		cout<<"CSE 202 : 99%"<<"\n";
		cout<<"CSE 326 : 92%"<<"\n";
		cout<<"ECE 216 : 98%"<<"\n";
		cout<<"MEC 103 : 97%"<<"\n";
		cout<<"MTH 166 : 100%"<<"\n";
		cout<<"PEL 131 : 99%"<<"\n";
		cout<<"PHY 109 : 99%"<<"\n";
	}
		if(choice==4)
	{
		cout<<"course"<<"\n";
		cout<<"CSE 202"<<"\n";
		cout<<"CSE 326"<<"\n";
		cout<<"ECE 216"<<"\n";
		cout<<"MEC 103"<<"\n";
		cout<<"MTH 166"<<"\n";
		cout<<"PEL 131"<<"\n";
		cout<<"PHY 109"<<"\n";
	}
		if(choice==5)
	{
		cout<<"make up adjustments"<<"\n";
		cout<<"CSE 202 : 12/April- 9.30 A.M"<<"\n";
		cout<<"CSE 326 : 23/April- 10.30 A.M"<<"\n";
		cout<<"ECE 216 : 24/April- 1.30 P.M"<<"\n";
	}
		if(choice==6)
	{
		cout<<"teacher on leave"<<"\n";
		cout<<"No faculty on leave"<<"\n";
	}
	if(choice==7)
	{
		cout<<"Wrong Choice \nEnter Again"<<endl;
			a.smenu();
	}

}
void Student::pwd()
{ 
cout<<"change your password"<<endl;
	char pw[20];
	char npw1[20];
	char npw2[20];
	cout<<"enter your old password"<<endl;
	cin>>pw;
	cout<<"enter your new password"<<endl;
	cin>>npw1;
	cout<<"enter your new password again"<<endl;
	cin>>npw2;
}
void Student::exams()
{
        cout<<"END TERM EXAMS TIME TABLE"<<endl;	
        cout<<"CSE 202 : 12/April- 9.30 A.M"<<"\n";
	    cout<<"CSE 326 : 23/April- 10.30 A.M"<<"\n";
		cout<<"ECE 216 : 24/April- 1.30 P.M"<<"\n";
		cout<<"ECE 213 : 28/April- 1.30 P.M"<<"\n";
		cout<<"MTH 166 : 25/April- 1.30 P.M"<<"\n";
		cout<<"PEL 131 : 26/April- 1.30 P.M"<<"\n";
 }
 
void Student::profile()
{
	    cout<<"YOUR DETAILS"<<endl;
	    cout<<"Registration number: 11603580"<<"\n";
		cout<<"Name : Yedla Karthik "<<"\n";
		cout<<"Date of Birth: 25-06-1997"<<"\n";
		cout<<"Father name: Y.Appi Reddy"<<"\n";
		cout<<"Mother name: Y.Pushpavathi"<<"\n";
		cout<<"Address : R.T.P.P ; KADAPA ;A.P"<<"\n";
}
void Student::rms()
{
	int ego;
	cout<<"select chategory"<<endl;
	cout<<"\n\n\n\t\t\t\t COMPLAINT -->1"<<endl;
 		cout<<"\n\t\t\t\t\t\t SUGGESTION -->2 "<<endl;
 		cout<<"press 3 to back "<<endl;
 		
	cin>>ego;
	if(ego==1)
	{ 
	char c1;
		cout<<"select type of complaint"<<endl;
		cout<<"\n\n\n\t\t\t\t MAINTAINANCE -->x"<<endl;
 		cout<<"\n\t\t\t\t\t\t OTHERS -->y"<<endl;
 		if(c1=='X'||c1=='x')
 			
 			{
 				char comp[100] ,nam[20] ;
 				char blck[20];
 				int no;
 				cout<<"compalaint :"<<endl;
 				cin>>comp;
 				cout<<"your name:"<<endl;
 				cin>>nam;
 				cout<<"enter your block"<<endl;
 				cin>>blck;
 				cout<< "mobile no."<<endl;
 				cin>>no;
 				cout<<" your complaint is succesfull"<<endl;
 				
 			}
		else if(c1=='y'||c1=='Y')
			{
				cout<<"enter your issue"<<endl;
			}
		}
	
	if(ego==2)
	
{
	char sg[200];
cout<<"give your suggestion"<<endl;
cin>>sg;
cout<<"thanks for your suggestion"<<endl;
}

if(ego==3)

{
	cout<<"Wrong Choice \nEnter Again"<<endl;
	getch();
			a.smenu();
}
}
void Student::accounts()
{
	int chi;
	cout<<"Enter 1 for FEE STATUS "<<"\n";
	cout<<"Enter 2 for FEE PAYMENTS"<<"\n";
	cout<<"press 3 to back "<<endl;
	cin>>chi;
	if(chi==1)
	{
	cout<<"tution fee : 44,500"<<endl;
	cout<<"hostel fee : 46,500"<<endl;
	cout<<"examination fee : 1,500"<<endl;	
	cout<<"you have paid : 44,500"<<endl;	
	cout<<"fee due: 48,000"<<endl;	
	}
	if(chi==2)
	{
		cout<<"10,000 --------May/10"<<endl;
		cout<<"5,000 ---------June/2"<<endl;
		cout<<"20,000 --------July/5"<<endl;
		cout<<"9,500 ---------July/19"<<endl;
		cout<<"pay your fee before due date otherwise your attendance will be blocked"<<endl;
		
	}
	if(chi==3)
	{
	cout<<"Wrong Choice \nEnter Again"<<endl;
			a.smenu();	
	}
}
void stimetable()
{
		int n,day;
	char ch;
	do{
		cout<<"\nEnter the day u want to see";
		cout<<"\n1.Monday";
		cout<<"\n2.Tuesday";
		cout<<"\n3.Wednesday";
		cout<<"\n4.Thursday";
		cout<<"\n5.Friday\n";
		cin>>day;
		switch (day) 
			{
				case 1:
						mon(); break;
				case 2:
						tues(); break;
				case 3:
						wed(); break;
				case 4:
						thur(); break;
				case 5:
						fri(); break;
				default:
						cout<<"enter correct choice";
			}
		cout<<"\nPress Y to continue\n";
		ch=getche();
	}while(ch=='y'||ch=='Y');
}
void mon()	
{
	cout<<"\t\tMONDAY";
	cout<<"\nTime\t\tLecture\t\tRoom No.";
	cout<<"\n9-10\t\tCSE-201\t\t33-307";
	cout<<"\n10-11\t\tMTH-108\t\t33-307";
	cout<<"\n11-12\t\tCSE-202\t\t34-307";
	cout<<"\n1-2\t\tPEV-103\t\t33-307";
	cout<<"\n2-3\t\tPHY-108\t\t34-407";
	cout<<"\n3-4\t\tMEC-107\t\t33-607";
	cout<<"\n4-5\t\tECE-131\t\t34-310";
}
void tues()
{
	cout<<"\t\tTUESDAY";
	cout<<"\nTime\t\tLecture\t\tRoom No.";
	cout<<"\n10-11\t\tMTH-108\t\t33-307";
	cout<<"\n11-12\t\tCSE-202\t\t33-307";
	cout<<"\n12-1\t\tPHY-108\t\t34-402";
	cout<<"\n2-3\t\tPEV-103\t\t33-307";
	cout<<"\n3-4\t\tMEC-107\t\t34-601";
	cout<<"\n4-5\t\tECE-131\t\t33-307";
}
void wed()
{
	cout<<"\t\tWEDNESDAY";
	cout<<"\nTime\t\tLecture\t\tRoom No.";
	cout<<"\n9-10\t\tCSE-201\t\t33-307";
	cout<<"\n10-11\t\tMTH-108\t\t34-306";
	cout<<"\n11-12\t\tCSE-202\t\t33-307";
	cout<<"\n1-2\t\tPEV-103\t\t33-307";
	cout<<"\n2-3\t\tPHY-108\t\t34-801";
	cout<<"\n3-4\t\tMEC-107\t\t33-307";
	cout<<"\n4-5\t\tECE-131\t\t34-402";
}
void thur()
{
	cout<<"\t\tTHURSDAY";
	cout<<"\nTime\t\tLecture\t\tRoom No.";
	cout<<"\n9-10\t\tCSE-201\t\t33-307";
	cout<<"\n10-11\t\tMTH-108\t\t34-404";
	cout<<"\n11-12\t\tCSE-202\t\t33-307";
	cout<<"\n1-2\t\tPEV-103\t\t34-801";
	cout<<"\n2-3\t\tPHY-108\t\t33-307";
	cout<<"\n3-4\t\tMEC-107\t\t34-407";
	cout<<"\n4-5\t\tECE-131\t\t33-307";
}
void fri()
{
	cout<<"\t\tFRIDAY";
	cout<<"\nTime\t\tLecture\t\tRoom No.";
	cout<<"\n9-10\t\tCSE-201\t\t33-307";
	cout<<"\n10-11\t\tMTH-108\t\t33-307";
	cout<<"\n11-12\t\tCSE-202\t\t33-307";
	cout<<"\n1-2\t\tPEV-103\t\t33-607";
	cout<<"\n2-3\t\tPHY-108\t\t33-307";
	cout<<"\n3-4\t\tMEC-107\t\t34-307";
}

