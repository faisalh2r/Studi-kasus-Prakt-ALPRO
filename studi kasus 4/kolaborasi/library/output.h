using namespace std;

class Output {

public:
	void cetak(){
		cout<<"SAYA SEORANG OUTPUT\n";
		cout<<"Pengeluaran tiap bulan : "<<data_file[0]<<endl;
		cout<<"Total pengeluaran : "<<data_file[1]<<endl;
		cout<<"Uang Sisa yang dapat di tabung : "<<data_file[3]<<endl;
		cout<<"Jenis barang : "<<data_file[4]<<endl;
		cout<<"Nama barang : "<<data_file[5]<<endl;
		cout<<"Jumlah : "<<data_file[6]<<endl;
		cout<<"Harga : "<<data_file[7]<<endl;
	}
	void getData(){
		ambil_data.open("../dummy/out_proses.txt");
			while (!ambil_data.eof()){
				ambil_data>> data_file[index];
				index += 1;
			}
		ambil_data.close();
	}

private:
	ifstream ambil_data;
	string data_file[40];
	int index=0;
};
