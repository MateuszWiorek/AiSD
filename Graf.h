/*
 * Graf.h
 *
 *  Created on: 13 sty 2019
 *      Author: LK
 */

#ifndef GRAF_H_
#define GRAF_H_

class Graf {
public:
	void BFS(int[6][6], int start);
	void DFS(int [6][6], int start);

	void dijkstra(int [8][8], int start);
	bool isEmpty(bool* s, int n);
	int minDistanceNode(int *d, bool* s, int n);
	Graf();
	virtual ~Graf();
};

#endif /* GRAF_H_ */
