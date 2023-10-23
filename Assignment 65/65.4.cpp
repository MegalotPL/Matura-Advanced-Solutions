#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
	fstream plik;
	plik.open("dane_ulamki.txt", ios::in);
	long long sum=0, b=pow(2,2)*pow(3,2)*pow(5,2)*pow(7,2)*13;
	for(int i=0;i<1000;i++)
	{
		int mian, licz;
		plik>>licz;
		plik>>mian;
		sum+=(licz*b)/mian;
	}
	
	cout << sum;
}
