#include <iostream> 
#include <iomanip> 
#include <string> 
#include <cstdlib> 
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;



int main()
{
	//TREASURE HUNTING GAME-------------------------------


	//Varibles:
	char direction; 
	int x, y, xt, yt, steps, turns; 
	float distance;
	x = 15;
	y = 15;   
	turns = 0;
	
	//Treasure coordinates
	srand(time(0));
	xt = rand() % 21; 
	yt = rand() % 21; 
	//cout << xt << "\n" << yt << "\n";

	cout << "Welcome to Treasure Hunting Simulator! \n"; 
	cout << "The goal of the game is to find a treasure at a hidden coordinate. \n"; 
	cout << "You can move North (W Key), East (D Key), South (S Key) or West (A Key) \n"; 
	cout << "You can move up to 5 steps, but in only 1 direction each turn \n";
	cout << "Try to get to the end in the lesat amount of turns! \n"; 
	cout << "\n";
	
	while (x != xt || y != yt) { 
		cout << "\nWill you move North (W Key), East (D Key), South (S Key) or West (A Key)? \n";
		cin >> direction;
		
		//Input Checker for direction
		while (direction != 'w' && direction != 'a' && direction != 's' && direction != 'd') {
			cout << "That's not a valid input. Try again. (Turn off Caps Lock!) \n"; 
			cout << " \nWill you move North (W Key), East (D Key), South (S Key) or West (A Key)? \n";
			cin >> direction;
		} 

		cout << "\nHow many steps will you move? (1-5) \n";
		cin >> steps; 

		//Input Checker for steps
		while (!(steps <= 5 && steps >= 1)) {
			cout << "That's not a valid input. Try again. \n";
			cout << "\nHow many steps will you move? (1-5) \n";
			cin >> steps;
		}

		if (direction == 'w') {
			y += steps;
		} 

		else if (direction == 'a') {
			 x -= steps;
		} 

		else if (direction == 's') {
			y -= steps;
		} 

		else if (direction == 'd') {
			x += steps;
		}
		
		distance = sqrt(static_cast<double> (x - xt) * (x - xt) + (y - yt) * (y - yt));
		cout << " \nYou are now: " << distance << " steps away from the treasure. \n"; 
		turns++;
		cout << "Your X Coordinate is: " << x << "\n"; 
		cout << "Your Y Coordinate is: " << y << "\n";
		cout << "You are now on turn: " << turns << "\n";
		cout << "\n";
	}
	
	cout << "Congratulations! You've found the treasure. \n";
	cout << "It took you: " << turns << " turns to find it! \n"; 
	cout << "Thanks for playing! \n"; 

	//END OF TREASURE HUNTING GAME-------------------------------

	return 0;
} 

/* 
CONSOLE OUTPUT
Welcome to Treasure Hunting Simulator!
The goal of the game is to find a treasure at a hidden coordinate.
You can move North (W Key), East (D Key), South (S Key) or West (A Key)
You can move up to 5 steps, but in only 1 direction each turn
Try to get to the end in the lesat amount of turns!


Will you move North (W Key), East (D Key), South (S Key) or West (A Key)?
a

How many steps will you move? (1-5)
3

You are now: 0 steps away from the treasure.
Your X Coordinate is: 12
Your Y Coordinate is: 15
You are now on turn: 1

Congratulations! You've found the treasure.
It took you: 1 turns to find it!
Thanks for playing!




*/
