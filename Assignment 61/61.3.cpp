#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream plik;
	plik.open("bledne.txt", ios::in);
	int ciag[1000], roznica[1000];
	for(int j=0;j<20;j++)
	{
		int d;
		plik>>d;
		
		for(int i=0;i<d;i++)
			plik>>ciag[i];
		for(int i=0;i+1<d;i++)
			roznica[i]=ciag[i+1]-ciag[i];
		
		if(roznica[0]!=roznica[1] and roznica[1]==roznica[2])
		{	
			cout << ciag[0] << endl;
			continue;
		}
		if(roznica[0]!=roznica[2] and roznica[1]!=roznica[2] and roznica[3]==roznica[2])
		{	
			cout << ciag[1] << endl;
			continue;
		}
		for(int i=0;i+1<d;i++)
			if(roznica[i]!=roznica[0])
			{	
				cout << ciag[i+1] << endl;
				break;
			}
		
			
		
	}
}
