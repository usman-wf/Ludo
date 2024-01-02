#include <iostream>
#include <conio.h>
#include<stdlib.h>
#include<fstream>
#include<time.h>
using namespace std;

void displayboard(int a, int b, int c, int d, int e, int f, int g, int h) {
	string board[52];
	string home[4][6];
	const int START[4] = { 0, 13, 26, 39 };
	const int STOP[4] = { 48, 9, 22, 35 };
	const string COLOR[4] = { "\033[0;31mr \033[0;0m", "\033[0;34mb \033[0;0m", "\033[0;33my \033[0;0m", "\033[0;32mg \033[0;0m" };
	if (a > 50) {
		if (a < 56)
			home[0][a - 50] = "\033[1;31mR \033[0;0m";
		a = -1;
	}
	if (b > 50) {
		if (b < 56)
			home[0][b - 50] = "\033[1;31mR \033[0;0m";
		b = -1;
	}
	if (c > 50) {
		if (c < 56)
			home[0][c - 50] = "\033[1;31mR \033[0;0m";
		c = -1;
	}
	if (d > 50) {
		if (d < 56)
			home[0][d - 50] = "\033[1;31mR \033[0;0m";
		d = -1;
	}
	if (e > 50) {
		if (e < 56)
			home[2][e - 50] = "\033[1;33mY \033[0;0m";
		e = -1;
	}
	if (f > 50) {
		if (f < 56)
			home[2][f - 50] = "\033[1;33mY \033[0;0m";
		f = -1;
	}
	if (g > 50) {
		if (g < 56)
			home[2][g - 50] = "\033[1;33mY \033[0;0m";
		g = -1;
	}
	if (h > 50) {
		if (h < 56)
			home[2][h - 50] = "\033[1;33mY \033[0;0m";
		h = -1;
	}

	for (int i = 0; i < 52; i++) {
		if (board[i] == "") {
			if (i == START[0]) board[i] = "\033[1;31mo \033[0;0m";
			else if (i == START[1]) board[i] = "\033[1;34mo \033[0;0m";
			else if (i == START[2]) board[i] = "\033[1;33mo \033[0;0m";
			else if (i == START[3]) board[i] = "\033[1;32mo \033[0;0m";
			else if (i == STOP[0]) board[i] = "\033[0;31mo \033[0;0m";
			else if (i == STOP[1]) board[i] = "\033[0;34mo \033[0;0m";
			else if (i == STOP[2]) board[i] = "\033[0;33mo \033[0;0m";
			else if (i == STOP[3]) board[i] = "\033[0;32mo \033[0;0m";
			else board[i] = "* ";

			if (i == a || i == b || i == c || i == d)
				board[i] = "\033[1;31mR \033[0;0m";
			else if (i == e || i == f || i == g || i == h) {
				int score = 26 + i;
				if (score > 51)
					score = score - 51;
				board[score] = "\033[1;33mY \033[0;0m";
			}
		}
	}
	for (int i = 0; i < 4; i++)
		for (int j = 1; j < 6; j++)
			if (home[i][j] == "")
				home[i][j] = COLOR[i];

	cout << "           " << board[23] << board[24] << board[25] << endl;
	cout << "           " << board[22] << home[2][1] << board[26] << endl;
	cout << "           " << board[21] << home[2][2] << board[27] << endl;
	cout << "           " << board[20] << home[2][3] << board[28] << endl;
	cout << "           " << board[19] << home[2][4] << board[29] << endl;
	cout << "           " << board[18] << home[2][5] << board[30] << endl;
	cout << board[12] << board[13] << board[14] << board[15] << board[16] << board[17] << "    " << board[31] << board[32] << board[33] << board[34] << board[35] << board[36] << endl;
	cout << board[11] << home[1][1] << home[1][2] << home[1][3] << home[1][4] << home[1][5] << "    " << home[3][5] << home[3][4] << home[3][3] << home[3][2] << home[3][1] << board[37] << endl;
	cout << board[10] << board[9] << board[8] << board[7] << board[6] << board[5] << "    " << board[43] << board[42] << board[41] << board[40] << board[39] << board[38] << endl;
	cout << "           " << board[4] << home[0][5] << board[44] << endl;
	cout << "           " << board[3] << home[0][4] << board[45] << endl;
	cout << "           " << board[2] << home[0][3] << board[46] << endl;
	cout << "           " << board[1] << home[0][2] << board[47] << endl;
	cout << "           " << board[0] << home[0][1] << board[48] << endl;
	cout << "           " << board[51] << board[50] << board[49] << endl;

	cout << "Press any key to clear screen and continue.\n";
	_getwch();
	system("CLS");
}

