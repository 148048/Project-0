// (My first program) A program to determine if a number is even or odd.

#include <iostream.h>

int main () // The begining.
{
	string number;
	int n = 0;
	if (n == 0)
		cout << "Enter a number: "; // Asks them to enter a number.
	retry: // The goto point to allow them to enter another number, essentially restarting the process.
		if (n > 0)
		{
			m = n++; // m will be outputed instead of n because m needs to be one greater than n due to how n began at 0(0 would've been their attempt #1).
			cout << "Enter another number" << "(Attempt" << m++ << "):" ; // Asks them to enter a number again & tells them what attempt they are on.
		}
	cin >> number;
	cout << "The number you entered is " << number; // Tells them what number they entered.
		string confirm1;
		cout << "Are you sure? (Yes / No) (Case Sensitive) "; // Asks if they are sure about the number they have typed.
		cin >> confirm1;
		if (confirm1 == "No")
			{
			if (n > 1)
					n++
				n++; // Adds 1 to n to signify they will be on their next attempt.
				goto retry; // Goes back to the nearly the begining.
			}
		if (confirm1 != "Yes" && confirm1 != "No")
			{
				if (n > 1)
					n++
				n++; // Adds 1 to n to signify they will be on their next attempt.
				cout << "You made a spelling error or did not type one of the two possible replies (Yes / No).";
				cout << "Try Again.";
				goto retry; // Goes back to nearly the begining.
			}
	if (number / 2 * 2 == number) // Finds out whether it is an even or odd number.
		cout << number << "is an even number.";
		else cout << number << "is an odd number.";
	string confirm2;
	cout << "Would you like to try another number? (Yes / No) (Case Sensitive)"; // Trolls them.
	cin >> confirm2;
	cout << "Too bad. You'll have to start this program again because I'm lazy."; // If they see this, then it was a success.
	return 0; // The End.
}