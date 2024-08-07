#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <array>
#include <random>
#include <stdexcept> 


using namespace std;


// void degerDegistir(int &ref) ;
/*
struct deneme
{
    int a;
    string b ;
};
*/

/*
struct iki
{
    int k;
    string l ;
};

struct bir
{
    int a;
    int b;
    string c ;
    iki iki ;
};
*/


//int main(){

/*  değişken tipleri
int ,float ,double ,char ,bool = (mantıksal veri tipi ör: if else lerde kullanılır) 
bunlar aynı sadece sondaki ek
bool veri tipine true veya false girebilirsin
*/ 

// c++ kodu çalıştırma

/*

cd Desktop/
g++ deneme.cpp -o deneme
./deneme

*/

/*

char d = 'd';
bool e = true ;
 //  \n ile aynı şey <<endl (end line)


cout << " d : " << d << endl;
cout << " e : " << e << endl;


cout << " 10 / 6 : " <<float(k) / l << endl;
cout << " 10 / 6 : " << k / float(l) << endl; // aynı şey


string str = "string str = tirnak içinde ne yazcaksan onu yaz." ;
cout << "girilen string : " << str << endl ;

string str1= "birinci stirng (stringler toplanabilir)." ; 
string str2="ikinci string (birazdan toplancaklar birinciyle)" ;
string str3 = str1 + str2 ;
cout << "girilen string : " << str3 << endl ;

string password ="safak" ;
string sifre;
cout << "sifre girin " <<endl ;
cin >> sifre ;
if (sifre == password){
    cout << "sifreyi dogru girdiniz." << endl ;
}
else {
    cout << "lutfen tekrar deneyin .." << endl ;
}
*/

//                  HESAP MAKİNESİ


/*
string islem;
int x,y ;
cout << "toplama islem :" << endl ;
cout << "cikarma islem :" << endl ;
cout << "carpma islem :" << endl ;
cout << "bolme islem :" << endl ;

cout << "islem secin (1,2,3,4)" ;
cin >> islem ;
if(islem == "1"){
    cout << "ilk sayi : ";
    cin >> x;
    cout << "ikinci sayi";
    cin >> y;
    cout << "x + y : " << x+y << endl;
}

else if(islem == "2"){
    cout << "ilk sayi : ";
    cin >> x;
    cout << "ikinci sayi";
    cin >> y;
    cout << "x - y : " << x-y << endl;
}

else if(islem == "3"){
    cout << "ilk sayi : ";
    cin >> x;
    cout << "ikinci sayi";
    cin >> y;
    cout << "x * y : " << x*y << endl;
}

else if(islem == "4"){
    cout << "ilk sayi : ";
    cin >> x;
    cout << "ikinci sayi";
    cin >> y;
    cout << "x / y : " << x/y << endl;
}
 else{
    cout << " gecerli islem sec .." ;
 }
*/

//                        İF , ELSE VE ELSE İF KULLANIMI

/*
string username = "enes" ;
string password = "2004" ;
string ad , sifre ;
cout << "kullanici adini gir :";
cin >> ad ;
cout << "sifre girin" ;
cin >> sifre ;

if(ad==username && sifre ==password){
    cout << "giris basarili ." << endl ;
}
else if(ad==username && sifre !=password){
    cout << "sifre hatali" << endl ;
}
else if (ad != username && sifre == password){
    cout << "kullanici adi hatali " << endl;
}
else {
    cout << " kullanıcı adi ve sifre hatali " << endl ;
}
*/

//                          DÖNGÜLER

/*
int i=0 ,j =0;
while (i<3 && j<4)
{
    cout << " i : " << i << " j : " << j << endl ;
    i++ ;
    j++ ;
}

for (; i < 5; i++)
{
    cout << "BASKET" << endl ;
    i++ ;
}


// do da ilk adım yanlış da olsa çalışır.
string a = "safak" ;
string b;
do
{
    cout << "parola ne ?" << endl ;
    cin >> b ;
    if(b != a){
        cout << " parola o degil" << endl ;
    }
} while (b != a);

cout << " aferin parola basak degil safakti" << endl ;
*/


