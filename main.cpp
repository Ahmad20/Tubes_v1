#include <iostream>
#include "header_tubes.h"
using namespace std;

int main()
{

    list driver, passenger;
    address p,q;
    createList(driver);
    createList(passenger);

    ///add driver
    createElm("a", p);
    addElm(driver, p);
    createElm("b", p);
    addElm(driver, p);
    createElm("c", p);
    addElm(driver, p);
    printList(driver);
    ///add passenger
    createElm("s", q);
    addElm(passenger, q);
    createElm("t", q);
    addElm(passenger, q);
    createElm("u", q);
    addElm(passenger, q);
    createElm("v", q);
    addElm(passenger, q);
    createElm("x", q);
    addElm(passenger, q);
    createElm("y", q);
    addElm(passenger, q);
    createElm("z", q);
    addElm(passenger, q);
    printList(passenger);
    ///add relation
    p=searchElm(driver,"a");
    q=searchElm(passenger,"z");
    addPassengerComplete(p, passenger, q);
    q=searchElm(passenger,"x");
    addPassengerComplete(p, passenger, q);
    q=searchElm(passenger,"y");
    addPassengerComplete(p, passenger, q);
    cout<<"<1 rel of a>"<<endl;
    cout<<nama(rel(p))<<"-->"<<nama(rel(rel(p)))<<"-->"<<nama(rel(rel(rel(p))));
    cout<<endl;

    p=searchElm(driver,"b");
    q=searchElm(passenger,"z");
    addPassengerComplete(p, passenger, q);
    q=searchElm(passenger,"s");
    addPassengerComplete(p, passenger, q);
    q=searchElm(passenger,"y");
    addPassengerComplete(p, passenger, q);
    cout<<"<2 rel of b>"<<endl;
    cout<<nama(rel(p))<<"-->"<<nama(rel(rel(p)))<<"-->"<<nama(rel(rel(rel(p))));
    cout<<endl;

    p=searchElm(driver,"c");
    q=searchElm(passenger,"y");
    addPassengerComplete(p, passenger, q);
    q=searchElm(passenger,"x");
    addPassengerComplete(p, passenger, q);
    cout<<"<1 rel of c>"<<endl;
    cout<<nama(rel(p))<<"-->"<<nama(rel(rel(p)))<<"-->"<<nama(rel(rel(rel(p))));
    cout<<endl;
    printList(driver);
    printList(passenger);
//    q=searchElm(passenger,"u");
//    addPassengerComplete(p, passenger, q);


//    p=searchElm(driver,"a");
//    printRel(p);
//    ///rel driver belum ke rel penumpang belum
//    addPassengerComplete(p,passenger,q);
//    printRel(p);
//
//    createElm("dhe", q);
//    addElm(passenger, q);
//    printList(passenger);
//    ///rel driver sudah ke rel penumpang belum
//    addPassengerComplete(p,passenger,q);
//
//    createElm("julius", p);
//    addElm(driver, p);
//    printList(driver);
//    ///rel driver belum ke rel driver sudah
//    q=searchElm(passenger,"dhe");
//    addPassengerComplete(p,passenger,q);
//
//    cout<<nama(p)<<"-->"<<nama(rel(p))<<"-->"<<(rel(rel(p)))<<endl;
//    cout<<nama(next(q))<<endl;
//
//    q=searchElm(passenger,"dhe");
//    addPassengerComplete(p,passenger,q);
//    p=searchElm(driver,"ahmad");
//    cout<<nama(p)<<"-->"<<nama(rel(p))<<"-->"<<nama(rel(rel(p)))<<endl;
//
//    createElm("doni",p);
//    addElm(passenger, p);
////    q=searchElm(passenger,"dhe");
//    printList(passenger);
//    printList(driver);
//    cout<<searchElm(driver,"ahma");
    return 0;
}
