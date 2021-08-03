
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

//Definition
class romanType
{
public:
	string romanNumeral;
	int negInt;
	int romanIntArray[];
	void getRomanNumeral(string&);
	void romanConverter(string&);

private:

};



//Main Function
int main() {

	//Description Header
	cout << "================================================" << endl;
	cout << "Numeral to Number Converter" << endl;
	cout << "Long Beach City College" << endl;
	cout << "Douglas Lopez" << endl;
	cout << "Dec. 2 2018" << endl;
	cout << "================================================" << endl; 



	//Declarations & Initializations
	romanType myRomanNumeral;
	string romanNumeral;




	//Output
	cout << "Welcome to Minerva's Roman Numeral converter!" << endl;
	cout << "Convert Roman numerals to positive integers with the help of the goddess Minerva!\n" << endl;

	for (int k = 0; k < 3; k++)
	{
		cout << "Enter the Roman Numeral you wish to convert here:";
		myRomanNumeral.getRomanNumeral(romanNumeral);
		myRomanNumeral.romanConverter(romanNumeral);
		romanNumeral = "";
	}

	cout << "Thank you for using the Roman Numeral converter!  Carpe Diem!" << endl;

	system("pause");
	return 0;
}



//Function Definitions
void romanType::romanConverter(string& romanNumeral)
{
	unsigned short int n = romanNumeral.length();
	int sum = 0;
	int total;
	for (int i = 0; i < n; i++)
	{
		if (romanNumeral[i] == 'I')
		{
			romanIntArray[i] = 1;
		}
		else if (romanNumeral[i] == 'V')
		{
			romanIntArray[i] = 5;
			if (i > 0 && romanNumeral[i - 1] == 'I')
			{
				negInt = -2;
			}
		}
		else if (romanNumeral[i] == 'X')
		{
			romanIntArray[i] = 10;
			if (i > 0 && romanNumeral[i - 1] == 'I')
			{
				negInt = -2;
			}
		}
		else if (romanNumeral[i] == 'L')
		{
			romanIntArray[i] = 50;
			if (i > 0 && romanNumeral[i - 1] == 'X')
			{
				negInt = -20;
			}
		}
		else if (romanNumeral[i] == 'C')
		{
			romanIntArray[i] = 100;
			if (i > 0 && romanNumeral[i - 1] == 'X')
			{
				negInt = -20;
			}
		}
		else if (romanNumeral[i] == 'D')
		{
			romanIntArray[i] = 500;
			if (i > 0 && romanNumeral[i - 1] == 'C')
			{
				negInt = -200;
			}
		}
		else if (romanNumeral[i] == 'M')
		{
			romanIntArray[i] = 1000;
		}


		sum = sum + romanIntArray[i];


	}


	total = sum + negInt;
	cout << "The equivalent is: " << total << endl << endl;
	negInt = 0;

}

void romanType::getRomanNumeral(string& romanNumeral)
{

	cin >> romanNumeral;
	cout << "The Roman numeral entered is: " << romanNumeral << endl;

}

