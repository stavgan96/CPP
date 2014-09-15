#include <cmath>
using namespace std;

void main(){
	setlocale(LC_ALL, "Russian");
	float a,b,c;
	double rezult = 0;
	bool job = false;
	char yn;
	do {
		cout << "Введите переменные a,b,c через пробел:" << endl;
		cin >> a >> b >> c;
		cout << "Вы ввели следующие: a= " << a << " b= " << b << " c= " << c << endl;
		rezult = (b + sqrt(pow(b, 2) + 4 * a * c) / (2 * a)) - (pow(a, 3) * c + pow(b, -2));
		cout << "Результат равен: " << rezult << endl;
		cout << "Продолжим?(y|n)" << endl;
		cin >> yn;
		if (yn == 'y')
			job = true;
	} while (job);
	system("pause");
}