#include <cmath>
using namespace std;

void main(){
	setlocale(LC_ALL, "Russian");
	float a,b,c;
	double rezult = 0;
	bool job = false;
	char yn;
	do {
		cout << "������� ���������� a,b,c ����� ������:" << endl;
		cin >> a >> b >> c;
		cout << "�� ����� ���������: a= " << a << " b= " << b << " c= " << c << endl;
		rezult = (b + sqrt(pow(b, 2) + 4 * a * c) / (2 * a)) - (pow(a, 3) * c + pow(b, -2));
		cout << "��������� �����: " << rezult << endl;
		cout << "���������?(y|n)" << endl;
		cin >> yn;
		if (yn == 'y')
			job = true;
	} while (job);
	system("pause");
}