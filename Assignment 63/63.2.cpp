#include <iostream>
#include <fstream>
using namespace std;

bool dje (string ciag)
{
	for (int i=0;i<ciag.length()-1;i++)
		if(ciag[i]=='1' and ciag[i+1]=='1')
			return false;
	return true;
}

 int main()
 {
 	fstream plik;
 	plik.open("ciagi.txt", ios::in);
 	string ciag[1000];
 	int ile=0;
 	for(int i=0;i<1000;i++)
 	{
 		plik>>ciag[i];
		if(dje(ciag[i]))
			ile++;
 	}
 	
 	cout << ile;
 }
