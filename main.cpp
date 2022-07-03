#include "figure.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	figure op;
	int option;
	do{
		cout << "1. TRIANGLE" << endl;
		cout << "2. RECETANGLE" << endl;
		cout<<"!--SELECT OPTION--!:	"; 
		cin>>option;
		cout<<endl;
		
		if(1==option)
		{
			int a,b,c;
			cout<<"Enter the sides of the triangle:";
			cin>>a>>b>>c;
			op.triangle(a,b,c);
		}
		else if (2==option)
		{
			int a,b;
			cout<<"Enter the sides of the rectangle:";
			cin>>a>>b;
			op.recetangle(a,b);
		}
		else
		{
			cout<<endl<<"The selected option is invalid";
		}
	}while(option<2);
	
	return 0;
}
