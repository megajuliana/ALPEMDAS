#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    char nomor_pegawai[20];
    char nama_pegawai[50];
    double gaji_pokok;
    int jumlah_jam_lembur;
    
    double tunjangan;
    double upah_lembur_per_jam;
    double total_upah_lembur;
    double total_gaji;

    cout << "========= PROGRAM MENGHITUNG GAJI PEGAWAI =========" << endl;

    //  MASUKAN (INPUT) 
    cout << "\n--- INPUT DATA PEGAWAI ---" << endl;
    
    // Nomor pegawai
    cout << "Nomor Pegawai        : ";
    cin >> nomor_pegawai;
    cin.ignore(); 

    // Nama pegawai
    cout << "Nama Pegawai         : ";
    cin.get(nama_pegawai, 50);

    // Gaji Pokok
    cout << "Gaji Pokok (Rp)      : ";
    cin >> gaji_pokok;

    // Jumlah Jam Lembur
    cout << "Jumlah Jam Lembur    : ";
    cin >> jumlah_jam_lembur;

    // --- PERHITUNGAN ---
    
    // 1. Besarnya tunjangan 10% dari gaji pokok
    // Tunjangan = 0.10 * Gaji Pokok
    tunjangan = 0.10 * gaji_pokok;
    
    // 2. Besar upah lembur per jam 5% dari gaji pokok
    // Upah Lembur per Jam = 0.05 * Gaji Pokok
    upah_lembur_per_jam = 0.05 * gaji_pokok;
    
    // 3. Total Upah Lembur = Upah Lembur per Jam * Jumlah Jam Lembur
    total_upah_lembur = upah_lembur_per_jam * jumlah_jam_lembur;
    
    // 4. Total Gaji = Gaji Pokok + Tunjangan + Total Upah Lembur
    total_gaji = gaji_pokok + tunjangan + total_upah_lembur;

    // output
    cout << "\n=================================================" << endl;
    cout << "             RINCIAN GAJI PEGAWAI                " << endl;
    cout << "=================================================" << endl;
    
    cout << "Nomor Pegawai        : " << nomor_pegawai << endl;
    cout << "Nama Pegawai         : " << nama_pegawai << endl;
    cout << "Gaji Pokok           : Rp " << gaji_pokok << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "Tunjangan (10%)      : Rp " << tunjangan << endl;
    cout << "Upah Lembur per Jam  : Rp " << upah_lembur_per_jam << endl;
    cout << "Total Upah Lembur    : Rp " << total_upah_lembur << " (" << jumlah_jam_lembur << " jam)" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "TOTAL GAJI DITERIMA  : Rp " << total_gaji << endl;
    cout << "=================================================" << endl;


    cin.get();
    return 0;
}
