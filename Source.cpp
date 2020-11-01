#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Student {

private:
	string Nama;

public:
	string getNama() {
		return Nama;
	}

	void setNama(string namaParam) {
		this->Nama = namaParam;
	}

	void fungsiKonstan() {
		setNama("Windows");
	}
};

int main() {
	string h;
	Student objStudent;

	objStudent.setNama("Rizky Khapidsyah");
	h = objStudent.getNama();

	cout << "Nama : " << h << endl;
	cout << "Nama : " << objStudent.getNama();

	objStudent.fungsiKonstan();
	h = objStudent.getNama();

	cout << endl << endl;
	cout << "Nama : " << h << endl;
	cout << "Nama : " << objStudent.getNama();




	_getch();
	return 0;
}