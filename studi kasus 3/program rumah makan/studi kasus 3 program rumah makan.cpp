#include <iostream>
using namespace std;

class Hitung
{
public:
    void input();
    void proses();
    void output();
private:
    int bnyk_aymgp;
	  int bnyk_aymgr;
    int bnyk_udggr;
    int bnyk_cmigr;
    int bnyk_aymbkr;
	  int hrg_aymgp = 21000;
	  int hrg_aymgr = 17000;
    int hrg_udggr = 19000;
    int hrg_cmigr = 20000;
    int hrg_aymbkr = 25000;
    int jarak;
    float total;
    int ongkir;
    int ongkir2;
    int diskon;
    int hasil;
    float t2;
};

void Hitung::input()
{
      cout << "Aplikasi Penjualan Makanan \n";
			cout << "Menu yang tersedia : \n";
			cout << "1) Ayam Geprek  Rp. 21000 \n";
			cout << "2) Ayam Goreng   Rp. 17000 \n";
			cout << "3) Udang Goreng Rp. 19000 \n";
			cout << "4) Cumi Goreng Rp. 20000\n";
			cout << "5) Ayam Bakar Rp. 25000\n\n";
			cout << "Pesan Ayam Geprek  -> "; cin >> bnyk_aymgp;
			cout << "Pesan Ayam Goreng  -> "; cin >> bnyk_aymgr;
			cout << "Pesan Udang Goreng -> "; cin >> bnyk_udggr;
			cout << "Pesan Cumi Goreng  -> "; cin >> bnyk_cmigr;
			cout << "Pesan Ayam Bakar   -> "; cin >> bnyk_aymbkr;
            cout << "Masukkan jarak (km) -> " ; cin >> jarak;
}   

void Hitung::proses()
{
    total=(hrg_aymgp*bnyk_aymgp) + (hrg_aymgr*bnyk_aymgr) + (hrg_udggr*bnyk_udggr) + (hrg_cmigr*bnyk_cmigr) + (hrg_aymbkr*bnyk_aymbkr);
    diskon =0;
            t2 = float(total);
            
            if(jarak<3){
                ongkir=15000;}
            if(jarak>=3){
                ongkir=25000;}
            if(total < 25000){
                ongkir2 = ongkir-0;}
            if(total > 25000){
                ongkir2 = ongkir-3000;}
            if(total > 50000){
                diskon = total * 0.15;
                ongkir2 = ongkir-5000;
                t2 = total - diskon;}
            if(total > 150000){
                diskon = total * 0.35;
                ongkir2 = ongkir-8000;
                t2 = total - diskon;}

            hasil=t2+ongkir2;
}

void Hitung::output()
{
    cout <<"============================================" << endl;
    cout <<"|             STRUK             	       |" << endl;
    cout <<"============================================" << endl;
    cout<<"| Nama Makanan\tJumlah\t\t\t\t\t\t|" << endl;  
	cout<<"| Ayam geprek  " <<"\t "<< bnyk_aymgp <<"\t\t\t\t\t\t   |" << endl;
    cout<<"| Ayam goreng  " <<"\t "<< bnyk_aymgr <<"\t\t\t\t\t\t   |" << endl;
	cout<<"| Udang goreng "<<"\t "<< bnyk_udggr <<"\t\t\t\t\t\t   |" << endl;
	cout<<"| Cumi goreng  "<<"\t "<< bnyk_cmigr <<"\t\t\t\t\t\t   |" << endl;
    cout<<"| Ayam bakar   "<<"\t "<< bnyk_aymbkr <<"\t\t\t\t\t\t   |" << endl;
    cout <<"--------------------------------------------" << endl;
	cout<<"| Harga total Rp."<< total <<"\t\t\t\t\t\t   |" << endl;
	cout<<"| Harga setelah diskon Rp."<< t2 <<"\t\t\t\t   |" << endl;
	cout<<"| Ongkir Rp."<< ongkir <<"\t\t\t\t\t  	   |" << endl;
	cout<<"| Ongkir setelah dipotong Rp."<< ongkir2 <<"\t\t   |" << endl;
	cout<<"| Diskon Rp."<< diskon <<"\t\t\t\t\t\t\t   |" << endl;
	cout<<"| Total biaya Rp."<< hasil <<"\t\t\t\t\t   |" << endl;
    cout <<"============================================" << endl;
}

int main()
{
    Hitung a;
    a.input();
    a.proses();
    a.output();
}
