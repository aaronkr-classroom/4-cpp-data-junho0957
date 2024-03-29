#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::vector;
int main()
{
	cout << "Enter word: \n";
	vector<string> word;
	string s;
	

	while (cin >> s) {

		if (s == "finish") {
			break;
		}

		word.push_back(s);
	}

	cout << "Words: " << word.size();

	return 0;
}