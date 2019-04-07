#include<iostream>
#include<conio.h>
using namespace std;
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
int main()
{
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
