#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::setprecision; // 실수 숫자 길이
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::vector;
int main()
{

	vector<int>numbers;

	int x;


	while (cin >> x)
	{
		numbers.push_back(x);
	}

	if (numbers.size() % 4 != 0) {
		cout << "사분위수를 찾기 위해서는 정수의 개수가 4의 배수여야 함";
		return 1;
	}

	sort(numbers.begin(), numbers.end());


	for (int i = 0; i < 3; i++) {
		int id = numbers.size() / 4 * (i + 1) - 1;

		cout << i + 1 << "번째 사분위 수: " << numbers[id] << endl;
	}





	return 0;
}