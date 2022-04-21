#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	fstream plik;
	plik.open("liczby.txt", ios::in);
	int liczba, licznik=0;
	int tab[200];
	
	for(int i=0;i<200;i++)
	{
		plik >> liczba;
		
		if(liczba<1000)
		{
			licznik++;
			tab[licznik]=liczba;
		}
	}
	
	reverse(tab, tab+licznik+1);
	
	cout << licznik << endl << tab[1] << endl << tab[0];
	
}
