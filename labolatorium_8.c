#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define unpol 999999
#define MAX 11

void prim (int grf[MAX] [MAX], int n, int startNode) {
int rodzic[MAX], waga[MAX]; //rodzic ma za zadanie przechowywac skonstruowane drzewo, lecz waga to treści, ktre zostały uzyte do wyszukania krawedzi o min wadze
bool MDS[MAX];
int i, j:
//na poczatku zakładamy, ze nie ma zadnych polaczen
for (¡=0;i<n;i++) {
waga[i]=unpol;
MDS[i]=false;
}
//inicjacja indeksu startNode o wartosci tabel
waga[startNode]=0:
rodzic[startNode]=-1;

for (¡=0;i<n-1;i++){
    //szukanie minimalnej wagi z wierzcholkow, nie istniejących w MDS
int min= unpol, minIndex;
for (int j = 0; j < n; j++) {
if (MDS[j]== false && waga[i] < min) {
min= waga[j];
minIndex= j:
}}}
//dodawanie wierzcholka za min wagą do dołączonych wierzchowkow
MDS[minIndex]=true:
for (j=0; j<n; j++) {
//MDS jest false dla wierzcholkow, ktore nie sa uwzglednione w drzewie
//gdy sąsiedni wierzchołek jest mniejszy niz aktualny to aktualizuj go
if (grf[minIndex] [j]>0 && MDS[j]==false && grf[minIndex] [j] <waga[j]){
//waga drogi do wierzchołka
rodzic[j]= minIndex;
waga[j]=grf[minIndex][j];
}
}
}