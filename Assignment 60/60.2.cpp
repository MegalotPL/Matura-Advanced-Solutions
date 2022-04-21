#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	
	fstream plik;
	plik.open("liczby.txt", ios::in);
	int liczba, licznik=0;
	
	for(int i=0;i<200;i++)
	{
		plik >> liczba;
		
		for(int j=1;j<=liczba;j++)
		{
			if(liczba%j==0)
			{
				licznik++;
			}
		}
		
		if(licznik==18)
		{
			cout << endl << liczba << endl;
			
			for(int j=1;j<=liczba;j++)
			{
				if(liczba%j==0)
				{
					cout << j << ' ';
				}
			}
			
		
		}
		
		licznik=0;
			
		
	}
	
}