//                         ÇOK BOYUTLU DİZİLER
/*
int dizi[2][2] ;
cout << "degerleri girin toplam 4 tane 2 boyutlu dizi " << endl ;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cin >> dizi[i][j] ;
    }
    
}
cout << "girdiginiz matris olsturuldu :. " << endl ;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cout << dizi[i][j] << " " ;
    }
    cout << endl ;
}
*/


//                  SWİTCH CASE
/*
int a;
cout << "islem secin " << endl ;
cin >> a ;
switch (a)
{
case 1:
    cout << " 1. islemi sectiniz." << endl ;
    break;
case 2 :
    cout << " 2. islemi sectiniz ." << endl ;
    break ;
case 3 :
    cout << " 3. islemi sectiniz ." << endl ;
default:
    cout << " gecerli bir islem girin " << endl ;
    break;
}
*/

     //            DİZİLER
/*
int array[3] ;
array[0] = 2 ;
array[1] = 5 ; 
array[2] = 10 ;
for (int i = 0; i < 3; i++)
{
    cout << i + 1 << ". sayi : " << array[i] << endl ;
}

cout << "sayi girin 2 tane " << endl ;
int dizi[2] ;
for (int i = 0; i <2; i++)
{
    cin >> dizi[i] ; 
}
for (int i = 0; i < 2; i++)
{
    cout << i + 1 << " . sayi : " << dizi[i] << endl ;
}
*/




//                          ALTTAKİ 2 TANESİ POİNTER LA İLGİLİ
/*
int dizi[3] = {1,2,3} ;
int *ptr = dizi ;
cout << ptr << ednl ;
cout << ptr + 1 << endl ;
// ptr +1 adresi (int olduğu için (int 4 byte)) 4 arttırır
cout << array << endl ;
cout << array + 1 << endl ;
cout << *(ptr + 1) << endl ;  //  bunun aynısı cout << ptr[1] << endl ;
*/

/*
int a =10 ;
int &ref = a ;   // baştaki & adres değil referansı simgeliyor
// ref = a ;  şeklinde tanımlama c++ da yapılamaz referanslar oluşturulduğu satırda eşitlenir
//pointerların böyle bir zorunluluğu yok.
ref ++ ;
cout << a << endl ; // a = 11 oldu , değişkenin değerini değiştirir
degerDegistir(a);
cout << a << endl ; //a=20
*/



//                  CONST LA İLGİLİ
/*
const int a =10;
a=25
//   const değişkeni değiştiremezsin hata verir , eğer değiştiriceksen pointer kullan.
*/

/*    //        struct yapısı (POİNTER DA VAR)
deneme d1;
cout << "sayi gir" << endl ;
cin >> d1.a >> endl ;
cout << "kelime gir" << endl ;
cin >> d1.b >> endl ;
cout << d1.a << endl ;
cout << d1.b << endl ;
d1.a=45 ;
cout << d1.a << endl ;
deneme* ptr = &d1 ;
cout << ptr ->d1.b << endl ;
*/

//                  STRUCT ORNEĞİ
/*
bir bir = {2,4,"bla",{8,"uwe"}} ;
cout << bir.a << endl ;
cout << bir.b << endl ;
cout << bir.c << endl ;
cout << bir.iki.k << endl ;
cout << bir.iki.l << endl ;
*/




//                      ÖZYİNELEMELİ FONX
/*
int Carp( int s1 , int s2){
if (s1==0||s2==0)
{
    return 0 ;
}

    return s1 + Carp(s1 , s2-1) ; // özyinelemeli
}


int carp(int s1,int s2){
    int x= s1;
for (int i = 0; i < (s2-1); i++)
{
    x += s1;
}
    return  x ;
}

int main (){
int s1,s2;
cout << " 2 sayi gir" << endl;
cin >> s1 >> s2;
cout << "carpimlari : " << carp(s1,s2) << endl ;
cout << "carpimlari : " << Carp(s1,s2) << endl ;
    return 0 ;
}
*/


