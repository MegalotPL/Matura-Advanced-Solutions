#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream plik;
	plik.open("dane_ulamki.txt", ios::in);
	float minM, min=1000, minL;
	for(int i=0;i<1000;i++)
	{
		int licz, mian;
		plik>>licz;
		plik>>mian;
		float ulamek=(float)licz/mian;
		
		if(ulamek<min)
		{
			min=ulamek;
			minM=mian;
			minL=licz;
		}
		
		if(ulamek==min)
			if(minM>mian)
			{
				min=ulamek;
				minM=mian;
				minL=licz;
			}
	}
	
	cout << minL << ' ' << minM;
}
