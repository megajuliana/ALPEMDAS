#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
	
	/*
	
	DATA MAHASISWA :
	===========================================================
	|   Nim  | Nama          | jurusan                 | ipk
	===========================================================
	| 123456 | Ayu Rahma     |  Teknik Informatika     | 3.8 
	
	| 123457 | Budi Santoso  |  Sistem Informasi       | 3.6 

	| 123458 | Citra Dewi    |  Teknik Elektro     	   | 3.9

	| 123459 | Doni Pratama  |  Manajemen  		       | 3.5
	
	| 123460 | Eka Saputra   |  Teknik Mesin  		   | 3.5
	===========================================================
	
	Rata - rata IPK : 3.7

	*/
	
    // Deklarasi array 2D: [jumlah_mahasiswa][jumlah_kolom]
	string mahasiswa[5][4] = {
        {"123456", "Ayu Rahma",    "Teknik Informatika", "3.8"},
        {"123457", "Budi Santoso", "Sistem Informasi",   "3.6"},
        {"123458", "Citra Dewi",   "Teknik Elektro",     "3.9"},
        {"123459", "Doni Pratama", "Manajemen",          "3.5"},
        {"123460", "Eka Saputra",  "Teknik Mesin",       "3.5"}
    };

    cout << "DATA MAHASISWA :\n";
    cout << "===========================================================\n";
    cout << setw(9)  << left << "NIM"
         << " | " << setw(13) << left << "NAMA"
         << " | " << setw(20) << left << "JURUSAN"
         << " | " << setw(4)  << left << "IPK" << endl;
    cout << "===========================================================\n";

    float totalIPK = 0;
    for (int i = 0; i < 5; i++) {
        cout << setw(9)  << left << mahasiswa[i][0]
             << " | " << setw(13) << left << mahasiswa[i][1]
             << " | " << setw(20) << left << mahasiswa[i][2]
             << " | " << setw(4)  << left << mahasiswa[i][3] << endl;

        stringstream ss(mahasiswa[i][3]);
        float ipk;
        ss >> ipk;
        totalIPK += ipk;
    }	

    cout << "===========================================================\n";
    cout << "Rata-rata IPK: " << fixed << setprecision(1) << totalIPK / 5 << endl;
//    cout << "\nRata - rata IPK = " << (float(totalIPK)/5) << endl;

    return 0;
}

