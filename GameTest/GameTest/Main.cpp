#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

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
	outputFile.close();*/

	inputFile.open("testFile.txt");
	if (inputFile.fail()) {
		perror("testFile.txt");
			return 1;
	}

	string input;
	while (inputFile >> input) {


		
		getline(inputFile, input);
		cout << input << endl;
	}
	




	system("PAUSE");


	return 0;
}