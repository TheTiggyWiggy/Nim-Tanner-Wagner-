#include "NimPlayer.h"

int main()
{
	// Driver variables
	int mainUserDecision = 0;
	bool gameCondition = true;

	while (true)
	{
		// Declare instance
		NimPlayer startGame;
		startGame.GameMessage();

		cout << "If you would like to play, enter '1'.";
		cout << "\nIf you would like to leave, enter anything else. ";

		cin >> mainUserDecision;

		if (mainUserDecision == 1)
		{
			cout << "\nVery good" << endl;
			Sleep(1000);
			cout << "Now . . . " << endl;
			Sleep(1000);
			cout << "Name your players and get ready to play:" << endl;

			// Game drivers
			startGame.NamePlayer();
			startGame.GameAlgo();
			startGame.DetermineWinner();
		}
		else
		{
			cout << "\nGoodbye!! (-_-)\n";
			break;
		}

		// Play again
		cout << "Would you like to play again? '1' for yes, any other key for 'no'." << endl;
		cin >> mainUserDecision;

		if (mainUserDecision == 1)
		{
			cout << "\nOk . . ." << endl;
			Sleep(1000);
			cout << "Get ready to play again.\n\n" << endl;
			continue;
		}
		else
		{
			cout << "\nSee ya, chump." << endl;
			break;
		}

	}

	return 0;
}