void suggestion1(int total, int a, int b, int c, int d, int e, int f, int g, int h) {


	if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)
	{
		if ((e + 26) - (a + total) == 0)
		{
			cout << "a can hit e" << endl;
		}
	}
	else if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
	{
		if ((f + 26) - (a + total) == 0) {
			cout << "a can hit f" << endl;
		}
	}
	else if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
	{
		if ((g + 26) - (a + total) == 0) {
			cout << "a can hit g" << endl;
		}
	}
	else if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
	{
		if ((h + 26) - (a + total) == 0) {
			cout << "a can hit h" << endl;
		}
	}

	else if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)
	{
		if ((e + 26) - (b + total) == 0) {
			cout << "b can hit e" << endl;
		}
	}
	else if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
	{
		if ((f + 26) - (b + total) == 0) {
			cout << "b can hit f" << endl;
		}
	}
	else if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
	{

		if ((g + 26) - (b + total) == 0) {
			cout << "b can hit g" << endl;
		}
	}

	else if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
	{
		if ((h + 26) - (b + total) == 0) {
			cout << "b can hit h" << endl;
		}
	}

	else if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)
	{
		if ((e + 26) - (c + total) == 0) {
			cout << "c can hit e" << endl;
		}
	}

	else if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
	{
		if ((f + 26) - (c + total) == 0) {
			cout << "c can hit f" << endl;
		}
	}
	else if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
	{

		if ((g + 26) - (c + total) == 0) {
			cout << "c can hit g" << endl;
		}
	}

	else if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
	{
		if ((h + 26) - (c + total) == 0) {
			cout << "c can hit h" << endl;
		}
	}

	else if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)
	{
		if ((e + 26) - (d + total) == 0) {
			cout << "d can hit e" << endl;
		}
	}

	else if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
	{
		if ((f + 26) - (d + total) == 0) {
			cout << "d can hit f" << endl;
		}
	}

	else if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
	{
		if ((g + 26) - (d + total) == 0) {
			cout << "d can hit g" << endl;
		}
	}
	else if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
	{
		if ((h + 26) - (d + total) == 0) {
			cout << "d can hit h" << endl;
		}
	}

	else {
		cout << "a cannot hit anyone" << endl;
		cout << "b cannot hit anyone" << endl;
		cout << "c cannot hit anyone" << endl;
		cout << "d cannot hit anyone" << endl;
	}
}

