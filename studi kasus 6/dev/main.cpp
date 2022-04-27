#include <iostream>
using namespace std;

class Dosen
{
public:
    void input();
    int proses();
    void output();

private:
    string nama_dosen;
    string nama_matkul;
    int nilai[100];
    int x;
    int nilai_min;
    int nilai_max;
    float nilai_rata;
};

void Dosen::input()
{
    cout << "Masukkan nama dosen : ";
    cin >> nama_dosen;
    cout << " Masukkan nama matkul : ";
    cin >> nama_matkul;
    for (int i = 0; i < 2; i++)
    {
        cout << "Nilai ke - " << i + 1 << " = ";
        cin >> nilai[i];
    }
}
int Dosen::proses()
{
    nilai_min = nilai[0];
    nilai_max = nilai[0];
    for (int k = 0; k < 2; k++)
    {
        if (nilai[k] < nilai_min)
        {
            nilai_min = nilai[k];
        }
        if (nilai[k] > nilai_max)
        {
            nilai_max = nilai[k];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        nilai_rata = nilai_rata + nilai[i];
    }
    nilai_rata = nilai_rata / 2;
}

void Dosen::output()
{
    cout << "Nama Dosen : " << nama_dosen << endl;
    cout << "Matakuliah : " << nama_matkul << endl;
    cout << "Daftar nilai : ";
    for (int i = 0; i < 2; i++)
    {
        cout << nilai[i] << endl;
    }
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