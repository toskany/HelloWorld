#pragma once

using int32 = int;

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	// int GetCurrentTry() const;

	int32 MyCurrentTry;
private:
	int32 MyMaxTries;
	bool PlayAgain = false;
};