void suggestion2(int total, int a, int b, int c, int d, int e, int f, int g, int h) {

	if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
	{
		if ((a + 26) - (e + total) == 0) {
			cout << "e can hit a" << endl;
		}
	}

	else if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
	{
		if ((b + 26) - (e + total) == 0) {
			cout << "e can hit b" << endl;
		}
	}

	else if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
	{
		if ((c + 26) - (e + total) == 0) {
			cout << "e can hit c" << endl;
		}
	}

	else if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
	{
		if ((d + 26) - (e + total) == 0) {
			cout << "e can hit d" << endl;
		}
	}

	else if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
	{
		if ((a + 26) - (f + total) == 0) {
			cout << "f can hit a" << endl;
		}
	}

	else if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
	{
		if ((b + 26) - (f + total) == 0) {
			cout << "f can hit b" << endl;
		}
	}

	else if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
	{
		if ((c + 26) - (f + total) == 0) {
			cout << "f can hit c" << endl;
		}
	}

	else if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
	{
		if ((d + 26) - (f + total) == 0) {
			cout << "f can hit d" << endl;
		}
	}

	else if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
	{
		if ((a + 26) - (g + total) == 0) {
			cout << "g can hit a" << endl;
		}
	}

	else if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
	{
		if ((b + 26) - (g + total) == 0) {
			cout << "g can hit b" << endl;
		}
	}
	else if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
	{
		if ((c + 26) - (g + total) == 0) {
			cout << "g can hit c" << endl;
		}
	}

	else if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
	{
		if ((d + 26) - (g + total) == 0) {
			cout << "g can hit d" << endl;
		}
	}

	else if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
	{
		if ((a + 26) - (h + total) == 0) {
			cout << "h can hit a" << endl;
		}
	}

	else if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
	{
		if ((b + 26) - (h + total) == 0) {
			cout << "h can hit b" << endl;
		}
	}

	else if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
	{
		if ((c + 26) - (h + total) == 0) {
			cout << "h can hit c" << endl;
		}
	}

	else if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
	{
		if ((d + 26) - (h + total) == 0) {
			cout << "h can hit d" << endl;
		}
	}

	else {
		cout << "e cannot hit anyone" << endl;
		cout << "f cannot hit anyone" << endl;
		cout << "g cannot hit anyone" << endl;
		cout << "h cannot hit anyone" << endl;
	}




}



