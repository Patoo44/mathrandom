#include <iostream>
using namespace std;


int main() {

	int bodyhraca = 0;
	int bodyai = 0;
	int hrac;
	int ai;
	int a =1;
	int b;
	cout << "____________________________________________" << endl;
	cout << "___________Kamen__Papier__Noznice___________" << endl;
	cout << "___________________Zvolte___________________" << endl;
	cout << " 1 -- Hra proti AI_____2 -- Hra pre 2 hracov" << endl;
	cin >> b;
	if (b == 1) {
		do {
			cout << "____________________________________________" << endl;
			cout << "Zvol si moznost" << endl;
			cout << "1  -  Kamen" << endl;
			cout << "2  -  Papier" << endl;
			cout << "3  -  Noznice" << endl;
			cout << "____________________________________________" << endl;
			cin >> hrac;
			ai = rand() % 3 + 1;
			switch (hrac) {
			case 1:
				switch (ai) {
				case 1:
					cout << "Kamen ---- Kamen" << endl;
					cout << "Remiza" << endl;
					break;

				case 2:
					cout << "Kamen ---- Papier" << endl;
					cout << "Prehra" << endl;
					bodyai++;
					break;

				case 3:
					cout << "Kamen ---- Noznice" << endl;
					cout << "Vyhra" << endl;
					bodyhraca++;
					break;

				}
				break;
			case 2:
				switch (ai) {
				case 1:
					cout << "Papier ---- Kamen" << endl;
					cout << "Vyhra" << endl;
					bodyhraca++;
					break;

				case 2:
					cout << "Papier ---- Papier" << endl;
					cout << "Remiza" << endl;
					break;

				case 3:
					cout << "Papier ---- Noznice" << endl;
					cout << "Prehra" << endl;
					bodyai++;
					break;

				}
				break;

			case 3:
				switch (ai) {
				case 1:
					cout << "Noznice ---- Kamen" << endl;
					cout << "Prehra" << endl;
					bodyai++;
					break;

				case 2:
					cout << "Noznice ---- Papier" << endl;
					cout << "Vyhra" << endl;
					bodyhraca++;
					break;

				case 3:
					cout << "Noznice ---- Noznice" << endl;
					cout << "Remiza" << endl;
					break;

				}
				break;
			}
			cout << "____________________________________________" << endl;
			cout << "Tvoje body : " << bodyhraca << endl;
			cout << "body AI : " << bodyai << endl;
			cout << "____________________________________________" << endl;
			cout << "Chcete pokracovat v hre?" << endl;
			cout << "1 -- Ano          2 -- Nie" << endl;
			cin >> a;
		} while (a == 1);
	}
	else {
		do {
			cout << "____________________________________________" << endl;
			cout << "Hrac 1" << endl;
			cout << "1  -  Kamen" << endl;
			cout << "2  -  Papier" << endl;
			cout << "3  -  Noznice" << endl;
			cout << "____________________________________________" << endl;
			cin >> hrac;

			cout << "____________________________________________" << endl;
			cout << "Hrac 2" << endl;
			cout << "1  -  Kamen" << endl;
			cout << "2  -  Papier" << endl;
			cout << "3  -  Noznice" << endl;
			cout << "____________________________________________" << endl;
			cin >> ai;
			switch (hrac) {
			case 1:
				switch (ai) {
				case 1:
					cout << "Kamen ---- Kamen" << endl;
					cout << "Hrac 1 vyhral" << endl;
					break;

				case 2:
					cout << "Kamen ---- Papier" << endl;
					cout << "Hrac 2 vyhral" << endl;
					bodyai++;
					break;

				case 3:
					cout << "Kamen ---- Noznice" << endl;
					cout << "Vyhra" << endl;
					bodyhraca++;
					break;

				}
				break;
			case 2:
				switch (ai) {
				case 1:
					cout << "Papier ---- Kamen" << endl;
					cout << "Hrac 1 vyhral" << endl;
					bodyhraca++;
					break;

				case 2:
					cout << "Papier ---- Papier" << endl;
					cout << "Remiza" << endl;
					break;

				case 3:
					cout << "Papier ---- Noznice" << endl;
					cout << "Hrac 2 vyhral" << endl;
					bodyai++;
					break;

				}
				break;

			case 3:
				switch (ai) {
				case 1:
					cout << "Noznice ---- Kamen" << endl;
					cout << "Hrac 2 vyhral" << endl;
					bodyai++;
					break;

				case 2:
					cout << "Noznice ---- Papier" << endl;
					cout << "Hrac 1 vyhral" << endl;
					bodyhraca++;
					break;

				case 3:
					cout << "Noznice ---- Noznice" << endl;
					cout << "Remiza" << endl;
					break;

				}
				break;
			}
			cout << "____________________________________________" << endl;
			cout << "Body hraca 1 : " << bodyhraca << endl;
			cout << "Body hraca 2 : " << bodyai << endl;
			cout << "____________________________________________" << endl;
			cout << "Chcete pokracovat v hre?" << endl;
			cout << "1 -- Ano          2 -- Nie" << endl;
			cin >> a;
		} while (a == 1);
	}
}
	
