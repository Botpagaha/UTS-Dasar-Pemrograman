#include <iostream>
using namespace std;

int main()
{
    // disini tempat pendeklarasian nilai N yang dimana N > 0
    int N;
    cout << "Masukkan nilai N (N > 0): ";
    cin >> N;  //pengimputan nilai n untuk menentukan jumlah baris

    if (N > 0) //memriksa nilai n apakah lebih dari 0
    {
        for (int i = 1; i<= N; i++) //mengontrol jumlah baris sesuai dengan yang di input dan mencetak pola segitiga
        {
            for (int j = 1; j<= i; j++) //mengontrol jumlah bintang di setiap baris
            {
                cout << "*"; //keluaran dari kode yang di atas
            }
            cout << "\n"; //agar membuat baris baru setelah mencetak semua bintang
        }
    } else {
        cout << "Nilai N harus lebih besar dari 0." << "\n";//ini akan muncul jika N < 1
            }

    return 0;
}


nomor 2
#include <iostream>
using namespace std;
int main()
{
    int index,banyakdata  = 0;
    int jumlahnilai = 0;
    int tertinggi   = 0;
    int terendah    = 0;
    cout << "Masukkan banyak data yang ingin dihitung : ";
    cin >> banyakdata;

    int data[banyakdata];
    for(index = 0; index < banyakdata ; index++) {
        cout << "Data ke " << index+1 << " : ";
        cin >> data[index];
    }
    cout << "Data yang telah diinput : ";
    tertinggi = terendah = data[0];
    for(index = 0; index < banyakdata ; index++)
        {
        cout << data[index] << " ";
        jumlahnilai = jumlahnilai + data[index];
        if (tertinggi < data[index])
        {
            tertinggi = data[index];
        } if (terendah > data[index])
            {
        terendah = data[index];
            }
        }
    cout << endl;
    cout << "Jumlah Nilai            = " << jumlahnilai << endl;
    cout << "Rata - Rata             = " << jumlahnilai/banyakdata << endl;
    cout << "Nilai Tertinggi         = " << tertinggi << endl;
    cout << "Nilai Terendah          = " << terendah << endl;
    return 0;
}
