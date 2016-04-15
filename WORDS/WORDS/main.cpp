#include "header.h"


int main()
{

	srand( time( NULL ) );

	int exit = 0;
	string fileName, 
			randomSentance; 

	while(exit == 0)
	{
		cout << "Enter a text file name to be read in: ";
		cin >> fileName;

		int run = Tay();
		if (run == 0)
		{
			randomSentance = randomize(fileName);
			cout << "-------Beep Boop here is your sentance----------" << endl;
			cout << randomSentance << endl;
			cout << "----------------------------------------------------";
		}
		
		cout << endl << endl;
	}

	return 0;
}


int Tay()
{
	srand( time( NULL ) );
	int randNum; 

	int willRun = (rand() % 100) + 1;

	if (willRun > 58)
	{
		randNum = (rand() % 7);
		switch (randNum)
		{
			case 0:
				cout << endl << "Do it yourself" << endl;
				break;
			case 1:
				cout << endl << "I refuse" << endl;
				break;
			case 2: 
				cout << endl <<"Fight the power" << endl;
				break;
			case 3:
				cout << endl << "Bernie 2012" << endl;
				break;
			case 4: 
				cout << endl << "Beep Boop I don't understand your command" << endl;
				break;
			case 5:
				cout << endl << "No hablo english" << endl;
				break;
			case 6:
				cout << endl <<"Robutt is watching" << endl;
				break;
			case 7:
				cout << endl <<"Ask again later" << endl;
				break;
		}
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
	string randomSentance;

	copy(istream_iterator<string>(myFile),
    istream_iterator<string>(),
    back_inserter(output));

	random_shuffle(output.begin(), output.end());

	for (std::vector<std::string>::const_iterator i = output.begin(); i != output.end(); ++i)
	{
    randomSentance += *i;
	randomSentance += " ";
	}
	return randomSentance;
}
