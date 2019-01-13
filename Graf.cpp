/*
 * Graf.cpp
 *
 *  Created on: 13 sty 2019
 *      Author: LK
 */

#include "Graf.h"
#include <queue>
#include <stack>
#include <iostream>
using namespace std;
Graf::Graf() {
	// TODO Auto-generated constructor stub

}
void Graf::BFS(int tab[6][6], int start){
queue <int> kolejka;
int odwiedzone[6]={0,0,0,0,0,0};

odwiedzone[start]=1;
kolejka.push(start);

	while (kolejka.empty()==false){

		start = kolejka.front();
		cout<< start;
		kolejka.pop();
		for (int i=0;i<6;i++){

			if(tab[start][i]==1){

				if(odwiedzone[i]==0){

					kolejka.push(i);
					odwiedzone[i]=1;
				}
			}

		}
	}

}

void Graf::DFS(int macierz[6][6], int start){
stack <int> stos;
int odwiedzone[6]={0,0,0,0,0,0};
stos.push(start);

	while(!stos.empty()){
		int temp = stos.top();
		stos.pop();

		if(odwiedzone[temp]==0){
			cout<<temp;
			odwiedzone[temp]=1;
			for(int i=5;i>=0;i--){
				if (macierz[temp][i]==1){
				if(odwiedzone[i]==0)
				stos.push(i);
				}
			}

		}

	}



}

void Graf::dijkstra(int macierz[8][8], int start){
	bool s[6]={true, true, true, true, true, true};//informacja czy jest jeszcze
	int droga[6]={100,100,100,100,100,100};
	int poprzednik[6]={-1,-1,-1,-1,-1,-1};
	int u;
	droga[start]=0;

	while (isEmpty(s,start)){
		u =minDistanceNode(droga, s, start);
			for(int i=0;i<8;i++){
				if(macierz[u][i]!=-1){
					if(droga[i]>droga[u]+macierz[u][i]){
							droga[i]=droga[u]+macierz[u][i];
							poprzednik[i]=u;


					}

				}
			}
	}
	for(int i=0;i<8;i++){
		cout<<droga[i]<< " ";
	}
	cout<<endl;
	for(int i=0;i<8;i++){
		cout<<poprzednik[i]<< " ";
	}
}



bool Graf::isEmpty(bool* s, int n){
	for(int i=0;i<n;i++)
		if(s[i] != false) return false;
	return true;
}

int Graf::minDistanceNode(int *d, bool* s, int n){
	int min = 0;
	while(s[min]==false) min++;

	for(int i=min+1;i<n;i++)
		if(s[i] && d[i]<d[min]) min = i;

	s[min]=false;
	return min;
}
Graf::~Graf() {
	// TODO Auto-generated destructor stub
}

/*
 #include <queue>


queue < int > q;

q.push(v); //dodaje na koniec

r=q.front();//odczytuje z pocz�tku

q.pop(); //usuwa z pocz�tku

q.empty(); //true je�li kolejka pusta
 */
