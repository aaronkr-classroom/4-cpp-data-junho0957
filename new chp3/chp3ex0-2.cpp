//chp3ex0.cpp
//중간고사 ,기말고사, 그리고 과제 점수 몇개를받고 
//마지막 평균 결과 점수를 계산하기.
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include<stdexcept>
#include <string>
#include <vector>
using std::cin; using std::setprecision; // 실수 숫자 길이
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;
using std::domain_error
//중간시험 점수, 기말시험 점수, 종합 과제 점수에서
//학생의 종합 점수를 가함
double grade(double mt, double ft, double hw) {
	return 0.2 * mt + 0.4 * ft + 0.4 * hw;
}
//중간시험 점수, 기말시험 점수, 종합 과제 점수의 벡터로 
//학생의 종합 점수를 가함
double grade() {

}
double median(vector<double>::size_type vec_sz) {

}
int main()
{
	//학생의 이름을 묻고 입력받음.
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	//중간고사와 기말고사의 점수를 묻고 입력받기
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final; // double = 최소 10자리까지, 보통 15자리까지
	cin >> midterm >> final;

	//과제 점수 
	cout << "Enter all your homework grades, "
		"followed by end-of-line: ";
	//지금까지 입력된 과제 점수의 합
	
	vector<double> homework;

	//입력을 위한 변수
	double x;

	//불변성: 지금까지 count개 점수를 입력받았으며 입력받은 점수의 합은 sum
	while (cin >> x) {
		homework.push_back(x);
	}
	//과제 점수의 입력 유무를 확인
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "No grades. Try again. " << endl;
		return 1;
	}

	//점수를 정렬
	sort(homework.begin(), homework.end());

	//과제 점수의 중앙값을 구함
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
		: homework[mid];


	//결과를 출력
	streamsize prec = cout.precision();
	cout << "Your final grade is: " << setprecision(3)
		<< grade(midterm, final, median)
		<< setprecision(prec) << endl;
	return 0;
}//main 끝