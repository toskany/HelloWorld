#include "stdafx.h"
#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame()
{
	MyCurrentTry = 1;
	MyMaxTries = 3;
}

// Getters
int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
// int FBullCowGame::GetCurrentTry() { return MyCurrentTry; }
