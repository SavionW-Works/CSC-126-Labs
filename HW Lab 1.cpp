#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Exercise 1
	int shares; 
	float int_price; 
	float cur_price; 
	float profit;

	cout << fixed << setprecision(2);
	cout << "Welcome to the  stock profit calculator!" << "\n"; 
	cout << "How many shares did you buy? ";
	cin >> shares; 
	cout << "\n";  

	cout << "What was the price of your stock when you purchased it? ";
	cin >> int_price;
	cout << "\n"; 

	cout << "What is the price of your stock now? ";
	cin >> cur_price;
	cout << "\n"; 

	profit = (shares * cur_price) - (shares * int_price);
	cout << "You've made a profit of: $" << profit << " dollars since you bought " <<
	shares << " of this stock";
	// 


	//Exercise 2 
	cout << "\n";
	cout << "\n";
	
	int Guess;
	int Num;
	cout << "Welcome to the number guesser!" <<"\n";
	cout << "We choose 5 five digit numbers, and I'll guess their sum from just your first input!" << "\n";
	cout << "Go ahead and guess your first number!"; 
	cin >> Num;  
	Guess = Num + 199998;
	cout << "\n" << "Our sum will be: " << Num + 199998;
	
	cout << "\n" <<   "Guess our second number";
	cin >> Num; 
	cout << "\n" << "Our  third number is: " << 99999 - Num; 

	cout << "\n" << "Guess our  fourth number";
	cin >> Num;
	cout << "\n" << "Our  fifth number is: " << 99999 - Num;  

	cout << "\n" << "Tada! Look at our numbers! Add them up and they'll be: " << Guess << " just like I said! :D"; 
	cout << "\n"; 
	cout << "\n";
	// 


	//Exercise 3 
	string place; 
	string vehicle; 
	string food1; 
	string food2; 
	string food3; 
	string activity;
	string thing; 
	string emotion;  

	cout << "Welcome to the story builder! Enter some fun words for a fun story!"; 
	
	cout << "\n" << "Name a place! "; 
	cin >> place; 

	cout << "\n" << "Name a vehicle! ";
	cin >> vehicle; 

	cout << "\n" << "Name a food! ";
	cin >> food1; 

	cout << "\n" << "Name a food! ";
	cin >> food2; 

	cout << "\n" << "Name a food! ";
	cin >> food3; 

	cout << "\n" << "Name an activity! ";
	cin >> activity;  

	cout << "\n" << "Name an object! ";
	cin >> thing; 

	cout << "\n" << "Name an emotion! ";
	cin >> emotion; 

	cout << "\n";
	cout << "The sun was shining and you decided to go on a picnic!" << "\n"; 
	cout << "So you hopped into your " << vehicle << " and rode all the way to " << place << "\n";
	cout << "When you arrived, you laid out your yummy spread of " << food1 <<", " << food2 << ", "<< "and " << food3 << "." << "\n";
	cout << "After your lunch, you walked off to engage in "<< activity << " until the sun set" << "\n";
	cout << "Then, you went back to your " << vehicle << " and even saw a(n) " << thing << " on you way home!" << "\n";
	cout << "It sure was a(n) " << emotion << " day! " << "\n";
	
	
	return 0;
}