#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

string dekonwerter(int liczba)
{
	char binarna[255];
	itoa(liczba, binarna, 2);
	return binarna;
}

int konwerter(string dwojkowy)
{
	int dziesietna1= strtol(dwojkowy.c_str(), NULL, 2);
	return dziesietna1;
}

int konwerter2(string czworkowy)
{
	int dziesietna2 = strtol(czworkowy.c_str(), NULL, 4);
	return dziesietna2;
}

int konwerter3(string osemkowy)
{
	int dziesietna3 = strtol(osemkowy.c_str(), NULL, 8);
	return dziesietna3;
}



int main()
{
	string tekst, kosz;
	int min;
	fstream plik, plik2, plik3, plik_zapisu;

	plik.open("dane_systemy1.txt", ios::in);
	plik2.open("dane_systemy2.txt", ios::in);
	plik3.open("dane_systemy3.txt", ios::in);
	
	for(int i=0;i<1095;i++)
	{
		plik>>kosz;
		plik>> tekst;
		
		if(konwerter(tekst)<min)
			min=konwerter(tekst);
		
	}
	
	if(min<0)
	{
		cout << '-'<< dekonwerter(min*-1)<< endl;
	}
	 else
		cout << dekonwerter(min)<< endl;

	min=10000;
	
	for(int i=0;i<1095;i++)
	{
		plik2>>kosz;
		plik2>> tekst;
		
	
		
		if(konwerter2(tekst)<min)
			min=konwerter2(tekst);
		
	}
	
	if(min<0)
	{
		cout << '-'<< dekonwerter(min*-1)<< endl;
	}
	 else
		cout << dekonwerter(min)<< endl;
	
	min=10000;
	
	for(int i=0;i<1095;i++)
	{
		plik3>>kosz;
		plik3>> tekst;
		
	
		
		if(konwerter3(tekst)<min)
			min=konwerter3(tekst);	
	}
	
	if(min<0)
	{
		cout << '-'<< dekonwerter(min*-1)<< endl;
	}
	 else
		cout << dekonwerter(min)<< endl;
	
	
	
}
