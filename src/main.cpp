#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{
					int dd, mm, yy, tahunmasuk;
					string id, nama, departemen, nrp;
					cout << "id: ";
					cin >> id;
					cout << "nama: ";
					cin >> nama;
					cout << "tanggal lahir: ";
					cin >> dd;
					cout << "bulan lahir: ";
					cin >> mm;
					cout << "tahun lahir: ";
					cin >> yy;
					cout << "departemen: ";
					cin >> departemen;
					cout << "nrp: ";
					cin >> nrp;
					cout << "tahun masuk: ";
					cin >> tahunmasuk;
					mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					int dd, mm, yy, pendidikan;
					string id, nama, departemen, npp;
					cout << "id: ";
					cin >> id;
					cout << "nama: ";
					cin >> nama;
					cout << "tgl lahir: ";
					cin >> dd;
					cout << "bln lahir: ";
					cin >> mm;
					cout << "thn lahir: ";
					cin >> yy;
					cout << "departemen: ";
					cin >> departemen;
					cout << "npp: ";
					cin >> npp;					
					cout << "pendidikan: ";
					cin >> pendidikan;
					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					int dd, mm, yy;
					string id, nama, unit, npp;
					cout << "id: ";
					cin >> id;
					cout << "nama: ";
					cin >> nama;
					cout << "tgl lahir: ";
					cin >> dd;
					cout << "bln lahir: ";
					cin >> mm;
					cout << "thn lahir: ";
					cin >> yy;
					cout << "unit: ";
					cin >> unit;
					cout << "npp: ";
					cin >> npp;
					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
				}
				break;:
			case 4:
				{	
					int n = 0
					while(n < recMhs.size())
					{
						cout << "Nama: "<< recMhs[n].getNama()<< endl;
						cout << "Tgl lahir: "<<recMhs[n].getTglLahir();
						cout << "/" <<recMhs[n].getBulanLahir();
						cout << "/" << recMhs[n].getTahunLahir() << endl;
						cout << "NRP: " << recMhs[n].getNRP()<< endl;
						cout << "Departemen: "<< recMhs[n].getDepartemen()<< endl << endl;
						i++
					}
				}
				break;:
			case 5:
				{	
					int n = 0
					while(n < recDosen.size())
					{
						cout << "Nama: " << recDosen[n].getNama()<< endl;
						cout << "Tgl lahir: "<< recDosen[n].getTglLahir();
						cout << "/" <<recDosen[n].getBulanLahir();
						cout << "/" << recDosen[n].getTahunLahir()<< endl;
						cout << "NRP: " << recDosen[n].getNPP() << endl;
						cout << "Pendidikan: S" << recDosen[n].getPendidikan()<< endl;
						cout << "Departemen: " <<recDosen[n].getDepartemen() << endl << endl;
						i++
					}
				}
				break;:
			case 6:
				{	
					int n = 0
					while(n < recTendik.size())
					{
						cout << "Nama: " <<recTendik[n].getNama() << endl;
						cout << "Tgl lahir: "<< recTendik[n].getTglLahir();
						cout << "/" << recTendik[n].getBulanLahir();
						cout << "/" << recTendik[n].getTahunLahir() <<endl;
						cout << "NRP: " <<recTendik[n].getNPP() <<endl;
						cout << "Unit: " << recTendik[n].getUnit()<< endl;
						i++
					}
				}
				break;:
		}
	}

	return 0;
}
