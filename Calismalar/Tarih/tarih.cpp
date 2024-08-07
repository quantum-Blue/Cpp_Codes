#include <iostream>
#include <stdexcept>
#include <array>
#include "Tarih.h"

using namespace std;

Tarih::Tarih(int g , int a, int y){
    if (a>0 && a<=12){
        ay = a;
    }
    
    setYil(y);
    gun = kontrolGun(g);
    }

    Tarih::~Tarih(){
        cout << "Alttaki tarih nesnesi yok edildi." << endl;
        tarihYazdir();
    }

    int Tarih::getGun() const{
        return gun;
    }

    int Tarih::getAy() const{
        return ay;
    }

    int Tarih::getYil() const{
        return yil;
    }


    void Tarih::setGun(int g){
        gun = kontrolGun(g);
    }

    void Tarih::setAy(int a){
        if (a > 0 && a <= 12)
        {
            ay = a ;
        }       
    }
    void Tarih::setYil(int y){
        if ((y>0 && y<2023) || ((y==2023 && ay<5) || (y==2023 && ay==5 && gun <=8)))
        {
            yil = y;
        }
    }

    void Tarih::tarihYazdir(){
        cout << gun << "/" << ay << "/" << yil << endl;
    }

    int Tarih::kontrolGun(int g) const {
        static const array <int,13> ayaGoreGunler={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if (g > 0 && g <= ayaGoreGunler[ay])
        return g;

        if (ay==2 && g==29 && ( yil%400==0 || (yil%4==0 && yil%100!=0)))
        return g ;

        throw
            invalid_argument("yil veya ay icin yanlis bilgi girdiniz.");
    }

    




