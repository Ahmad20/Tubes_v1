#include "header_tubes.h"

void createList(list &l){
    first(l)=NULL;
    last(l)=NULL;
}
void createElm(string nama, address &p){
    p=new elmList;
    prev(p)=NULL;
    nama(p)=nama;
    rel(p)=NULL;
    next(p)=NULL;
}
void addElm(list &l, address p){
    if (first(l)==NULL){
        first(l)=p;
        last(l)=p;
    }else{
        next(p)=first(l);
        first(l)=p;
    }
}
void remElm(list &l, address &p){
    address q=searchElm(l,nama(p));
    if (q==p){

    }
}
void addPassenger(address &p, address q){
    address r=rel(p);
    if ((rel(p)!=NULL)){
        while (rel(r)!=NULL){
            r=rel(r);
        }
        rel(r)=q;
    }else{
        rel(p)=q;
    }
}
void addPassengerComplete(address &p, list passenger, address q){
    address r;
    if (rel(p)==NULL){///rel driver belum
        if (prev(q)!=NULL){///prev penumpang ada
           // cout<<"b-a"<<endl;
//            r=copyElm(passenger,q);
            r=searchElm(passenger,nama(q));
            rel(r)=NULL;
            rel(p)=r;
            prev(r)=p;

        }else{///prev penumpang belum
           // cout<<"b-b"<<endl;
            rel(p)=q;
            prev(q)=p;
        }
    }else{///rel driver ada
        if (prev(q)==NULL){///prev penumpang belum
           // cout<<"a-b"<<endl;
            r=rel(p);
            while (rel(r)!=NULL){
                r=rel(r);
            }
            rel(r)=q;
        }else{///prev penumpang ada
            //cout<<"a-a"<<endl;
//            r=copyElm(passenger, q);
            r=searchElm(passenger,nama(q));
            rel(r)=NULL;
            prev(r)=p;
            address a=rel(p);
            while (rel(a)!=NULL){
                a=rel(a);
            }
            rel(a)=r;
        }
    }
}
address copyElm(list l, address p){
    address q=first(l);
    while (q!=p&&q!=last(l)){
        q=next(q);
    }
    if (q==p){
        return q;
    }
}
address searchElm(list l, string s){
    address q=first(l);
    while (next(q)!=NULL&&nama(q)!=s){
        q=next(q);
    }
    if(nama(q)==s){
        return q;
    }
}
void printRel(address p){
    while (rel(p)!=NULL){
        cout<<nama(p)<<"!";
        p=rel(p);
    }
    cout<<nama(rel(p))<<"!";
}
void printRelByString(string driver, list l){
    address d=first(l);
    while (nama(d)!=driver&&d!=last(l)){
        d=next(d);
    }
    if (nama(d)==driver){
        address r=rel(d);
        while (r!=NULL){
            cout<<nama(r)<<"@";
            r=rel(r);
        }
    }else{
        cout<<"belum ada penumpang"<<endl;
    }

}
void printList(list l){
    address q=first(l);
    while (q!=last(l)){
        cout<<nama(q)<<"-->";
        q=next(q);
    }
   cout<<nama(q)<<endl;
}

