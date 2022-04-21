#include <iostream>
#include <fstream>
using namespace std;

int nwd(int x, int y)
{
	if(x<y)
		return nwd(y,x);
	if(y==0)
		return x;
	return nwd(y,x%y);
	
}

int main()
{
	fstream plik1;
	plik1.open("liczby.txt", ios::in);
	
	int liczby[200], najwieksza=0;
	bool czy=true;
	
	for(int i=0;i<200;i++)
	{
		plik1>> liczby[i];;
	}
	
	for(int i=0;i<200;i++)
	{
		czy=true;
		for(int j=0;j<200;j++)
		{
			if(i!=j and nwd(liczby[i], liczby[j])>1)
				czy = false;
		}
		
		if(czy and liczby[i] > najwieksza)
				najwieksza= liczby[i];
		
	}
	
	cout << najwieksza;
	
	
}

