#include <iostream>
#include <cstdlib> 
#include <ctime>


using namespace std;

int main()
{
	int num1, num2, num3, num4;
	int KartasNum = 0;
	double sum;
	double Atl = 0;
	double Atb;
	int PareizasAtb = 0;
	int x, y;
	srand(time(NULL));
	cout << "\n\t\t\t\tIzvelies par kadu matematikas temu velies sevi parbaudit:";
	cout << "\n\n\t\t1.Saskaitisana\t  |";
	cout << "\t2.Atnemsana\t |";
	cout << "\t3.Reizinasana\t |";
	cout << "\t4.Dalisana";
	cout << "\n\n\t\t\t\t\t\t  Tava izvele: ";
	cin >> x;
	cout << "\n";

	switch (x) {
	case 1: 
		cout << "\n\n\t\t\t\t\t      Ivelies grutibas pakapi:";
		cout << "\n\n\t\t\t\t1.Viegla\t|";
		cout << "\t2.Videja\t|";
		cout << "\t3.Gruta";
		cout << "\n\n\t\t\t\t\t\t  Tava izvele: ";
		cin >> y;
		cout << "\n";

		switch (y) {
		case 1: 
			for (int i = 0; i < 10; i++) {
				cout << "\t";
					num1 = rand() % 10 + 1;
					num2 = rand() % 10 + 1;
					sum = num1 + num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " + " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
			}
			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 2:
			for (int j = 0; j < 6; j++) {
				cout << "\t";
					num1 = rand() % 41 + 10;
					num2 = rand() % 41 + 10;
					sum = num1 + num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " + " << num2 << " = ";
					cin >> Atb;

				if (Atb == sum) {
					PareizasAtb = PareizasAtb + 1;
				}
			}
			for (int k = 0; k < 4; k++) {
				cout << "\t";
				num1 = rand() % 41 + 10;
				num2 = rand() % 41 + 10;
				num3 = rand() % 41 + 10;
				sum = num1 + num2 + num3;
				KartasNum++;
				cout << KartasNum << ".  " << num1 << " + " << num2 << " + " << num3 << " = ";
				cin >> Atb;

				if (Atb == sum) {
					PareizasAtb = PareizasAtb + 1;
				}
			}
			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 3:
				for (int j = 0; j < 2; j++) {
					cout << "\t";
					num1 = rand() % 51 + 50;
					num2 = rand() % 51 + 50;
					sum = num1 + num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " + " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int k = 0; k < 3; k++) {
					cout << "\t";
					num1 = rand() % 51 + 50;
					num2 = rand() % 51 + 50;
					num3 = rand() % 51 + 50;
					sum = num1 + num2 + num3;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " + " << num2 << " + " << num3 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int l = 0; l < 5; l++) {
					cout << "\t";
					num1 = rand() % 51 + 50;
					num2 = rand() % 51 + 50;
					num3 = rand() % 51 + 50;
					num4 = rand() % 51 + 50;
					sum = num1 + num2 + num3 + num4;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}

			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;
		default:
			cout << "\t\t\t\t\t\tDota opcija neder!\n\n";
		}
		break;
	case 2:
		cout << "\n\n\t\t\t\t\t      Ivelies grutibas pakapi:";
		cout << "\n\n\t\t\t\t1.Viegla\t|";
		cout << "\t2.Videja\t|";
		cout << "\t3.Gruta";
		cout << "\n\n\t\t\t\t\t\t  Tava izvele: ";
		cin >> y;
		cout << "\n";

		switch (y) {
		case 1:
			for (int i = 0; i < 10; i++) {
				cout << "\t";
				num1 = rand() % 11 + 10;
				num2 = rand() % 10 + 1;
				sum = num1 - num2;
				KartasNum++;
				cout << KartasNum << ".  " << num1 << " - " << num2 << " = ";
				cin >> Atb;

				if (Atb == sum) {
					PareizasAtb = PareizasAtb + 1;
				}
			}
			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 2:
				for (int j = 0; j < 6; j++) {
					cout << "\t";
					num1 = rand() % 21 + 30;
					num2 = rand() % 30 + 1;
					sum = num1 - num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " - " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int k = 0; k < 4; k++) {
					cout << "\t";
					num1 = rand() % 30 + 1;
					num2 = rand() % 21 + 30;
					sum = num1 - num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " - " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}

			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 3:
				for (int j = 0; j < 2; j++) {
					cout << "\t";
					num1 = rand() % 51 + 50;
					num2 = rand() % 51 + 50;
					sum = num1 - num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " - " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int k = 0; k < 3; k++) {
					cout << "\t";
					num1 = rand() % 51 + 50;
					num2 = rand() % 51 + 50;
					num3 = rand() % 51 + 50;
					sum = num1 - num2 - num3;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " - " << num2 << " - " << num3 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int l = 0; l < 5; l++) {
					cout << "\t";
					num1 = rand() % 51 + 50;
					num2 = rand() % 51 + 50;
					num3 = rand() % 51 + 50;
					num4 = rand() % 51 + 50;
					sum = num1 - num2 - num3 - num4;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " - " << num2 << " - " << num3 << " - " << num4 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}

			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;
		default:
			cout << "\t\t\t\t\t\tDota opcija neder!\n\n";
		}
		break;

	case 3:
		cout << "\n\n\t\t\t\t\t      Ivelies grutibas pakapi:";
		cout << "\n\n\t\t\t\t1.Viegla\t|";
		cout << "\t2.Videja\t|";
		cout << "\t3.Gruta";
		cout << "\n\n\t\t\t\t\t\t  Tava izvele: ";
		cin >> y;
		cout << "\n";

		switch (y) {
		case 1: 
			for (int i = 0; i < 10; i++) {
				cout << "\t";
				num1 = rand() % 10 + 1;
				num2 = rand() % 10 + 1;
				sum = num1 * num2;
				KartasNum++;
				cout << KartasNum << ".  " << num1 << " * " << num2 << " = ";
				cin >> Atb;

				if (Atb == sum) {
					PareizasAtb = PareizasAtb + 1;
				}
			}
			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 2:
				for (int j = 0; j < 8; j++) {
					cout << "\t";
					num1 = rand() % 10 + 1;
					num2 = rand() % 11 + 10;
					sum = num1 * num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " * " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int k = 0; k < 2; k++) {
					cout << "\t";
					num1 = rand() % 11 + 10;
					num2 = rand() % 11 + 10;
					sum = num1 * num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " * " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}

			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 3:
				for (int j = 0; j < 3; j++) {
					cout << "\t";
					num1 = rand() % 11 + 10;
					num2 = rand() % 11 + 10;
					sum = num1 * num2;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " * " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int k = 0; k < 5; k++) {
					cout << "\t";
					num1 = rand() % 9 + 2;
					num2 = rand() % 21 + 10;
					num3 = rand() % 21 + 30;
					sum = num1 * num2 * num3;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " * " << num2 << " * " << num3 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int l = 0; l < 2; l++) {
					cout << "\t";
					num1 = rand() % 21 + 30;
					num2 = rand() % 26 + 50;
					num3 = rand() % 26 + 75;
					sum = num1 * num2 * num3;
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " * " << num2 << " * " << num3 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}

			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;
		default:
			cout << "\t\t\t\t\t\tDota opcija neder!\n\n";
		}
		break;

	case 4:
		cout << "\n\n\t\t\t\t\t      Ivelies grutibas pakapi:";
		cout << "\n\n\t\t\t\t1.Viegla\t|";
		cout << "\t2.Videja\t|";
		cout << "\t3.Gruta";
		cout << "\n\n\t\t\t\t\t\t  Tava izvele: ";
		cin >> y;
		cout << "\n";

		switch (y) {
		case 1:
			for (int i = 0; i < 10; i++) {
				do {
					num1 = rand() % 21 + 10;
					num2 = rand() % 9 + 2;
					sum = num1 / num2;
					Atl = num1 % num2;
				} while (Atl > 0 || Atl < 0);

				cout << "\t";
				KartasNum++;
				cout << KartasNum << ".  " << num1 << " / " << num2 << " = ";
				cin >> Atb;

				if (Atb == sum) {
					PareizasAtb = PareizasAtb + 1;
				}
			}

			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 2:
			for (int j = 0; j < 6; j++) {
				do {
					num1 = rand() % 151 + 50;
					num2 = rand() % 9 + 2;
					sum = num1 / num2;
					Atl = num1 % num2;
				} while (Atl > 0 || Atl < 0);

				cout << "\t";
				KartasNum++;
				cout << KartasNum << ".  " << num1 << " / " << num2 << " = ";
				cin >> Atb;

				if (Atb == sum) {
					PareizasAtb = PareizasAtb + 1;
				}
			}
			for (int k = 0; k < 4; k++) {
				do {
					num1 = rand() % 151 + 50;
					num2 = rand() % 41 + 10;
					sum = num1 / num2;
					Atl = num1 % num2;
				} while (Atl > 0 || Atl < 0);

				cout << "\t";
				KartasNum++;
				cout << KartasNum << ".  " << num1 << " / " << num2 << " = ";
				cin >> Atb;

				if (Atb == sum) {
					PareizasAtb = PareizasAtb + 1;
				}
			}
			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;

		case 3:
				for (int j = 0; j < 2; j++) {
					do {
						num1 = rand() % 151 + 50;
						num2 = rand() % 41 + 10;
						sum = num1 / num2;
						Atl = num1 % num2;
					} while (Atl > 0 || Atl < 0);
					
					cout << "\t";
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " / " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int k = 0; k < 5; k++) {
					do {
						num1 = rand() % 201 + 100;
						num2 = rand() % 31 + 20;
						sum = num1 / num2;
						Atl = num1 % num2;
					} while (Atl > 0 || Atl < 0);
					
					cout << "\t";
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " / " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}
				for (int l = 0; l < 3; l++) {
					do {
						num1 = rand() % 501 + 500;
						num2 = rand() % 91 + 10;
						sum = num1 / num2;
						Atl = num1 % num2;
					} while (Atl > 0 || Atl < 0);
					
					cout << "\t";
					KartasNum++;
					cout << KartasNum << ".  " << num1 << " / " << num2 << " = ";
					cin >> Atb;

					if (Atb == sum) {
						PareizasAtb = PareizasAtb + 1;
					}
				}

			if (PareizasAtb == 10) {
				cout << "\n\n\t\t\t\tApsveicu! Tu esi sanemis pilnigi visus punktus! :)\n\n";
			}
			else if (PareizasAtb >= 6) {
				cout << "\n\n\t\t\t\t\tSuper! Esi sanemis " << PareizasAtb << " no 10 punktiem! :)\n\n";
			}
			else {
				cout << "\n\n\t\t\t\tDiemzel esi sanemis " << PareizasAtb << " no 10 punktiem. Es ticu, ka Tu vari labak! :)\n\n";
			}
			break;
		default:
			cout << "\t\t\t\t\t\tDota opcija neder!\n\n";
		}
		break;
		default:
		cout << "\t\t\t\t\t\tDota opcija neder!\n\n";
		}
	return 0;

}

