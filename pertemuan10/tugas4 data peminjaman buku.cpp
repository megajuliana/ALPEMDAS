#include <iostream>
#include <iomanip>
#include <sstream> 
using namespace std;

int main() {
	
//	Input: no, Nama Anggota, Lama hari peminjaman
//	Denda: jika peminjam mengembalikan buku lebih dari 1 minggu (7 hari) maka akan mendapatkan denda sebesar 5000 rupiah per minggunya. 
//	Implementasikan Array 2D untuk menyelesaikan kasus diatas
	
/*

	DATA PEMINJAMAN BUKU :
	----------------------------------------------------------------------
	| No | Nama Anggota           | lama Hari Peminjaman | Denda ( Rp. ) |
	----------------------------------------------------------------------
	| 1 | Chaira Innara             |  5  				 |		0	     |
	----------------------------------------------------------------------
	| 2 | Ahmad                     |  9  				 |	   5000		 |
	----------------------------------------------------------------------
	| 3 | Siti                      |  15  				 |	  10000      |
	----------------------------------------------------------------------
	| 4 | Budi                      |  4  				 |      0        |
	----------------------------------------------------------------------

*/

    const int n = 4;
    string data[n][3]; // kolom: No, Nama, Lama Hari

    // Input data
    for (int i = 0; i < n; i++) {
        cout << "NO: ";
        getline(cin, data[i][0]);
        cout << "Nama Anggota: ";
        getline(cin, data[i][1]);
        cout << "Lama Peminjaman: ";
        getline(cin, data[i][2]);
        cout << endl;
    }

    // Output tabel
    cout << "DATA PEMINJAMAN BUKU\n";
    cout << "-------------------------------------------------------------\n";
    cout << "| " << setw(2)  << left << "No"
         << " | " << setw(15) << left << "Nama Anggota"
         << " | " << setw(21) << left << "Lama Hari Peminjaman"
         << " | " << setw(11) << left << "Denda (Rp.)" << "|\n";
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        int lama;
        stringstream ss(data[i][2]);
        ss >> lama;

        int denda = 0;
        if (lama > 7) {
            int minggu = (lama - 7) / 7 + 1;
            denda = minggu * 5000;
        }

        cout << "| " << setw(2)  << left << data[i][0]
             << " | " << setw(15) << left << data[i][1]
             << " | " << setw(21) << left << data[i][2]
             << " | " << setw(11) << left << denda << "|\n";
    }

    cout << "-------------------------------------------------------------\n";
    return 0;
}

