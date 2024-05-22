#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define Rock 1
#define Paper 2
#define Scissor 3

int main() {
	srand((unsigned int)time(NULL));
	int player_choose = 0;
	int ai_choose = 0;
	bool draw = false;

	while (!draw) {
		cout << "1) Rock\n2) Paper\n3) Scissor" << endl;
		cout << "Enter your choose: ";
		cin >> player_choose;

		ai_choose = (rand() % 3) + 1;
		switch (ai_choose) {
		case 1:
			cout << "Ai chooses Rock" << endl;
			break;
		case 2:
			cout << "Ai chooses Paper" << endl;
			break;
		case 3:
			cout << "Ai chooses Scissor" << endl;
			break;
		default:
			break;
		}

		if (player_choose == ai_choose) {
			draw = true;
			cout << "Draw! Play again..." << endl;
		}
		else if (player_choose == Rock && ai_choose == Paper) {
			cout << "Ai won" << endl;
		}
		else if (player_choose == Rock && ai_choose == Scissor) {
			cout << "Player won" << endl;
		}
		else if (player_choose == Paper && ai_choose == Rock) {
			cout << "Player won" << endl;
		}
		else if (player_choose == Paper && ai_choose == Scissor) {
			cout << "Ai won" << endl;
		}
		else if (player_choose == Scissor && ai_choose == Rock) {
			cout << "Ai won" << endl;
		}
		else if (player_choose == Scissor && ai_choose == Paper) {
			cout << "Player won" << endl;
		}
	}

	return 0;
}