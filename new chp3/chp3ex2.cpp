#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::setprecision; // �Ǽ� ���� ����
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
		cout << "��������� ã�� ���ؼ��� ������ ������ 4�� ������� ��";
		return 1;
	}

	sort(numbers.begin(), numbers.end());


	for (int i = 0; i < 3; i++) {
		int id = numbers.size() / 4 * (i + 1) - 1;

		cout << i + 1 << "��° ����� ��: " << numbers[id] << endl;
	}





	return 0;
}