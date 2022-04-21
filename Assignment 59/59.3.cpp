#include <iostream>
#include <fstream>
using namespace std;

int cyfer(int x)
{
	int wynik=1;
	
	while(x>0)
	{
		wynik=wynik*(x%10);
		x/=10;
	}
	
	return wynik;
}

int moc(int liczba)
{
	int ile=1;
	
	liczba=cyfer(liczba);
	
	while(liczba>9)
	{
		liczba=cyfer(liczba);
		ile++;
	}
	
	return ile;
}

int main()
{
	fstream plik;
	plik.open("liczby.txt", ios::in);
	int temp, liczba, min=99999999, max=10, t[21]{};
	for(int i=1;i<=1000;i++)
	{
		plik>>liczba;
		temp=moc(liczba);
		t[temp]++;
		
		if(temp==1)
		{
			if(liczba>max)
				max=liczba;
				
			if(liczba<min)
				min=liczba;
		}
	}
	
	for(int i=1;i<=8;i++)
		cout << i << ' ' << t[i] << endl;
		
	cout << min << ' ' << max;
	
}
