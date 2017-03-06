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
	int k, m;
	getline(cin, a);
	cin >> k >> m;
	Goods g = Goods(a, k, m, prov);
	g.Put();
	g.PutFull();
	system("pause");
}