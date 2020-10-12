//Tugas memenghitung billing perjam\
//Biaya perjam Rp 5.000

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main()

{
	int j1, d1, m1;
	int j2, d2, m2;
	int jk, mk, dk;
	float tm, td, ttl;
		
	cout<<"======Program Billing Warnet======\n";
	cout<<"\n";
	cout<<"USER PROGRAM	: Christopher\n";
	cout<<"KELAS		: 2020B\n";
	cout<<"NIM		: 20051397050\n";
	cout<<"----------------------------------\n";
	cout<<"\n";
	cout<<"------Jam Masuk------\n";
	cout<<"Jam	:";
	cin>>j1;
	cout<<"Menit	:";
	cin>>m1;
	cout<<"Detik	:";
	cin>>d1;
	cout<<"Jam masuk = "<<j1<<":"<<m1<<":"<<d1;
	cout<<endl<<endl;
	cout<<"-----------------------------\n";
	cout<<"\n";
	
	cout<<"------Jam Keluar------\n";
	cout<<"Jam	:";
	cin>>j2;
	cout<<"Menit	:";
	cin>>m2;
	cout<<"Detik	:";
	cin>>d2;
	cout<<"-----------------------------\n";
	
	if (j1>j2)
	{j2=24-(j1-j2);}
	else 
	{jk=j2-j1;}
	if (m1>m2)
	{mk=m1-m2;}
	else
	{mk=m2-m1;}
	if (d1>d2)
	{dk=d1-d2;}
	else
	{dk=d2-d1;}
	
	cout<<"Total main Anda = "<<jk<<":"<<mk<<":"<<dk;
	cout<<endl<<endl;
	tm = float(mk)/60;
	td = float(dk)/3600;
	ttl = (jk+tm+td)*5000;	
	cout<<"Total Anda membayar : Rp "<<ttl;
	cout<<"\n";
	cout<<"\n";
	cout<<"==============TERIMA KASIH==============\n";

	getch();
return 0;

}
