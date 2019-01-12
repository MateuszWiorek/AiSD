/*
 * Hash.cpp
 *
 *  Created on: 12 sty 2019
 *      Author: LK
 */

#include "Hash.h"
#include <iostream>
using namespace std;
Hash::Hash() {
	// TODO Auto-generated constructor stub

}
int Hash::hashing(string s){
	int number;
	for(int i=0;i<s.size();i++){
		number+=(int)s[i];


	}
	return number%40;

}

void Hash::wstaw(string t){
	int indeks = hashing(t);
	this->ht[indeks].push_front(t);
}

string Hash::szukaj(string t){
	int indeks = hashing(t);
	if(ht[indeks].empty()==true){
		return "";
	}

	for(string n:ht[indeks]){
		if(n==t)

			return t;
	}


return t;
}
Hash::~Hash() {
	// TODO Auto-generated destructor stub
}

