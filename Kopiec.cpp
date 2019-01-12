/*
 * Kopiec.cpp
 *
 *  Created on: 12 sty 2019
 *      Author: LK
 */

#include "Kopiec.h"
#include <iostream>
Kopiec::Kopiec() {
	// TODO Auto-generated constructor stub

}
void Kopiec::zatapianie(int i, int n){
int l = 2*i+1;
int r = 2*i+2;
int wiekszy;

if (l<n && tablica[l]>tablica[i])
	wiekszy = l;
else
	wiekszy = i;

if (r<n && tablica[r]>tablica[wiekszy])
	wiekszy=r;
if (wiekszy!=i){
	swap(tablica[i],tablica[wiekszy]);
	zatapianie(wiekszy,n);
}

}

void Kopiec::wyswietl(){
	for(int i=0;i<11;i++)
		std::cout<<tablica[i]<<"  ";
std::cout<<"\n Koniec \n";
}
void Kopiec::wynurzanie(int i, int n) {
	int ojciec;
	if (i>0){
		ojciec=(i-1)/2;
		if (tablica[i]>tablica[ojciec]){
			swap(tablica[i],tablica[ojciec]);
			wynurzanie(ojciec,n);
		}

	}
}
void Kopiec::swap(int &jeden, int &dwa){
	jeden=jeden+dwa;
	dwa=jeden-dwa;
	jeden=jeden-dwa;
}
Kopiec::~Kopiec() {
	// TODO Auto-generated destructor stub
}

