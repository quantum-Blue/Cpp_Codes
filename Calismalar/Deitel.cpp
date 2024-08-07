#include <iostream>
#include <iomanip>
#include <fstream>
#include <time.h>
#include <random>


//Geliştirici: Ali Efe Sarıoğlu
//Öğrenci No: B231200385
//Ödev No: 3
//Ödev Konusu: Sipariş Planlama


using namespace std;

void diziYazdir(int*dizi);



int main() {
					//Rastgele değerler üretebilmek için random kütüphanesini kullandım.
	random_device rd;
	uniform_int_distribution<int>siparis(100, 1000);

			//Dizi oluşturup rastgele değerler atayan komutlar
	int dizi[10];
	for (int i = 0; i < 10; ++i) {
		dizi[i] = siparis(rd);
	}
	
	//Siparişleriş yazdıran ödev fonksiyonunu çağırdım
	diziYazdir(dizi);

	

}


void diziYazdir(int*dizi) {

	//Ekrana başlık yazdıran kodlar
	cout << setw(30) << "Siparis Listesi" << endl << "-----------------------------------------------------" << endl
		<< "Musteri NO" << setw(10) << "Adres" << setw(30) << "Tutar" << endl;


									//En yüksek ve en düşük tutarı belirleyen komutlar
	int* dusuk = dizi;
	int* yuksek = dizi;

	for (int i = 0; i < 10; ++i) {
	
		if (dizi[i] < *dusuk) {
			dusuk = &dizi[i];
		}												
		else if (dizi[i] > *yuksek) {
			yuksek = &dizi[i];
		}
	}
	
									//Diziyi Ekrana Yazdıran komutlar
	for (int j=0; j<10 ;++j) {
		
		
		if (&dizi[j] == dusuk) {
			cout<<"\033[1;31m"<<setw(3) << j << setw(25) << &dizi[j] << setw(20) << dizi[j] << "TL (En Dusuk Siparis)\033[0m" << endl;
		}
		else if (&dizi[j] == yuksek) {
			cout<<"\033[1;32m"<< setw(3) << j << setw(25) << &dizi[j] << setw(20) << dizi[j] << "TL (En Yuksek Siparis)\033[0m" << endl;
		}
		else
		cout <<setw(3)<< j << setw(25) << &dizi[j] << setw(20) << dizi[j]<<"TL"<<endl;

						
	}
						//Verileri Dosyaya yazdıran komutlar

		fstream dosya("odev.txt", ios::in | ios::out);
		if (!dosya) {
			cerr << "Dosya Bulunamadi!!";
		}
		else {

			//Dosyaya başlık yazdıran komnutlar
			dosya << setw(30) << "Siparis Listesi" << endl << "-----------------------------------------------------" << endl
				<< "Musteri NO" << setw(10) << "Adres" << setw(30) << "Tutar" << endl;

			//Siparişleri ve adreslerini dosyaya yazdıran komutlar
			for (int j = 0, *ptr = dizi; ptr < dizi + 10; ++ptr, ++j) {
				dosya << setw(3) << j << setw(25) << ptr << setw(20) << *ptr << "TL" << endl;
			}
		}


		//Diziyi Kopyalayan komutlar (nedeni kurye dağıtım sırası karıştırıldığında anlaşılacak)
		int yedekDizi[10];
		for (int i = 0; i < 10; ++i) {
			yedekDizi[i] = dizi[i];
		}

					//Başlık kısmı
		cout<< "\n------------------------------------" << endl << setw(25) << "Dagitim Rotasi" << endl
			<< "------------------------------------" << endl;
		dosya << "\n------------------------------------" << endl << setw(25) << "Dagitim Rotasi" << endl
			<< "------------------------------------" << endl;

		//Diziyi karıştırıp ekrana ve dosyaya yazdıran komutlar
		int toplamtutar=0;
		for (int i = 0; i < 10; ++i) {
			random_device rd;
			uniform_int_distribution<int>rastgeleIndex(0, 9);
			int index = rastgeleIndex(rd);
			toplamtutar += dizi[index];
			while (dizi[index] == 0) {
				index = rastgeleIndex(rd);
			}
			cout << setw(3) << index << setw(25) << &dizi[index] << setw(20) << dizi[index] << "TL" << endl;
			dosya << setw(3) << index << setw(25) << &dizi[index] << setw(20) << dizi[index] << "TL" << endl;
			dizi[index] = 0;
		}

				//Sonuç kısmı
		cout << "------------------------------------";
		dosya<< "------------------------------------";
		cout << "\n Toplam Tutar: " << toplamtutar<<"TL" << endl;
		dosya << "\n Toplam Tutar: " << toplamtutar <<"TL" << endl;

		//Kopyalanan diziyi tekrar ana diziye aktaran komutlar
		for (int i = 0; i < 10; ++i) {
			dizi[i] = yedekDizi[i];
		}


			//Ekrana Matris  yazdıran komutlar
		cout << "------------------------------------\n"<<endl;
		dosya << "------------------------------------\n"<<endl;
		for (int i = 0; i < 10; ++i) {

			for (int j = 0; j < 10; ++j) {

				cout << setw(5)<<left<< dizi[i] - dizi[j] << " ";
				dosya << setw(5) << dizi[i] - dizi[j] << " ";
			}
			dosya << endl << endl;
			cout << endl << endl;

		}
		dosya.close();


}