//                                 " STRİNG " İLE İLGİLİ ŞEYLER
/*
int main(){

// string ler birer class tır . 
//String fonksiyonları class argümanlarını çağırır gibi çağırılır (.) konarak 

string str1 = "naber mudur" ;
string str2 = "kalinka" ;
int uz1 =str1.size() ;
int uz2 =str2.length();   // bu üsttekiyle ikisi uzunluğu gösteriyo

cout << uz1 << endl;
cout << uz2 << endl;
cout << str2[3] << endl;   //    kalinkanın 4. harfini basar
    
str1.insert(5,"mudur "); //   5.harften itibaren ekleme yapar !!

cout << endl;
cout << str1;
cout << str2;


swap(str1,str2); // yerlerini değiştirir

cout << endl;
cout << str1;
cout << str2;



    return 0 ;
}
*/


//          ********       sizeof  = Bir veri yapısının ne kadar yer kapladığını gösterir      ******

/*
int main(){

cout << " integer degerin kapladigi alan (byte) : " << sizeof(int) << endl ;
int a = 10 ;
cout << " integer a nin  degerinin kapladigi alan (byte) : " << sizeof(a) << endl ;
cout << " char degerin kapladigi alan (byte) : " << sizeof(char) << endl ;
cout << " bool degerin kapladigi alan (byte) : " << sizeof(bool) << endl ;
cout << " string degerin kapladigi alan (byte) : " << sizeof(string) << endl ;
cout << " float degerin kapladigi alan (byte) : " << sizeof(float) << endl ;
cout << " double degerin kapladigi alan (byte) : " << sizeof(double) << endl ;

char a[] = {1,2,3,4,5};
int *ptr;
ptr = a;
cout << ptr[3] << endl;

    return 0 ;
}
*/


        //                          NEW , DELETE KULLANIMI   POİNTER
/*
int main(){
int *ptr1 = new int ; // bir int değeri için yer ayırır, 4 byte yer ayirir
*ptr1 = 5 ;
delete ptr1; // ptr nin göstediği alani ram e geri verir .
//  eğer pyt birden fazla değer taşıyorsa önce köşeli parante konut  :    delete [] ptr               !!!!!!
int size ;
int *ptr ;

cout << "kac deger gircen : " << endl;
cin >> size;
ptr = new int[size];

for (int i = 0; i < size; i++)
{
    cout<<"deger : " ;
    cin << ptr[i] ; ;
}

cout << endl ;

for (int i = 0; i < size; i++)
{
    cout >> "Eleman : " << ptr[i] << endl ; ;
}
delete [] ptr ;

    return 0 ;
 }
*/


//                  FONX KULLANIMI FARKLI BAKIŞ AÇISI
/*
void selam(){
    cout << "merhaba" << endl;
}
void selam(string name){
    cout << "merhaba" << name<< endl;
}
void selam(string name1 ,string name2){
    cout << "merhaba" << name1 << " , " << name2<< endl;
}

int main(){
selam();
selam("ben");
selam("2","8");

    return 0 ;
}
*/

//          SINIF (CLASS) , NESNE YONELİMLİ PROGRAMLAMA
///*
/*
class student
{
private:

public:
    string name; // özellik
    int id;     // özellik

    void tellid(){   //  public method  (metod)

        cout << "id : " << name << endl ;
    }
};

int main(){

student student1;
cout << "ogrenci adi gir" << endl ;
cin >> student1.name;

student1.id = 28 ;
student1.tellid();

    return 0 ;
}
*/




//                  Null Pointer, Dangling Referans ve Pointerlar  !!!!!!!!!!!!
/*
int main(){

int *ptr = nullptr ;    //  pointer herhangi bir değere eşit değil 
//  Başta hep böyle başla bu yol daha güvenli
ptr = new int ; // böyle yaparak pointer ın sadece integer değer taşıyacağını söylemiş olduk
int a = 35;
*ptr = a;

delete ptr;  // pointerla işimiz bittiğinde onu siler
// dangling referans : Pointer ım gösterdiği yerde geçerli bir obje olmayan referanslardır.
// delete ptr yaptığımız andan itibaren ptr nin ramde tuttuğu alan bilgisayara verilecek
// Ve bilgisayar bu alanı farklı bir şekilde kullanacaktır bu yüzden ptr a değer atarsak çalışma hatası alırız
cout << *ptr << endl ;


    return 0 ;
}
// alttaki de HATALI üstteki de HATALI
int main(){
int *ptr = nullptr;
int *ptr2 = nullptr;

ptr = new int ;
*ptr =10;
ptr2 = ptr;
delete ptr;

*ptr2 = 20 ;
cout << *ptr2 << endl ;

    return 0 ;
}
*/



