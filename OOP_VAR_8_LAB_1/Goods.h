#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>
#include "Provider.h"

/*
	��� ������ ��������� �� ����, �� ������:
		- ��������� � ������ ����������� ����� ������� ������� ������� ���� � ������ ������; ������ ������ ���� �� ����� �� ������� � ���� ����; ������������� ��������� �� ��'��� ���������� ����;
		- �� ������� ���������� �������� ��������� �������.
*/
class Goods
{
protected:
	std::string	_name_of_goods;
	double		_price_of_goods;
	int			_count;
	Provider	_provider;
public:
	//Constructors
	Goods();
	Goods(std::string GoodsName);
	Goods(std::string GoodsName, double Price);
	Goods(std::string GoodsName, double Price, int Count);
	Goods(std::string GoodsName, double Price, int Count, Provider GoodsProvider);
	Goods(const Goods& src);
	//Destrucrtor
	~Goods();
	//Getters
	std::string	GetName() { return _name_of_goods; }
	double		GetPrice() { return _price_of_goods; }
	int			GetCount() { return _count; }
	Provider	GetProvider() { return _provider; }
	//Setters
	Goods	&SetName(std::string GoodsName),
			&SetPrice(double Price),
			&SetCount(int Count),
			&SetProvider(Provider GoodsProvider);
	//Methods
	void	Put(),
			PutFull();
	std::string alarm();
	Goods	&operator + (Goods& sec),
			operator ++ (int), //postfix
			&operator ++ (), //prefix
			&operator = (const Goods& src);
	bool	operator == (Goods& sec),
			Equals(const Goods& sec),
			operator<(Goods& sec),
			operator>(Goods& sec);
};
