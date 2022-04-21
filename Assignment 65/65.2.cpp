#include <iostream>
#include <fstream>
using namespace std;

int NWD(int x, int y)
{
	while(x!=y)
		if(x>y)
			x-=y;
		else
			y-=x;
	return x;
}

int main()
{
	fstream plik;
	plik.open("dane_ulamki.txt", ios::in);
	int ile=0;
	for(int i=0;i<1000;i++)
	{
		int licz, mian;
		plik>>licz;
		plik>>mian;
		
		if(NWD(licz, mian)==1)
			ile++;
	}
	
	cout << ile;
}
