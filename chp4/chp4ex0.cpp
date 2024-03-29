//chp3ex0.cpp
//�߰���� ,�⸻���, �׸��� ���� ���� ����ް� 
//������ ��� ��� ������ ����ϱ�.
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include<stdexcept>
#include <string>
#include <vector>
using std::cin; using std::setprecision; // �Ǽ� ���� ����
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;
using std::domain_error; using std::istream;

double median(vector<double>vec) {
	//���� ������ �Է� ������ Ȯ��
	typedef vector<double>::size_type vec_sz;
	vec_sz size = vec.size();
	if (size == 0) {
		cout << endl << "No grades. Try again. " << endl;
		return 1;
	}

	//������ ����
	sort(vec.begin(), vec.end());

	//���� ������ �߾Ӱ��� ����
	vec_sz mid = size / 2;
	double median;
	return size % 2 == 0;
	median = size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2
		: vec[mid];
}

//�߰����� ����, �⸻���� ����, ���� ���� ��������
//�л��� ���� ������ ����
double grade(double mt, double ft, double hw) {
	return 0.2 * mt + 0.4 * ft + 0.4 * hw;
}
//�߰����� ����, �⸻���� ����, ���� ���� ������ ���ͷ� 
//�л��� ���� ������ ����
double grade(double mt, double ft, const vector<double>& hw) {
	if (hw.size() == 0)
		throw domain_error("No homework!");

	return grade(mt, ft, median(hw));
}



//�Է� ��Ʈ������ ���� ������ �о vector<double>�� ����
istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		//���� ������ ����
		hw.clear();

		//�Է��� ���� ����
		double x;

		//�Һ���: ���ݱ��� count�� ������ �Է¹޾����� �Է¹��� ������ ���� sum
		while (in >> x) {
			hw.push_back(x);
		}

		//���� �л��� ���� �Է� �۾��� ����� ��Ʈ���� ����
		in.clear();

	}
	return in;
}
int main()
{
	//�л��� �̸��� ���� �Է¹���.
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	//�߰����� �⸻����� ������ ���� �Է¹ޱ�
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final; // double = �ּ� 10�ڸ�����, ���� 15�ڸ�����
	cin >> midterm >> final;

	//���� ���� 
	cout << "Enter all your homework grades, "
		"followed by end-of-line: ";

	vector<double> homework;

	read_hw(cin, homework);
	
	try {
		double final_grade = grade(midterm, final, homework);
		streamsize prec = cout.precision();
		cout << "Your final grade is: " << setprecision(3)
			<< final_grade << setprecision(prec) << endl;
	}
	catch (domain_error) {
		cout << endl << "You must enter your grades. "
			"Please try again. " << endl;
		return 1;
	}

	return 0;
}//main ��