/*
 * Kolejka.h
 *
 *  Created on: 12 sty 2019
 *      Author: LK
 */

#ifndef KOLEJKA_H_
#define KOLEJKA_H_

class Kolejka {
public:
	Kolejka(int rozmiar);
	int* tablica;
	int liczbaElementow=0;
	int rozmiar;
	void swap(int&, int&);
	void wyswietl();
	void zatapianie(int i, int n);
	void wynurzanie(int i, int n);
	void insert(int);
	int extract();
	bool isEmpty();
	virtual ~Kolejka();
};

#endif /* KOLEJKA_H_ */
