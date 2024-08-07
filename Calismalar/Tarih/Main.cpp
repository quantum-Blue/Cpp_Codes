#include <iostream>
#include "Tarih.h"

int main(){
    Tarih T;
    T.tarihYazdir();
    
    Tarih T1(20,4);
    T1.tarihYazdir();

    Tarih T2(20,4,2023);
    T2.tarihYazdir();

    Tarih T3(29,2,2023);
    T3.tarihYazdir();

    return 0 ;
}