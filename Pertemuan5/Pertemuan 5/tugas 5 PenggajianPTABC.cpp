#include <iostream>
using namespace std;

int main(){
	string nama, jabatan, status;
	int nomor_pegawai, pilihan_jabatan, pilihan_status, jam_lembur, gaji_pokok, total_gaji;
	double tunjangan, gaji_lembur;
	
	cout << "::.. PROGRAM PENGGAJIAN PEGAWAI PT. ABC ..::\n";
	cout << endl;
	cout << "Nomor Pegawai         : ";
	cin >> nomor_pegawai;
	cout << "Nama Pegawai          : ";
	cin.ignore();
	getline(cin, nama);
	cout << "Jabatan                : 1. Operator\n";
	cout << "                         2. Manajer\n";
	cout << "Pilih Jabatan (1/2)   : ";
	cin >> pilihan_jabatan;
	cout << "Status Pernikahan      : 1. Lajang\n";
	cout << "                         2. Sudah Menikah\n";
	cout << "                         3. Mempunyai Anak\n";
	cout << "Pilih Status (1/2/3)   : ";
	cin >> pilihan_status;
	cout << "Jumlah Jam Lembur      : ";
	cin >> jam_lembur;
	
	if(pilihan_jabatan == 1){
		gaji_pokok = 2000000;
		jabatan = "Operator";
	}
	else if(pilihan_jabatan == 2){
		gaji_pokok = 3500000;
		jabatan = "Manajer";
	}
	else{
		cout << "Pilihan anda tidak valid!";
	}
	
	if(pilihan_status == 1){
		tunjangan = gaji_pokok * 5 / 100;
		status = "Lajang";
	}
	else if(pilihan_status == 2){
		tunjangan = gaji_pokok * 10 /100;
		status = "Sudah Menikah";
	}
	else if(pilihan_status == 3){
		tunjangan = gaji_pokok * 15 / 100;
		status = "Mempunyai Anak";
	}
	else{
		cout << "Pilihan anda tidak valid!";
	}
	
	if(jam_lembur > 20){
		jam_lembur = 20;
	}
	
	gaji_lembur = gaji_pokok * 2.5 / 100 * jam_lembur;
	total_gaji = gaji_pokok + tunjangan + gaji_lembur;
	
	cout << "----------------------------------------------------\n";
	cout << endl;
	
	cout << "::.. PROGRAM PENGGAJIAN PEGAWAI PT. ABC ..::\n";
	cout << endl;
	cout << "Nomor Pegawai          : " << nomor_pegawai << endl;
	cout << "Nama Pegawai           : " << nama << endl;
	cout << "Jabatan                : " << jabatan << endl;
	cout << "Status Pernikahan      : " << status << endl;
	cout << "Jumlah Jam Lembur      : " << jam_lembur << endl;
	cout << "Gaji Pokok             : " << gaji_pokok << endl;
	cout << "Tunjangan              : " << tunjangan << endl;
	cout << "Upah Lembur            : " << gaji_lembur << endl;
	cout << "Total Gaji             : " << total_gaji << endl;
	
	cin.get();
	return 0;
}
