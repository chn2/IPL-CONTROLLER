#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    const int n=80;
	char line[n];
	ofstream outf;
	outf.open("lp1.doc");
	outf<<"Your CGPA is 9.6!!";
	outf.close();
	outf.open("lp2.doc");
	outf<<"Your CGPA is 7.0!!";
	outf.close();
	outf.open("lp3.doc");
	outf<<"Your CGPA is 5.6!!";
	outf.close();
	outf.open("lp4.doc");
	outf<<"Your CGPA is 2.6!!";
	outf.close();
	outf.open("lp5.doc");
	outf<<"Your CGPA is 4.6!!";
	outf.close();
	outf.open("lp6.doc");
	outf<<"Your CGPA is 3.6!!";
	outf.close();
	outf.open("lp7.doc");
	outf<<"Your CGPA is 9.6!!";
	outf.close();
	outf.open("lp8.doc");
	outf<<"Your CGPA is 7.6!!";
	outf.close();
	outf.open("lp9.doc");
	outf<<"Your CGPA is 4.6!!";
	outf.close();
	outf.open("lp10.doc");
	outf<<"Your CGPA is 9.6!!";
	outf.close();
	outf.open("lp11.doc");
	outf<<"Your CGPA is 6.4!!";
	outf.close();
	outf.open("lp12.doc");
	outf<<"Your CGPA is 9.1!!";
	outf.close();
	outf.open("lp13.doc");
	outf<<"Your CGPA is 3.2!!";
	outf.close();
	outf.open("lp14.doc");
	outf<<"Your CGPA is 4.2!!";
	outf.close();
	outf.open("lp15.doc");
	outf<<"Your CGPA is 6.6!!";
	outf.close();
	outf.open("lp16.doc");
	outf<<"Your CGPA is 5.2!!";
	outf.close();
	outf.open("lp17.doc");
	outf<<"Your CGPA is 3.4!!";
	outf.close();
	outf.open("lp18.doc");
	outf<<"Your CGPA is 9.6!!";
	outf.close();
	outf.open("lp19.doc");
	outf<<"Your CGPA is 7.6!!";
	outf.close();
	outf.open("lp20.doc");
	outf<<"Your CGPA is 8.5!!";
    outf.close();
  
    ifstream inf;
    inf.open("lp1.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp2.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp3.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp4.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp5.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp6.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp7.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp8.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp9.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp10.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp11.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp12.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp13.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp14.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp15.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp16.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp17.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}
	inf.close();
	inf.open("lp18.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp19.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}inf.close();
	inf.open("lp20.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}
	inf.close();
	  
	outf.open("seating plan.doc");
	outf<<"____DATE_____"<<"_____ROOMNUMBER_____"<<"______EXAMNAME_____"<<"endl"<<"\n9-5-2017"<<"\t34-205"<<"\tcse"<<"\n"
	<<"\n"<<"11-5-2017"<<"\t32-205"<<"ece"<<"\n"<<"\n"<<"13-5-2017"<<"\t36-205"<<"\tmth"<<"\n"<<"\n"<<"15-5-2017"<<"\t31-205"<<"\tmec"<<"\n";
	outf.close();
	 
    inf.open("seating plan.doc");
    while(inf)
	{
	   inf.getline(line,n);
	   cout<<line;
	}
	inf.close();
}
