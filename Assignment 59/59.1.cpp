#include <iostream>
#include <fstream>
using namespace std;

bool czy_czynniki(int liczba)
{
	int n;
	n=liczba;
	int stara=0, licznik=0, k=2;
	
	while(n>1)
	{
		while(n%k==0)
		{
			if(k!=stara)
				licznik++;
			
			if(k%2==0)
				return false;
				
			
			n/=k;
			stara=k;
		}
		
		++k;
	}
	
	if(licznik==3)
		return true;
	else
		return false;
}

int main()
{
	fstream plik;
	plik.open("liczby.txt", ios::in);
	int licznik=0, liczba;
	for(int i=0;i<1000;i++)
	{
		plik>>liczba;
		
		if(czy_czynniki(liczba))
			licznik++;
	}
	
	cout << licznik;
}
