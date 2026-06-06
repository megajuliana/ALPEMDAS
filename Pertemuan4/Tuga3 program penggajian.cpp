#include<iostream>
using namespace std;

int main(){
	
	int nomor_pegawai;
	string nama_pegawai ;
	int gaji_pokok;
	int jumlah_jam_lembur;
	int tunjangan;
	int upah_lembur;
	int total_gaji;
	
	cout << "-----------------PROGRAM PENGGAJIAN------------\n";
	
	cout << "Nomor Pegawai	: ";
	cin >> nomor_pegawai;
	
	cout << "Nama Pegawai	: ";
	cin >> nama_pegawai;
	
	cout << "Gaji Pokok	: ";
	cin >> gaji_pokok;
	
	tunjangan = gaji_pokok * 10/100;
	
	cout << "Jumlah Jam Lembur : ";
	cin >> jumlah_jam_lembur;
	
	upah_lembur = jumlah_jam_lembur * (gaji_pokok * 5/100);
	
	total_gaji = gaji_pokok + tunjangan + upah_lembur;
	
	cout << endl;
	
	cout << "-----------------------------------------------\n";
	
	cout << "Nomor Pegawai		: " << nomor_pegawai << endl;
	cout << "Nama Pegawai		: " << nama_pegawai << endl;
	cout << "Gaji Pokok(Rp)		: " << gaji_pokok << endl;
	cout << "Tunjangan(Rp)		: " << tunjangan << endl;
	cout << "Upah Lembur(Rp)		: " << upah_lembur << endl;
	cout << "Total Gaji(Rp)		: " << total_gaji;
	
	cin.get();
	return 0;
}
