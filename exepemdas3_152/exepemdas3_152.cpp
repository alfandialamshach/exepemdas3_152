#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;				//variabel untuk menyimpan input dari lingkaran maupun bujursangkar
	}
	virtual void input() {	// fungsi yang menerima input dan mengirim input melalui
		//fungsi setX untuk disimpan di x


	}
	virtual float Luas(int a)	//fungsi untuk menghitung luas
	{ 
		return 0; 
	}
	virtual float Keliling(int a) {		//fungsi untuk menghitung keliling

		return 0; 
	}
	void setX(int a) {		//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {			//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:
	string Bidangdatar;
	Lingkaran(string pBidangdatar) :
		Bidangdatar(pBidangdatar) {
		cout << "Lingkaran dibuat\n" << endl;
	}
	virtual float Luas(int a)	//fungsi untuk menghitung luas
	{
		return 3.14 * a * a;
	}
	virtual float Keliling(int a) {		//fungsi untuk menghitung keliling

		return 2 * 3.14 * a;
};
class Bujursangkar :public bidangDatar {
public:
	string Bidangdatar;
	Bujursangkar(string pBidangdatar) :
		Bidangdatar(pBidangdatar) {
		cout << "Bujursangkar dibuat\n" << endl;
	}
	virtual void input() {
		int sisi;
		cout << "Masukan sisi" << endl;
		cin >> sisi;
		setX = sisi;
	
	virtual float Luas(int a)	//fungsi untuk menghitung luas
	{
		return sisi * sisi;
	}
	virtual float Keliling(int a) {		//fungsi untuk menghitung keliling

		return 4 * sisi;
	}
};
int main() {
	bidangDatar* obyek;
	obyek->input();
	cout << "Luas"

}