//                     Foreach Döngüsü
/*
int main(){

int a[] = {10,20,30,40,50};
for (int i = 0; i < 5; i++)
{
    cout << a[i] << endl ;
}

//    Bu ikisi aynı şey

for (int item : a)
{
    cout << item << endl ;
}

for (int item : a)
{
    cout << 2*item << endl ;
}

    return  0 ;
}
*/


/*
//                          RASTGELE SAYI ÜRETME

int main(){

int rg;
srand (time(NULL)) ; //seed     ,   zaman değerinden rastgele değer alıyor

rg = rand() % 10 + 1 ;  
cout << "satgele sayi : " <<  rg << endl ;
cout << endl ;
cout << "atılan zardan rastgele gelen sayı : " ;
rg = rand() % 6 + 1 ;   // 1 ile 6 arasında      eğer sadece %6 olsaydı 0 ile 5 arasında olurdu .
cout << rg << endl ; //    %2 olsaydı yazı tura   0 ve 1 değeri .

    return 0 ;
}
*/


/*
//             Time Fonx kullanmadan rastgele sayi üretmek  (DETAYLICA)
int main(){

// srand(0) ; // bu şekilde hep aynı sonuç üretiliyo , tek seferlik rastgele sayi üretiyor .
 // seed e 0 ı atıyo daha sonra 0'ı kullanarak rastgele sayi üretiyor daha sonra bulduğu sonuçtan bi sayı üretiyo

//srand(time(0)) ;  // her seferinde başka bi sayı üretmek için zaman fonx kullanılır. Bu şekilde de tamamen rastgele olmaz
// aşırı hızlı şekilde kodu tekrar tekrar çalıştırırsanız aynı sonucu verebilir

//sonucun tbiraz daha farklılık göstermesi için yüksek bi asal sayıyla çarpılır.Gene de tamamen olmayabilir.
srand(time(0)*137137) ;

int rasSayi1 = rand();
cout << rasSayi1 << endl ;

int rasSayi2 = rand();
cout << rasSayi2 << endl ;

cout << endl ;

for (int i = 0; i < 20; i++) // rastgele 20 sayi basar
{
    cout << 5 + (rand() % 5) << endl;  //  10 ile 5 arasındaki sayıları basar
}

cout << endl ;

int ilk = 6 ;
int son = 15 ;

int aralik = son - ilk ;

 for (int i = 0; i < 20; i++)
 {
    // cout << ilk + ( rand() % (son - ilk) ) << endl ;
    cout << ilk +(rand() % aralik) << endl ;
 }
 
    return 0 ;
}

*/


/*
//                      MATH KÜTÜPHANESİ


int main(){

//          TRİGONOMETRİK DEĞERLER
double  PI = atan(1.0) * 4 ;// Pi nin değeri    // PI = 3.14; böyle de yapılabilir
//  pi = 180 derece
cout << sin(PI/2) << endl ;  //  burada sin in içindeki değer radyandır.
cout << asin(1) << endl ; //  asin  = arc sin 
cout << tan(PI/4) << endl ;
cout << endl ;

cout << pow(2,6) << endl ; // 2 üssü 6   , 2^6
cout << pow(3,4) << endl ; // 3 üssü 4   , 3^4
cout << endl ;

cout << sqrt(25) <<endl ;  // 4 ün karekökü
cout << sqrt(24) <<endl ;
cout << endl ;

cout << log(100) << endl ; // log yazarsak taban değeri otomatikman " e " olur
cout << log10(100) << endl ; // taban değerini 10 yaptık
// cout << log5(25) << endl ; // tabana kafana göre değer atayamazsın BU HATALI
 cout << endl ;

 double s = 4.8 ;
 cout << floor(s) << endl ;  // bir önceki sayıya yuvarlar
 cout << ceil(s) << endl ;  // bir sonraki sayıya yuvarlar
 cout << round(s) << endl ;  // yakın olduğu sayıya yuvarlar
 // .5 ve üzeriyse sonraki sayıya , .5 den alttaysa öncekine yuvarlar.
cout << endl ;

cout << abs(-10) << endl ; // Mutlak Değer alır
// 0 a olan uzaklığı bulur
cout  << endl ;

cout << hypot(3,4) << endl ; // HİPOTENÜS hesaplar. Cvp 5 .
cout << endl ;
    return 0 ;
    
}
*/

