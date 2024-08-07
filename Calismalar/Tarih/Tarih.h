#ifndef TARIH_H
#define TARIH_H
#include <iostream>

using namespace std ;


class Tarih
{
private:
    int gun;
    int ay;
    int yil;
    int kontrolGun(int) const ;

public:
    
    explicit Tarih(int g=1 , int a=1, int y=2000);
    ~Tarih();

    void setGun(int g) ;
    void setAy(int a) ;
    void setYil(int y) ;

    int getGun() const ;
    int getAy() const ;
    int getYil() const ;

    void tarihYazdir();
};


#endif