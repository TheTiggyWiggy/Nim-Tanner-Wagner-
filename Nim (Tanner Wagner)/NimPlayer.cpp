#include "NimPlayer.h"

void NimPlayer::GameMessage()
{
	cout << "  Welcome to the game of NIM" << endl;
	cout << " There are 22 sticks in a pile" << endl;
	cout << "You may remove anywhere between" << endl;
	cout << "     1-4 sticks at a time" << endl;
	cout << "Player that gets the pile to 0 wins!" << endl << endl << endl;
}

void NimPlayer::NamePlayer()
{
	cin.ignore();
	getline(cin, player1);
	getline(cin, player2);
	cout << endl;

	cout << "Player 1: " << player1 << endl;
	cout << "Player 2: " << player2 << endl << endl;
}

void NimPlayer::GameAlgo()
{
	while (numSticks != 0)
	{
		if (userPlayer == 1)
		{
			cout << player1 << " what's your move? ";
			cin >> gameInput;

			if (gameInput > 0 && gameInput <= 4)
			{
				system("cls");

				if (numSticks == 3 && gameInput > 3)
				{
					cout << "ERROR!" << endl;
					Sleep(1000);
					cout << "You have gone out of bounds" << endl;
					Sleep(800);
					cout << "Please enter a number between 1-3" << endl << endl;
					continue;
				}
				if (numSticks == 2 && gameInput > 2)
				{
					cout << "ERROR!" << endl;
					Sleep(1000);
					cout << "You have gone out of bounds" << endl;
					Sleep(800);
					cout << "Please enter a number between 1-2" << endl << endl;
					continue;
				}
				if (numSticks == 1 && gameInput > 1)
				{
					cout << "ERROR!" << endl;
					Sleep(1000);
					cout << "You have gone out of bounds" << endl;
					Sleep(800);
					cout << "You only have one option here" << endl;
					cout << "Don't mess this up" << endl << endl;
					continue;
				}

				numSticks -= gameInput;
				cout << numSticks << " left in the pile." << endl;
				cout << endl;
				userPlayer = 2;

				continue;
			}
			else
			{
				system("cls");
				cout << "(-_-)" << endl;
				Sleep(1000);
				cout << "What do the instructions say?" << endl;
				Sleep(800);
				cout << "That's right" << endl;
				cout << "ANY NUMBER BETWEEN 1-4 ONLY!!" << endl;
				cout << "Try again!" << endl << endl;
			}
		}

		if (userPlayer == 2)
		{
			cout << player2 << " what's your move? ";
			cin >> gameInput;

			if (gameInput > 0 && gameInput <= 4)
			{
				system("cls");

				if (numSticks == 3 && gameInput > 3)
				{
					cout << "ERROR!" << endl;
					Sleep(1000);
					cout << "You have gone out of bounds" << endl;
					Sleep(800);
					cout << "Please enter a number between 1-3" << endl << endl;
					continue;
				}
				if (numSticks == 2 && gameInput > 2)
				{
					cout << "ERROR!" << endl;
					Sleep(1000);
					cout << "You have gone out of bounds" << endl;
					Sleep(800);
					cout << "Please enter a number between 1-2" << endl << endl;
					continue;
				}
				if (numSticks == 1 && gameInput > 1)
				{
					cout << "ERROR!" << endl;
					Sleep(1000);
					cout << "You have gone out of bounds" << endl;
					Sleep(800);
					cout << "You only have one option here" << endl;
					cout << "Don't mess this up" << endl << endl;
					continue;
				}

				numSticks -= gameInput;
				cout << numSticks << " left in the pile." << endl;
				cout << endl;
				userPlayer = 1;

				continue;
			}
			else
			{
				system("cls");
				cout << "(-_-)" << endl;
				Sleep(1000);
				cout << "What do the instructions say?" << endl;
				Sleep(800);
				cout << "That's right" << endl;
				cout << "ANY NUMBER BETWEEN 1-4 ONLY!!" << endl;
				cout << "Try again!" << endl << endl;
			}
		}
	}
}

void NimPlayer::DetermineWinner()
{
	if ((numSticks == 0) && (userPlayer == 2))
	{
		cout << player1 << " wins!" << endl << endl;
	}
	if ((numSticks == 0) && (userPlayer == 1))
	{
		cout << player2 << " wins!" << endl << endl;
	}
}