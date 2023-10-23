#include <iostream>
#include <fstream>
using namespace std;

bool czysz(int liczba)
{
	for(int i=1;i<=100;i++)
		if(i*i*i==liczba)
			return true;
	return false;
}

int main()
{
	fstream plik;
	plik.open("ciagi.txt", ios::in);
	for(int j=0;j<100;j++)
	{
		int dlugosc;
		plik>> dlugosc;
		int m=0;
		for(int i=0;i<dlugosc;i++)
		{
		
			int liczba;
			plik>>liczba;
			
			if(czysz(liczba))
				m=liczba;
		}
		
		if(m>0)
			cout << m << endl;
	}
}
