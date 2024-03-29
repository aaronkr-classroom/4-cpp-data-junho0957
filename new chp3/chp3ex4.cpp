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


bool cmp(string a, string b)
{
	return a.length() < b.length();
}
int main()
{


	vector<string>word;
	cout << "Enter all words followed by EOF: \n";
	string max = "";
	string min = "";
	string s;

	while (cin >> s) {

		if (s == "finish") {
			break;
		}
		word.push_back(s);
		if (min.size() == 0)min = s;
		if (max.size() == 0)max = s;

		if(s.size() < min.size())min = s;
		else if(s.size() > max.size())max = s;
	}
	


	cout << "���� ª�� ����: \n" << min;
	cout << "���� �� ����: " << max;
	return 0;
}