// ������6������ ������ �++
#include < iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n =11, m =20;
	int &refn = n;
	int* pn = &n;

	// ����� ��������
	cout << refn << endl;
	cout << pn << endl;

	//����� �������������
	//cout << *refa << endl;// ������ � ������ ��� �������������
	cout << *pn << endl;

	// ������ ����� ������ � ���������
	refn = 12;
	cout << n << endl;
	*pn = 13;
	cout << n << endl;


	// ��������������
	refn = m;
	pn = &m;












	return 0;
}