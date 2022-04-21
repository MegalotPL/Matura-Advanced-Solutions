#include<iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream plik;
	plik.open("ciagi.txt", ios::in);
	int ciag[1000], max=0, ile=0;
	for(int j=0;j<100;j++)
	{
		int dlugosc;
		plik>> dlugosc;
		
		for(int i=0;i<dlugosc;i++)
			plik>>ciag[i];
		
		int roznica=ciag[1]-ciag[0];
		bool art = true;
		
		for(int i=0;i+1<dlugosc;i++)
			if(ciag[i+1]-ciag[i]!=roznica)
			{
				art=false;
				break;
			}
		
		if(art)
		{
			ile++;
			if(roznica>max)
				max=roznica;
		}
		
			
	}
	
	cout << ile << endl << max;
}
