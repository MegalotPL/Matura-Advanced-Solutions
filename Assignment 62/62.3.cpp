#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream plik1, plik2;
	plik1.open("liczby1.txt", ios::in);
	plik2.open("liczby2.txt", ios::in);
	int liczba1, liczba2, licznik1=0, licznik2=0;

	for(int i=0;i<1000;i++)
	{
		plik1 >> oct >> liczba1;
		plik2 >> liczba2;
		
		if(liczba1==liczba2)
			licznik1++;
		else if(liczba1>liczba2)
			licznik2++;
	}
	
	
	cout << licznik1 << ' ' << licznik2;
}
