// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FBullCowGame.h"
#include <iostream>
#include <string>

FBullCowGame BCGame;

using FText = std::string;
using int32 = int;

void PlayGame();
bool AskToPlayAgain();

int main()
{
	PlayGame();
	AskToPlayAgain();
    return 0;
}

void PlayGame()
{
	std::string UserGuess;

	while (BCGame.MyCurrentTry <= 10) {
		std::cout << "Current try: " << BCGame.MyCurrentTry << ". Max tries: " << BCGame.GetMaxTries() << ".\n\n";
		std::cout << "Hello, my friend!\n";
		std::cout << "Enter your guess:\n\n";
		std::getline(std::cin, UserGuess);
		std::cout << "Your guess was: " << UserGuess << "\n\n";
		BCGame.MyCurrentTry++;

	}
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?";
	FText Response;
	std::getline(std::cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');
}