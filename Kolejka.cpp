/*
 * Kolejka.cpp
 *
 *  Created on: 12 sty 2019
 *      Author: LK
 */

#include "Kolejka.h"
#include <iostream>
Kolejka::Kolejka(int rozmiar) {
	this->rozmiar=rozmiar;
	this->tablica =new int[rozmiar];

}
void Kolejka::zatapianie(int i, int n){
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

void Kolejka::wyswietl(){
	for(int i=0;i<11;i++)
		std::cout<<tablica[i]<<"  ";
std::cout<<"\n Koniec \n";
}
void Kolejka::wynurzanie(int i, int n) {
	int ojciec;
	if (i>0){
		ojciec=(i-1)/2;
		if (tablica[i]>tablica[ojciec]){
			swap(tablica[i],tablica[ojciec]);
			wynurzanie(ojciec,n);
		}

	}
}
void Kolejka::swap(int &jeden, int &dwa){
	jeden=jeden+dwa;
	dwa=jeden-dwa;
	jeden=jeden-dwa;
}

void Kolejka::insert(int element){
	if(liczbaElementow<rozmiar){
	tablica[liczbaElementow]=element;
	wynurzanie(liczbaElementow,rozmiar);
	}

}
int Kolejka::extract(){
	int liczba = tablica[0];
	if(this->isEmpty()==false)
	swap(tablica[0],tablica[liczbaElementow]);
	zatapianie(tablica[0],liczbaElementow-1);
	return liczba;
}
bool Kolejka::isEmpty(){
	if(liczbaElementow=0)
		return true;
	return false;
}
Kolejka::~Kolejka() {
	// TODO Auto-generated destructor stub
}

