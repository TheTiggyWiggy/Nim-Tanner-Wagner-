#ifndef NIMPLAYER_H
#define NIMPLAYER_H
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class NimPlayer
{
public:
	void GameMessage();
	void NamePlayer();
	void GameAlgo();
	void DetermineWinner();
private:
	string player1, player2;
	int userPlayer = 1;
	int gameInput = 0;
	int numSticks = 22;
};
#endif