int main() {



	cout << " ************************************** WELCOME TO KNIGHT KING LUDO ********************************** " << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Group Members :" << endl;
	cout << endl;
	cout << "SYED AOWN RAZA NAQVI" << endl;
	cout << "USMAN WASIF" << endl;
	cout << "HAMZA IMRAN" << endl;
	cout << "UMAR DAUD" << endl;

	_getwch();
	system("cls");

	int a = -1;
	int b = -1;
	int c = -1;
	int d = -1;
	int e = -1;
	int f = -1;
	int g = -1;
	int h = -1;




	displayboard(a, b, c, d, e, f, g, h);
	bool flag = 0, is_out1 = 0, is_out2 = 0;
	int player1Count = 0;               //count of won pieces
	int player2Count = 0;               //count of won pieces

	while (1) {
		if (player1Count == 4) {
			cout << "Player 1 has won the match" << endl;
			break;
		}

		if (player2Count == 4) {
			cout << "Player 2 has won the match" << endl;
			break;
		}

		if (flag == 0) {
			cout << "Player 1 turn" << endl;
			cout << endl;
			cout << "press any key to roll dice" << endl;
			_getwch();

			srand(time(0));

			int input2 = 0;
			char place;
			int input = 1 + (rand() % 6);
			int dice2 = 1 + (rand() % 6);
			int sum = input + dice2;
			cout << "dice 1 score = " << input << endl;
			cout << "dice 2 score = " << dice2 << endl;
			if (input == 5 || dice2 == 5 || is_out1 == 1)
			{
				is_out1 = 1;
				if (input == 5 || dice2 == 5) {                         //if got a 5
					cout << "you got another turn to roll dice press any key to roll again" << endl;;
					_getwch();

					input2 = 1 + (rand() % 6);
					cout << "Dice 3 again = " << input2 << endl;
				}
				int total = input2 + sum;
				cout << "total = " << total << endl;

				suggestion1(total, a, b, c, d, e, f, g, h);                   //calling suggestion

				bool move = false;

				while (move != true) {

					cout << "In which place you want to add (a,b,c,d)" << endl;
					cin >> place;

					if (place == 'a') {
						if (a == -1 && (input == 5 || dice2 == 5))
						{
							a = total - 5;
							move = true;
						}
						else if (a != -1)
						{

							if (a == 55) {
								a = a + input;
							}
							else {
								a = a + total;
							}

							move = true;

							if ((e + 26) - (a + total) == 0) {                           // if a can hit e

								if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)
								{
									cout << "a killed e" << endl;
									e = -1;
								}


							}
							else if ((f + 26) - (a + total) == 0) {
								if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
								{
									cout << "a killed f" << endl;
									f = -1;
								}
							}

							else if ((g + 26) - (a + total) == 0) {

								if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
								{
									cout << "a killed g" << endl;
									g = -1;
								}


							}

							else if ((h + 26) - (a + total) == 0) {

								if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
								{
									cout << "a killed h" << endl;
									h = -1;
								}




							}


							else if (a > 56)
							{
								a = a - total;
							}

							else if (a == 56) {
								cout << "Place a has won" << endl;
								player1Count++;
							}


						}
						else
						{
							cout << "You cannot take the piece out !!!!" << endl;
						}

					}

					if (place == 'b') {

						if (b == -1 && (input == 5 || dice2 == 5))
						{
							b = total - 5;
							move = true;

						}
						else if (b != -1)
						{
							if (b == 55) {
								b = b + input;
							}
							else 
							{
								b = b + total;
							}
							move = true;

							if ((e + 26) - (b + total) == 0) {                                 //if b can hit e

								if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)
								{
									cout << "b killed e" << endl;
									e = -1;
								}


							}
							else if ((f + 26) - (b + total) == 0) {

								if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
								{
									cout << "b killed f" << endl;
									f = -1;
								}

							}
							else if ((g + 26) - (b + total) == 0) {

								if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
								{
									cout << "b killed g" << endl;
									g = -1;
								}


							}
							else if ((h + 26) - (b + total) == 0) {

								if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
								{
									cout << "b killed h" << endl;
									h = -1;
								}


							}

							else if (b > 56)
							{
								b = b - total;
							}

							else if (b == 56) {
								cout << "Place b has won" << endl;
								player1Count++;
							}



						}
						else
						{
							cout << "You cannot take the goti out !!!!" << endl;
						}

					}


					if (place == 'c') {

						if (c == -1 && (input == 5 || dice2 == 5))
						{
							c = total - 5;
							move = true;

						}

						else if (c != -1)
						{
							if (c == 55) {
								c = c + input;
							}
							else {
								c = c + total;
							}
							move = true;

							if ((e + 26) - (b + total) == 0) {                      //if c can hit e

								if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)
								{
									cout << "c killed e" << endl;
									e = -1;
								}

							}
							else if ((f + 26) - (b + total) == 0) {

								if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
								{
									cout << "c killed f" << endl;
									f = -1;
								}

							}
							else if ((g + 26) - (b + total) == 0) {

								if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
								{
									cout << "c killed g" << endl;
									g = -1;
								}

							}
							else if ((h + 26) - (b + total) == 0) {

								if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
								{
									cout << "c killed h" << endl;
									h = -1;
								}


							}
							else if (c > 56)
							{
								c = c - total;
							}

							else if (c == 56) {
								cout << "Place c has won" << endl;
								player1Count++;
							}



						}
						else
						{
							cout << "You cannot take the goti out !!!!" << endl;
						}


					}



					if (place == 'd') {

						if (d == -1 && (input == 5 || dice2 == 5))
						{
							d = total - 5;
							move = true;

						}
						else if (d != -1)
						{
							if (d == 55) {
								d = d + input;
							}
							else {
								d = d + total;
							}
							move = true;

							if ((e + 26) - (d + total) == 0) {

								if (e != -1 || e != 9 || e != 13 || e != 22 || e != 26 || e != 35 || e != 39 || e != 48 || e != 51 || e != 52 || e != 53 || e != 54 || e != 55 || e != 56)  //stops
								{
									cout << "d killed e" << endl;
									e = -1;
								}

							}
							else if ((f + 26) - (d + total) == 0) {

								if (f != -1 || f != 9 || f != 13 || f != 22 || f != 26 || f != 35 || f != 39 || f != 48 || f != 51 || f != 52 || f != 53 || f != 54 || f != 55 || f != 56)
								{
									cout << "d killed f" << endl;
									f = -1;
								}

							}
							else if ((g + 26) - (d + total) == 0) {

								if (g != -1 || g != 9 || g != 13 || g != 22 || g != 26 || g != 35 || g != 39 || g != 48 || g != 51 || g != 52 || g != 53 || g != 54 || g != 55 || g != 56)
								{
									cout << "d killed g" << endl;
									g = -1;
								}

							}
							else if ((h + 26) - (d + total) == 0) {

								if (h != -1 || h != 9 || h != 13 || h != 22 || h != 26 || h != 35 || h != 39 || h != 48 || h != 51 || h != 52 || h != 53 || h != 54 || h != 55 || h != 56)
								{
									cout << "d killed h" << endl;
									h = -1;
								}


							}

							else if (d > 56)
							{
								d = d - total;
							}

							else if (d == 56) {
								cout << "Place d has won" << endl;
								player1Count++;
							}


						}
						else
						{
							cout << "You cannot take the goti out !!!!" << endl;
						}
					}

				}
				displayboard(a, b, c, d, e, f, g, h);
				flag = 1;
				cout << "Press any key to proceed !!!!" << endl;
				_getwch();
				system("cls");

			}
			else
			{
				cout << "Try Again!!!!" << endl;
				flag = 1;
				displayboard(a, b, c, d, e, f, g, h);
				cout << "Press any key to proceed !!!!" << endl;
				_getwch();
				system("cls");
			}


		}

		else if (flag == 1)
        {
			cout << "Player 2 turn" << endl;
			cout << endl;
			cout << "press any key to roll dice" << endl;
			_getwch();
			srand(time(0));
			int input2 = 0;
			char place;
			int input = 1 + (rand() % 6);
			int dice2 = 1 + (rand() % 6);
			cout << " Dice 1 score = " << input << endl;
			cout << "Dice 2 score = " << dice2 << endl;

			int sum = input + dice2;

			if (input == 5 || dice2 == 5 || is_out2 == 1)
			{
				is_out2 = 1;
				if (input == 5 || dice2 == 5) {
					cout << "you got another turn to roll dice press any key to roll again" << endl;
					_getwch();
					input2 = 1 + (rand() % 6);
					cout << "Dice 3 (roll again) = " << input2 << endl;
				}
				int total = sum + input2;
				cout << "total = " << total << endl;

				suggestion2(total, a, b, c, d, e, f, g, h);
				bool move2 = false;
				while (move2 != true)
				{

					cout << "In which place you want to add (e,f,g,h)" << endl;
					cin >> place;

					if (place == 'e') {
						if (e == -1 && (input == 5 || dice2 == 5))
						{
							e = total - 5;
							move2 = true;
						}
						else if (e != -1)
						{
							if (e == 55) {
								e = e + input;
							}
							else {
								e = e + total;
							}
							move2 = true;

							if ((a + 26) - (e + total) == 0) {

								if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
								{
									cout << "e killed a" << endl;
									a = -1;
								}

							}
							else if ((b + 26) - (e + total) == 0) {

								if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
								{
									cout << "e killed b" << endl;
									b = -1;
								}

							}
							else if ((c + 26) - (e + total) == 0) {

								if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
								{
									cout << "e killed c" << endl;
									c = -1;
								}

							}
							else if ((d + 26) - (e + total) == 0) {

								if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
								{
									cout << "e killed d" << endl;
									d = -1;
								}


							}

							else if (e > 56)
							{
								e = e - total;
							}

							else if (e == 56) {
								cout << "Place e has won" << endl;
								player2Count++;
							}


						}
						else
						{
							cout << "You cannot take the goti out !!!!" << endl;
						}
					}



					if (place == 'f') {
						if (f == -1 && (input == 5 || dice2 == 5))
						{
							f = total - 5;
							move2 = true;

						}
						else if (f != -1)
						{
							if (f == 55) {
								f = f + input;
							}
							else {
								f = f + total;
							}
							move2 = true;

							if ((a + 26) - (f + total) == 0) {

								if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
								{
									cout << "f killed a" << endl;
									a = -1;
								}

							}
							else if ((b + 26) - (f + total) == 0) {

								if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
								{
									cout << "f killed b" << endl;
									b = -1;
								}

							}
							else if ((c + 26) - (f + total) == 0) {

								if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
								{
									cout << "f killed c" << endl;
									c = -1;
								}

							}
							else if ((d + 26) - (f + total) == 0) {

								if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
								{
									cout << "f killed d" << endl;
									d = -1;
								}

							}


							else if (f > 56)
							{
								f = f - total;
							}

							else if (f == 56) {
								cout << "Place f has won" << endl;
								player2Count++;
							}


						}
						else
						{
							cout << "You cannot take the goti out !!!!" << endl;
						}
					}



					if (place == 'g') {
						if (g == -1 && (input == 5 || dice2 == 5))
						{
							g = total - 5;
							move2 = true;

						}
						else if (g != -1)
						{
							if (g == 55) {
								g = g + input;
							}
							else {
								g = g + total;
							}
							move2 = true;

							if ((a + 26) - (g + total) == 0) {

								if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
								{
									cout << "g killed a" << endl;
									a = -1;
								}

							}
							else if ((b + 26) - (g + total) == 0) {

								if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
								{
									cout << "g killed b" << endl;
									b = -1;
								}

							}
							else if ((c + 26) - (g + total) == 0) {

								if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
								{
									cout << "g killed c" << endl;
									c = -1;
								}

							}
							else if ((d + 26) - (g + total) == 0) {

								if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
								{
									cout << "g killed d" << endl;
									d = -1;
								}

							}


							else if (g > 56)
							{
								g = g - total;
							}

							else if (g == 56) {
								cout << "Place g has won" << endl;
								player2Count++;
							}


						}
						else
						{
							cout << "You cannot take the goti out !!!!" << endl;
						}
					}



					if (place == 'h') {
						if (h == -1 && (input == 5 || dice2 == 5))
						{
							h = total - 5;
							move2 = true;

						}
						else if (h != -1)
						{
							if (h == 55) {
								h = h + input;
							}
							else {
								h = h + total;
							}
							move2 = true;


							if ((a + 26) - (h + total) == 0) {

								if (a != -1 || a != 9 || a != 13 || a != 22 || a != 26 || a != 35 || a != 39 || a != 48 || a != 51 || a != 52 || a != 53 || a != 54 || a != 55 || a != 56)
								{
									cout << "h killed a" << endl;
									a = -1;
								}

							}
							else if ((b + 26) - (h + total) == 0) {

								if (b != -1 || b != 9 || b != 13 || b != 22 || b != 26 || b != 35 || b != 39 || b != 48 || b != 51 || b != 52 || b != 53 || b != 54 || b != 55 || b != 56)
								{
									cout << "h killed b" << endl;
									b = -1;
								}

							}
							else if ((c + 26) - (h + total) == 0) {

								if (c != -1 || c != 9 || c != 13 || c != 22 || c != 26 || c != 35 || c != 39 || c != 48 || c != 51 || c != 52 || c != 53 || c != 54 || c != 55 || c != 56)
								{
									cout << "h killed c" << endl;
									c = -1;
								}

							}
							else if ((d + 26) - (h + total) == 0) {

								if (d != -1 || d != 9 || d != 13 || d != 22 || d != 26 || d != 35 || d != 39 || d != 48 || d != 51 || d != 52 || d != 53 || d != 54 || d != 55 || d != 56)
								{
									cout << "h killed d" << endl;
									d = -1;
								}

							}


							else if (h > 56)
							{
								h = h - total;
							}

							else if (h == 56) {
								cout << "Place h has won" << endl;
								player2Count++;
							}


						}
						else
						{
							cout << "You cannot take the goti out !!!!" << endl;
						}
					}

				}

				displayboard(a, b, c, d, e, f, g, h);
				flag = 0;
				cout << "Press any key to proceed !!!!" << endl;
				_getwch();
				system("cls");

			}
			else
			{
				cout << "Try Again !!!!" << endl;
				flag = 0;
				displayboard(a, b, c, d, e, f, g, h);

				cout << "Press any key to proceed !!!!" << endl;
				_getwch();
				system("cls");
			}
		}
	}
	system("pause");
	return 0;
}
