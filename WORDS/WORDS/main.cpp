#include "header.h"


int main()
{

	srand( time( NULL ) );

	int exit = 0;
	string fileName; 

	while(exit == 0)
	{
		cout << "Enter a text file name to be read in: ";
		cin >> fileName;

		int run = Tay();
		if (run == 0)
		{
			
		}
		else
		{
			
		}
	}
}


int Tay()
{

	string sass[6] = { 
		"Do it yourself", 
		"I refuse",
		"Fight the power"
		"Bernie 2012", 
		"Beep Boop I don't understand your command"
		"No hablo english"
		"Ask again later"
	};

	int willRun = (rand() % 100) + 1;
	if (willRun > 58)
	{
		cout << sass[(rand() % 6)];
		return 1;
	}
	else
	{
		return 0;
	}
}


string randomize(string fileName)
{
	vector <string> output; 
	ifstream myFile;
	myFile.open(fileName);

	copy(istream_iterator<string>(myFile),
    istream_iterator<string>(),
    back_inserter(output));


}