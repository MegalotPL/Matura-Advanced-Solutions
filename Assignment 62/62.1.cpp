#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream plik;
	plik.open("liczby1.txt", ios::in);
	int min=999999999, max=-99999999, liczba;
	for(int i=0;i<1000;i++)
	{
		plik>> oct >> liczba;
		
		if(liczba>max)
			max=liczba;
		
		if(liczba<min)
			min=liczba;
	}
	cout << oct << min << ' ' << oct << max;
}
