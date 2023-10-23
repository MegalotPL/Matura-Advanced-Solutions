#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

int konwerter(string dwojkowy)
{
	int dziesietna1= strtol(dwojkowy.c_str(), NULL, 2);
	return dziesietna1;
}

int main(){
    fstream plik_zadanie;
    plik_zadanie.open("dane_systemy1.txt", ios::in);
    string kosz, tp;
    float skok, mod, roz;
    int temp[1095], naj=-100000000; 
    
    for(int i=0;i<1095;i++){
        plik_zadanie>>kosz;
        plik_zadanie>>tp;
        temp[i]=konwerter(tp);  
    }
    
    for(int i=0;i<1095;i++){
        for(int j=i;j<1095;j++){
            if(i!=j){       
                roz=abs(pow(temp[i]-temp[j],2));
        
                mod=abs(i-j);
                skok=ceil(roz/mod);
            
                if(skok>naj)
                    naj=skok;
            }
        }
    }
    cout<<"Najwiekszy skok wynosil: "<<naj;
    plik_zadanie.close();
    return 0;
}
