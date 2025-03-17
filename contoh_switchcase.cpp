#include <iostream>
using namespace std;

double hitungIpk(double total, int sks )
{
    return total / sks;
}

string predikat (double ipk){
    if (ipk < 10 ){
        return "Memuaskan";
    }
    else{
        return "Cumlaude";
    }
}

int main()
{
    char pilihan;
    int sks;
    double total;

    do
    {
        cout << "Pilih Menu" << endl;
        cout << "1. Cek nilai IPK" << endl;
        cout << "2. Cek Predikat Kelulusan" << endl;
        cout << "3. Keluar";
        cout << "Masukkan pilihan (1/2/3) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case '1':
           
            cout << "Masukkan total nilai = ";
            cin >> total;
            cout << "Masukkan jumlah sks = ";
            cin >> sks;

            cout << "nilai Ipk = " << hitungIpk(total, sks) << endl;
            break;
        case '2':
            cout << "Predikat anda adalah" << predikat(hitungIpk(total, sks)) << endl;
        case '3':
            break;

        default:
        cout << "Pilihan anda salah" << endl;
            break;
        }


    } while (pilihan != 3);
    
}