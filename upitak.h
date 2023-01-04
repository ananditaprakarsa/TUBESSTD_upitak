#ifndef UPITAK_H_INCLUDED
#define UPITAK_H_INCLUDED


#include <iostream>
using namespace std;
#define first(List_parent) ((List_parent).first)
#define last(List_parent) ((List_parent).last)
#define infoP(P) (P)->infoP
#define infoC(P) (P)->infoC
#define next(P) (P)->next
#define prev(P) (P)->prev
#define tht(P) (P)->tht
#define nil NULL

/*
anandita prakarsa - 1301213132
lutfiah sania - 1301213165
IF 45 02
*/

typedef struct elm_parent *adr_parent;
typedef struct elm_child *adr_child;

struct parent {
  string nama_bioskop;
  string lokasi;
  int jumlah_studio;
};

struct elm_parent {
  parent infoP;
  adr_parent next;
  adr_parent prev;
};

struct child {
  string judul_film;
  string durasi_tayang;
  string genre;
};

struct elm_child {
  child infoC;
  adr_child next;
  adr_child prev;
  adr_parent tht;
};

struct mllP {
  adr_parent first;
  adr_parent last;
};

struct mllC {
  adr_child first;
  adr_child last;
};

void Create_listP(mllP &List_parent);
void newElm_parent(parent infoP, adr_parent &p);
void insertLast_parent(mllP &List_parent, adr_parent p);
void deleteFirst_parent(mllP &List_parent, mllC &List_child, adr_parent &p);
void showData_parent(mllP List_parent);
void showData_parentOfX(mllP List_parent, adr_child p);
adr_parent find_parent(mllP List_parent, string nama_parent);

void Create_listC(mllC &List_child);
void newElm_child(child infoC, adr_child &c);
void insertLast_child(mllC &List_child, adr_child c);
void deleteFirst_child(mllC &List_child, adr_child &c);
void showData_child(mllC List_Child);
void showData_childOfX(mllC List_Child, adr_parent p);
adr_child find_child(mllC List_child, adr_parent p, string judul);
void deleteAfter_child(mllC &List_child, adr_child prec, adr_child &c);
void deleteFirst_childOfX(mllC &List_child, adr_parent p);

void addRelasi(adr_parent &p, adr_child &c);
void deleteRelasi(mllC &List_child);
void showAllData(mllP List_parent, mllC List_child);

int jumlah(mllC &List_child);
void showSomeData(mllP List_parent, mllC List_child);

#endif // TUBESKELOMPOK2_H_INCLUDED
