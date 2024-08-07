#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std ;

class Hamburger
{
private:
    char menuAdi;
    int menuBoyutu;
    // double menuFiyati; 
public:

/*  Hamburger(string menuAdi ,int menuBoyutu ,double menuFiyati){
        this-> string menuAdi = menuAdi ;
        this-> int menuBoyutu = menuBoyutu ;
        this-> double menuFiyati = menuFiyati ;
    }  */
    void set1(char a){
        menuAdi = a ;
    }
    void set2(int b){
        menuBoyutu = b ;
    }
/*    void set3(double c){
        menuFiyati = c ;
    }*/
   // ~Hamburger();   destructor ( constructor ın zıttı , silmeye yarıyor)
   char get1(){
    return menuAdi ;
   }
   int get2(){
    return menuBoyutu ;
   }
/* double get3(){
    return menuFiyati ;
   }*/
   
};



int main(){
Hamburger h;
// h.set1()       //char x1;
// h.set2()            //int x2;
cout << "Hangi menu (A,B) istersiniz ? " << endl;
char x1;
cin >> x1 ;
h.set1(x1);
int x2 ;
switch (h.get1())
{
case 'A':
    cout << "Hangi Boyut (1,2) istersiniz ? " << endl;
    cin >> x2 ;
    h.set2(x2);
    switch (h.get2())
    {
    case 1:
        cout << h.get1() << " menusu , " << h.get2() << " boyutu = 15 Tl " << endl;
        break;

    case 2 :
        cout << h.get1() << " menusu , " << h.get2() << " boyutu = 22 Tl " << endl;
        break;
default:
    cout << "Gecerli bir islem girin .." << endl ;
        break;
    }
    break;

case 'B' :

cout << "Hangi Boyut (1,2)" << endl;
    cin >> x2 ;
    h.set2(x2);
    switch (h.get2())
    {
    case 1:
        cout << h.get1() << " menusu , " << h.get2() << " boyutu = 20 Tl " << endl;
        break;

    case 2 :
        cout << h.get1() << " menusu , " << h.get2() << " boyutu = 27 Tl " << endl;
        break;
default:
    cout << "Gecerli bir islem girin .." << endl ;
        break;
    }
    break;

default:
cout << "Gecerli bir islem girin .." << endl ;
    break;
}

    return 0 ;
}

