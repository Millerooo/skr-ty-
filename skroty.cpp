#include <iostream>
#include <fstream>

using namespace std;

bool zadaniePierwsze = true;

void z1() {
	cout << "Zadanie 1: " << endl;
	ifstream in("wiadomosci.txt");
	string s;
	getline(in, s);
	cout << skrot(s) << endl << endl;
	zadaniePierwsze = false;
}

string odszyfrujSkrot(int tab[], int d, int n) {
	string ans = "";
	for (int i = 0; i < 8; i++) {
		tab[i] = (tab[i] * 3 % 200);
		ans += (char) tab[i];
	}
	return ans;
}
int main() {
	z1();
}
