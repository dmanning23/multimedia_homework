#include <iostream>
using namespace std;

void PrintEverything(int iPatternHeight);
void PrintPattern(int iPatternHeight);
void GetChars(int iPatternHeight, char &X, char &O);

int main(int argc, char* argv[])
{
	//the different patterns
	PrintEverything(1);
	PrintEverything(3);
	PrintEverything(5);
	PrintEverything(7);
}

void PrintEverything(int iPatternHeight)
{
	cout << "iPatternHeight = " << iPatternHeight << endl;
	PrintPattern(iPatternHeight);
	cout << endl;
}

void PrintPattern(int iPatternHeight)
{
	//Check the input is a positive number
	if (iPatternHeight <= 0)
	{
		cout << "iPatternHeight must be greater than 0\n";
		return;
	}

	//check the input is an odd number
	if (1 != (iPatternHeight  % 2))
	{
		cout << "iPatternHeight must be an odd number\n"; 
		return;
	}

	//Get the characters to draw
	char X, O;
	GetChars(iPatternHeight, X, O);

	//Start drawing the rows
	for (int row = 0; row < iPatternHeight; row++)
	{
		//get the number of times to swap the chars
		int numSwap = 0;
		int halfPattern = (iPatternHeight / 2);
		if (row < (halfPattern + 1))
		{
			//it is still the top half of the pattern
			numSwap = row;
		}
		else
		{
			//it is the bottom half of the pattern
			numSwap = iPatternHeight - (row + 1);
		}

		bool swap = false; //draw X or O
		for (int column = 0; column < iPatternHeight; column++)
		{
			//draw the correct character
			if (swap)
			{
				cout << O;
			}
			else
			{
				cout << X;
			}

			//do we want to change the next character drawn?
			if (column < numSwap)
			{
				swap = !swap;
			}
			else if (column >= (iPatternHeight - (numSwap + 1)))
			{
				swap = !swap;
			}
		}

		cout << endl;
	}
}

//Are we starting with X's or O's?
void GetChars(int iPatternHeight, char &X, char &O)
{
	if (((iPatternHeight + 1) % 4) == 0)
	{
		//Swap the characters
		X = 'O';
		O = 'X';
	}
	else 
	{
		X = 'X';
		O = 'O';
	}
}
