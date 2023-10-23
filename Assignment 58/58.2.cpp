#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

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
	string tekst, tekst2, tekst3, kosz;
	int godzina=12, blad=0;
	fstream plik, plik2, plik3, plik_zapisu;

	plik.open("dane_systemy1.txt", ios::in);
	plik2.open("dane_systemy2.txt", ios::in);
	plik3.open("dane_systemy3.txt", ios::in);
	
	
	
	for(int i=0;i<1095;i++)
	{
		plik>>tekst;
		plik>> kosz;
		plik2>>tekst2;
		plik2>> kosz;
		plik3>>tekst3;
		plik3>> kosz;
		
		
		
		if(konwerter(tekst)!=godzina and konwerter2(tekst2)!=godzina and konwerter3(tekst3)!=godzina )
			blad++;
		
		godzina+=24;
	}
	
	cout << blad;
}
