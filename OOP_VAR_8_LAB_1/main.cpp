/*
	���������� ���������� ���� �������� ������� � ����������� ����������� ���������� �����.
	���� �� �� ��������� ������, � ������� ����, �� �������������, �����������:
		-������������ ���������, � ����������� �� ���������;
		-�� �������� ��������� ����, � ���� ���� ���������� ����� ������� �������, � ������������� ����������� �������� ���'��;
		- ����������;
		- �������-��������� ��� ������� ������ �� ������� ����;
		- �� ������� ��� ��������� �� ����� ���������� ��� �������� ���� ��'����; ���� - � ������ ����� � ���������� ������� � ���� ����� �������, ����� - � ������ ����� ����� � �������� ������ � ����, ��� �������� ���������������� ��'���; ���� ���� ������ �����, ���������� ��� ������ ������� ������ ��������� ������� ������ � ������ � �e�����,
		- �������-������������ ������ ��� ������� � ���� � ����������� ��������� �� ������������� ��'���. � ��������� ������� �������� ��� ��'���� �������� �������� ������� ���� � ������������� ��� ���������� ������������. ��� ��������� ��'���� � ������������� ������������ � �����������, ���� ��� ����� ������� � ���������.
	� ��������� ������� �������� ��'���� ���� ������ �� ������������� �������� ��������� ������� � ������� ���������� ��� ��� � ������� �� ����������� ������.
  */
#include "Provider.h"
#include "Goods.h"

using namespace std;

int main()
{
	Provider p = Provider();
	p.Put();
	p.PutFull();
	string a, b, c;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	Provider prov = Provider(a, b, c);
	prov.Put();
	prov.PutFull();
	Goods good = Goods();
	good.Put();
	good.PutFull();
	int k;
	double m;
	getline(cin, a);
	cin >> m >> k;
	Goods g = Goods(a, m, k, prov);
	g.Put();
	g.PutFull();
	system("pause");
}