#include <iostream>
using namespace std;

class Dosen
{
public:
    int input();
    float proses();
    int output();

private:
    string nama_dosen;
    string nama_matkul;
    int nilai[100];
    int x;
    int nilai_min;
    int nilai_max;
    float nilai_rata;
};	
int Dosen::input()
{
	cout<<"Program input nilai mahasiswa"<<endl;
	cout<<endl;
    cout << "Masukkan nama dosen : ";
    getline(cin,nama_dosen);
    cout << "Masukkan nama matkul : ";
    getline(cin,nama_matkul);
    cout << "Masukkan jumlah nilai yang ingin diinputkan : ";
    cin >> x;
}
float Dosen::proses()
{
    for (int i = 0; i < x; i++)
    {
        cout << "Nilai ke - " << i + 1 << " = ";
        cin >> nilai[i];
    }
    nilai_min=nilai[0];
    for (int i = 0; i < x; i++)
    {
        if (nilai[i] < nilai_min)
        {
            nilai_min = nilai[i];
        }
        if (nilai[i] > nilai_max)
        {
            nilai_max = nilai[i];
        }
        nilai_rata=0;
        for (int i = 0; i < x; i++)
        {
            nilai_rata = nilai_rata + nilai[i];
        }
        nilai_rata /= x;
    }
}
int Dosen::output()
{
	cout<<endl;
	cout<<"----------------------------"<<endl;
    cout << "Nama Dosen : " << nama_dosen << endl;
    cout << "Matakuliah : " << nama_matkul << endl;
    cout << "Junlah nilai yang diinput : ";
    cout<<endl;
    for (int i = 0; i < x; i++)
        cout << nilai[i] << endl;
    cout << "Nilai Min : " << nilai_min << endl;
    cout << "Nilai Max : " << nilai_max << endl;
    cout << "Nilai Rata-rata : " << nilai_rata << endl;
}

int main()
{
    Dosen a;
    a.input();
    a.proses();
    a.output();
}