//              CONSTUCTOR LARLA İLGİLİ
/*
class dikdortgen
{
private:
    int kenar1;
    int kenar2;
public:
    dikdortgen(){
        kenar1 = 1;
        kenar2 = 2;
    }
    dikdortgen(int a , int b){ 
    // bu 2 dik4gen constuctur ın parametreleri farklı , 2 aytı fonx lar
        kenar1 = a;
        kenar2 = b;
    }
    // set fonx a gerek kalmadı
    
    int getAlan(){
        return kenar1 * kenar2 ;
    }
};




int main(){
dikdortgen dik(5,6); // constructorın içini değişken oluştururken tanımlarız
cout << "alan : " << dik.getAlan() << endl ;

    return 0 ;
}
*/

//          CLASS İÇİNE CLASS TANIMLAMA
/*
class sekil
{
private:

    string adi;
    int koseSayi;
    int kenarUz;
public:
    void sekilAdiAta(string a) // const
    {
        adi = a;
    }

    void sekilKoseAta(int b) // const
    {
        koseSayi = b ;
    }
    void sekilKenarUz(int c){
        kenarUz = c ;
    }

    void bastir(string a,int b,int c){
        cout << "Seklin adi : " << adi << endl;
        cout << "Seklin kenar ve kose sayisi : " << koseSayi << endl ;
        cout << "Seklin kenar uzunlugu : " << kenarUz << endl;
    }
    void cevre(int b,int c){
        cout << "Cevresi : " << b*c << endl;
    }
};

class kare : public sekil
{
private:
    
public:
    kare(string a,int b,int c){
        sekilAdiAta(a);
        sekilKoseAta(b);
        sekilKenarUz(c);
    }
    
};

class ucgen : public sekil
{
private:
    
public:
    ucgen(string a,int b,int c){
        sekilAdiAta(a);
        sekilKoseAta(b);
        sekilKenarUz(c);
    }   
};


int main(){

string a;
int b,c;

cout << "Sirayla seklin isimi ve kenar sayisini ve uzunlugunu gir " << endl;
cin >> a >> b >> c;
kare k(a,b,c);
k.bastir(a,b,c);
k.cevre(b,c);

cout << endl ;

cout << "Sirayla seklin isimi ve kenar sayisini gir " << endl;
cin >> a >> b >> c;
ucgen u(a,b,c);
u.bastir(a,b,c);
u.cevre(b,c);

    return 0 ;
}
*/

/*
//                  THİS ->
class ornek
{
private:
    string ad;
    int id;
public:
    ornek(string ad,int id){
        this->ad = ad ;
        this->id = id ;
    }
    void showInfos(){
        cout << "Ad : " << this->ad << endl;
        cout << "id : " << this->id << endl;
    }
};

int main(){
ornek o("Bla",39);
o.showInfos();
    return 0; 
}
*/



/*
void degerDegistir(int &ref){
    ref=20;
}
*/


//             Class   Static   Private   Değişken  /  Değişik şeyler de var
/*
class Gamer
{
private:
    
public:

static int gamers;
    Gamer(){
        gamers++;
        cout << "Yani oyuncu katildi ." << endl ;
    }
    static void cube(int x){
        cout << x * x << endl ;
    }
    static void add2(int x){
        cout << x + 2 << endl ;
    }
};

int Gamer::gamers = 0 ;

int main(){
    Gamer gamer1 ;
    Gamer gamer2 ;
    Gamer gamer3 ;
    Gamer gamer4 ;
cout << Gamer::gamers << endl ;

Gamer::cube(3) ;

Gamer::add2(18) ;

    return 0 ;
}
*/


