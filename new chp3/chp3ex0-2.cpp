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
using std::domain_error
//�߰����� ����, �⸻���� ����, ���� ���� ��������
//�л��� ���� ������ ����
double grade(double mt, double ft, double hw) {
	return 0.2 * mt + 0.4 * ft + 0.4 * hw;
}
//�߰����� ����, �⸻���� ����, ���� ���� ������ ���ͷ� 
//�л��� ���� ������ ����
double grade() {

}
double median(vector<double>::size_type vec_sz) {

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
	//���ݱ��� �Էµ� ���� ������ ��
	
	vector<double> homework;

	//�Է��� ���� ����
	double x;

	//�Һ���: ���ݱ��� count�� ������ �Է¹޾����� �Է¹��� ������ ���� sum
	while (cin >> x) {
		homework.push_back(x);
	}
	//���� ������ �Է� ������ Ȯ��
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "No grades. Try again. " << endl;
		return 1;
	}

	//������ ����
	sort(homework.begin(), homework.end());

	//���� ������ �߾Ӱ��� ����
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
		: homework[mid];


	//����� ���
	streamsize prec = cout.precision();
	cout << "Your final grade is: " << setprecision(3)
		<< grade(midterm, final, median)
		<< setprecision(prec) << endl;
	return 0;
}//main ��