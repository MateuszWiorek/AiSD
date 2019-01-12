/*
 * Kopiec.h
 *
 *  Created on: 12 sty 2019
 *      Author: LK
 */

#ifndef KOPIEC_H_
#define KOPIEC_H_

class Kopiec {
public:
	Kopiec();
	int tablica[11]={1,12,11,10,11,8,5,3,7,2,9};
	void swap(int&, int&);
	void wyswietl();
	void zatapianie(int i, int n);
	void wynurzanie(int i, int n);
	virtual ~Kopiec();
};

#endif /* KOPIEC_H_ */
