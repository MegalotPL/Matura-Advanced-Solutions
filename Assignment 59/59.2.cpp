#include <iostream>
#include <fstream>
using namespace std;

bool czy_pal(int suma)
{
	int n;
	n=suma;
	int odw=0, rem;
	
	while(n!=0)
	{
		rem=n%10;
		odw=odw*10+rem;
		n/=10;
	}
	
	if(suma==odw)
		return true;
	else
		return false;
}

int odw(int liczba)
{
	int n;
	n=liczba;
	int odw=0, rem;
	
	while(n!=0)
	{
		rem=n%10;
		odw=odw*10+rem;
		n/=10;
	}
	
	return odw;
}

int main()
{
	fstream plik;
	plik.open("liczby.txt", ios::in);
	int licznik=0, suma, liczba;
	for(int i=0;i<1000;i++)
	{
		plik>>liczba;
		suma=liczba+odw(liczba);
		
		if(czy_pal(suma))
			licznik++;
	}
	
	cout << licznik;
}
