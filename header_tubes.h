#ifndef HEADER_TUBES_H_INCLUDED
#define HEADER_TUBES_H_INCLUDED
#include <iostream>
using namespace std;
#define first(l) l.first
#define last(l) l.last
#define rel(p) p->rel
#define next(p) p->next
#define prev(p) p->prev
#define nama(p) p->nama
typedef struct elmList *address;
struct list{
    address first, last;
};

struct elmList{
    address prev, rel, next;
    string nama;
};
void createList(list &l);
void createElm(string nama, address &p);
void addElm(list &l, address p);
void addPassenger(address &p, address q);
bool cekDriver(list l, address p);
void printList(list l);
void printRel(address r);
void printRelByString(string driver, list l);
address copyElm(list l, address p);
address searchElm(list l, string s);
void addPassengerComplete(address &p, list passenger, address q);
#endif // HEADER_TUBES_H_INCLUDED
