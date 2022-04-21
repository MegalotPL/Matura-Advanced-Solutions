#include <iostream>
#include <fstream>
using namespace std;

int NWD(int x, int y)
{
	while(x!=y)
		if(x>y)
			x-=y;
		else
			y-=x;
	return x;
}

int skrac(int l, int m)
{
	int d=NWD(l, m);
	
	while(NWD(l, m)!=1)
	{
		l=l/d;
		m=m/d;
	}
	
	return l;
}

int main()
{
	fstream plik;
	plik.open("dane_ulamki.txt", ios::in);
	int suma=0;
	for(int i=0;i<1000;i++)
	{
		int licz, mian;
		plik>> licz;
		plik>>mian;
		
		suma+=skrac(licz, mian);
	}
	
	cout << suma;
}
