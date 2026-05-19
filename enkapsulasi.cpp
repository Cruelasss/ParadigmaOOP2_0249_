#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void setsaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getsaklarNo(int i) {
		return saklarNo[i];

	}
};

int main() {
	remoteLampu lampurumah;

	lampurumah.setsaklarNo(0, "Lampu Teras rumah");
	lampurumah.setsaklarNo(1, "Lampu Ruang tamu");
	lampurumah.setsaklarNo(2, "Lampu Kamar tidur");
	lampurumah.setsaklarNo(3, "Lampu Dapur");

}