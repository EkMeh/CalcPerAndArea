#include "figure.h"
#include<cmath>
#include<iostream>
#include<string>
using namespace std;


//Triangle method algorithm option, what action to perform
figure::triangle(int a,int b,int c)
{
	cout<<"---------TRIANGLE---------"<<endl;
	cout<<"a="<<a<<"		"<<"b="<<b<<"		"<<"c="<<c<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Sabc=?"<<"		"<<"Pabc=?"<<endl<<endl; 
	//	Define a perimeter variable
	int Pabc;
	//  Define a semi-perimeter variable
	int poluP;
	//	Define a area variable
	int Sabc;
	
	//Calculation of perimeter
	cout<<"Pabc=a+b+c="<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<endl<<endl;
	
	//Calculation of area Heron's formula
	cout<<"Sabc=sqrt(poluP(poluP-a)(poluP-b)(poluP-c))"<<endl<<endl;
	poluP=(a+b+c)/2; 
	cout<<"poluP="<<poluP<<endl;
	cout<<"Sabc=sqrt("<<poluP<<"("<<poluP<<"-"<<a<<")"<<"("<<poluP<<"-"<<b<<")"<<"("<<poluP<<"-"<<c<<")"<<")"<<endl;
	cout<<"Sabc="<<sqrt(poluP*(poluP-a)*(poluP-b)*(poluP-c))<<endl;
	cout<<"-----------------------------------------------------"<<endl;
};


//Recetangle method algorithm option, what action to perform
figure::recetangle(int a,int b)
{
	cout<<"---------RECETANGLE---------"<<endl;
	cout<<"a="<<a<<"		"<<"b="<<b<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"S=?"<<"		"<<"P=?"<<endl<<endl; 
	
	//	Define a perimeter variable
	int P;
	//	Define a semi-perimeter variable
	int poluP;
	//	Define a area variable
	int S;
	//Calculation of perimeter
	P=2*(a+b);
	cout<<"P="<<P<<endl;
	poluP=(2*(a+b))/2;
	cout<<"poluP="<<poluP<<endl;
	//Recetangle method algorithm option, what action to perform
	S=sqrt((poluP-a)*(poluP-b)*(poluP-a)*(poluP-b));
	cout<<"S="<<S<<endl;
};
