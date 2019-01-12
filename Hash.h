/*
 * Hash.h
 *
 *  Created on: 12 sty 2019
 *      Author: LK
 */

#ifndef HASH_H_
#define HASH_H_
#include <iostream>
#include <list>
using namespace std;
class Hash {
public:
	list<string> ht[40];
	Hash();
	void wstaw(string t);
	string szukaj(string t);
	int hashing(string s);
	virtual ~Hash();
};

#endif /* HASH_H_ */
