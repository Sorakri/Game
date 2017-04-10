#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>


using std::ofstream;
using std::ifstream;

using std::cout;
using std::cin;
using std::string;


int main()
{
	ofstream outputFile;
	ifstream inputFile;

	/*outputFile.open("testFile.txt");
	if (outputFile.fail()) {
		perror("testFile.txt");
		return 1;
	}
	outputFile << "Hello world\n";
	outputFile.close();



	inputFile.open("testFile.txt");
	if (inputFile.fail()) {
		perror("testFile.txt");
			return 1;
	}

	string input;
	while (inputFile >> input) {


		
		getline(inputFile, input);
		cout << input << endl;
	}*/
	int a=0;
	if (!(cin >> a)) {
		cout << "ERROR\n";
		cin.clear();
		cin.ignore(255, '\n');
		
	}
	cout << a << '\n';




	system("PAUSE");


	return 0;
}