#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream plik;
	plik.open("liczby2.txt", ios::in);
	int licznik=0, tab[1000], max=1, pierw, maksp;
	for(int i=0;i<1000;i++)
	{
		plik>>tab[i];
	}
	for(int i=0;i+1<1000;i++)
	{
		if(tab[i]<tab[i+1])
		{
			licznik++;
			if(licznik==2)
				pierw=tab[i];
		}
		
		if(licznik>max)
		{
			maksp=pierw;
			max=licznik;
		}
		
		if(tab[i]>=tab[i+1])
			licznik=1;
	}
	
	cout << max << ' ' << maksp;
}
