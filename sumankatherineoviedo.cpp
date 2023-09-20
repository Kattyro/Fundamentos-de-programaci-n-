//programa:sumankatherineoviedo.cpp//
//autor:katherineoviedo//
//fecha:2023-09-15//
//descripcion:suma varios numeros//
#include<iostream>
using namespace std;
int main()
{
	int i=0,l;
	float x,s=0;
	cout<<"Ingrese cantidad de numeros:";
	cin>>l;
	do{
		cout<<"Ingresex:";cin>>x;
		i=i+1;
		s=s+x;
	}while(i<l);
	cout<<"la suma es:"<<s<<endl;
}

