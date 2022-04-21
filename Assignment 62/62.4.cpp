#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream plik;
	plik.open("liczby2.txt");
	int liczba, temp, cyfr6d=0, cyfr6o=0;
	for(int i=0;i<1000;i++)
	{
		plik>>liczba;
		temp=liczba;
		while(temp)
		{
			if(temp%10==6){
				cyfr6d++;
			}
			temp/=10;
		}
		
		temp=liczba;
		while(temp)
		{
			if(temp%8==6){
				cyfr6o++;
			}
			temp/=8;
		}
	}
	
	cout << cyfr6o << ' ' << cyfr6d;
}
