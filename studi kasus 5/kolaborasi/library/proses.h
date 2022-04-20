using namespace std;

class Proses
{
public:

   int toFile()
    {
        cout << "Masukkan matkul: ";
        cin.ignore();
        getline(cin, matkul);
        cout << "Berapa jumlah sks: ";
        cin >> jumlah_sks;
        diskon1 = jumlah_sks * 120000 - (jumlah_sks * 120000 * 0.10);
        diskon2 = diskon1 * 0.05;
        total_pembayaran = diskon1 - diskon2;

        if (x == 0)
        {
            return total_pembayaran;
        }
        else
        {
            return total_pembayaran + toFile(x-1);
        }

        tulis_data.open("../pra_data/proses.txt");
        tulis_data << nama << endl;
        tulis_data << nim << endl;
        tulis_data << matkul << endl;
        tulis_data << jumlah_sks << endl;
        tulis_data << total_pembayaran;
        tulis_data.close();
    }
private:
    ifstream ambil_data;
    ofstream tulis_data;
    int jumlah_matkul;
    string matkul;
    int x;
    string nama;
    int nim;
    int jumlah_sks;
    int diskon1;
    int diskon2;
    int total_pembayaran;
    
};

