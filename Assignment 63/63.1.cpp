#include <iostream>
#include <fstream>
using namespace std;

 bool dwu(string ciag)
 {
 	int d=ciag.length();
 	if(d%2==1)
 		return false;
 	
 	for(int j=0;j<d/2;j++)
 		if(ciag[j]!=ciag[d/2+j])
 			return false;
 	return true;
 }
 
 int main()
 {
 	fstream plik;
 	plik.open("ciagi.txt", ios::in);
 	string ciag[1000];
 	for(int i=0;i<1000;i++)
 	{
 		plik>>ciag[i];
	
 		if(dwu(ciag[i]))
 			cout << ciag[i] << endl;
 	}
 }
