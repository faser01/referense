// ѕерсон6альный шаблон —++
#include < iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n =11, m =20;
	int &refn = n;
	int* pn = &n;

	// вывод значени€
	cout << refn << endl;
	cout << pn << endl;

	//адрес разименовани€
	//cout << *refa << endl;// ошибка у ссылки нет разименовани€
	cout << *pn << endl;

	// мен€ем через ссылку и указатель
	refn = 12;
	cout << n << endl;
	*pn = 13;
	cout << n << endl;


	// перенаправл€ем
	refn = m;
	pn = &m;












	return 0;
}