//                          FRİEND   FONKS  VE   CLASS
/*
class Employee
{
private:
    string name ;
    int age ;
    int salary ;
public:
    Employee(string name , int age , int salary){
        this->name = name ;
        this->age = age ;
        this->salary = salary ;
    }
    

    friend class Test ;
    

//    friend void showInfos(Employee employee);

};

//    void showInfos(Employee employee){
   //     cout << employee.name << " " << employee.age << " " << employee.salary << endl ;
    }

class Test // Üstteki classı kapsaması için altına yazılmalıdır !!!
{
private:
    
public:
    Test();

    static void showInfos(Employee employee){
    cout << employee.name << " " << employee.age << " " << employee.salary << endl ;
    }
    
};

// Destructor kulanamazsın static int hata veriyo

int main(){

//  Employee employee("Denji",18,39) ;
//  showInfos(employee) ; 

Employee employee("Denji",18,39) ;
Test::showInfos(employee) ;
    return 0 ;
}
*/


// Const metodla const olmayab bir şeyi çağıramazsın tersi de olmaz

//                          std FONNKSİYONLARI
/*
int main(){
int num = 42;
    double pi = 3.14159;
    cout << "Sayi: " << num << endl; // Sayi: 42
    cout << "Pi: " << pi << endl; // Pi: 3.14159
    cout << "Pi: " << fixed << pi << endl; // Pi: 3.141590
    cout << "Pi: " << setprecision(3) << pi << endl; // Pi: 3.142
   return 0 ;
   }
 */  


//                VEKTÖRLER
/*
int main()
{
    vector<int> sayi(5);
    sayi.push_back(4);
    for (int i = 0; i < sayi.size(); i++)
    {
        cout << i+1 << ". eleman : " << sayi[i] << endl;
    }
    cout << endl;
    cout << "ilk eleman : " << sayi.front();
    cout << "son eleman : " << sayi.back();

    vector<int> v1;
    v1.assign(5,23) ;
    for (int i = 0; i < 5; i++)
    {
        cout << v1[i] << " " ;
    }
    cout << endl ;
    cout << v1.size();
    cout << endl ;
    v1.pop_back();
    for (int i = 0; i < 5; i++)
    {
        cout << v1[i] << " " ;
    }
    cout << v1.size();

    int toplam = 0 ;
    while (!v1.empty())
    {
        toplam += v1.back();
        v1.pop_back();
    }
    cout << v1.size();
    cout << "v1 vektoru elamanlari toplami : " << toplam << endl ;

    vector<int>v2(sayi) ;
    cout << v2.size() << endl ;
    cout << "3. eleman : " << v2[3] ;
    v2[3] = 316 ;
    cout << "yeni 3. eleman : " << v2[3] ;

    return 0 ;
}
*/

//                 E N U M 
/*
enum Renkler { SARI, MAVI, MOR };
// enum numaralandırma yapar

int main() {
    Renkler r1 = SARI;
    cout << r1 << endl; // 0 basar

    return 0;
}
*/

//                  S T R U C T
/*
struct berserk
{
    string anakarakter;
    int bolumSure;    
};

int main() {
   
    berserk b;
    cout << "karakter adini gir" << endl ;
    cin >> b.anakarakter ;
     b.bolumSure = 20 ;
    cout << endl ;
    cout << b.anakarakter ;
    cout << b.bolumSure ;
    cout << endl ;
    berserk b1[3];
    for(int i =0;i<3;i++){
        cin >> berserk b1[i].anakarakter ;
        cin >> berserk b1[i].bolumSure ;
    }

for(int i =0;i<3;i++){
        cout << berserk b1[i].anakarakter << endl ;
        cout << berserk b1[i].bolumSure << endl ;
    }

    return 0;
}
*/


//                     goto  KOMUTU    /    Collatz Sanısı
/*
int main()
{
    int sayi ;
    cout << "1 haric pozitif bir sayi gir " << endl ;
    cin >> sayi ;
    cout << endl;
    cout << sayi << endl;
    enes:
    if (sayi%2==0)
    {
        sayi = sayi/2 ;
    }
    else
    {
        sayi = (sayi*3)+1 ;
    }

    cout << sayi << endl ;

    if (sayi != 1)
    {
        goto enes;
    }
   
    return 0;
}

*/








 