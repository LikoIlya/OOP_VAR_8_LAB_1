#pragma once
#include <iostream>
#include <string>
#include "Provider.h"

/*
	��� ������ ��������� �� ����, �� ������:
		- ��������� � ������ ����������� ����� ������� ������� ������� ���� � ������ ������; ������ ������ ���� �� ����� �� ������� � ���� ����; ������������� ��������� �� ��'��� ���������� ����;
		- �� ������� ���������� �������� ��������� �������.
*/
class Goods
{
private:
	std::string _name_of_goods;
	double _price_of_goods;
	int _count;
	Provider _provider;
public:
	//Constructors
	Goods();
	Goods(std::string GoodsName);
	Goods(std::string GoodsName, double Price);
	Goods(std::string GoodsName, double Price, int Count);
	Goods(std::string GoodsName, double Price, int Count, Provider GoodsProvider);
	Goods(const Goods &src);
	//Destrucrtor
	~Goods();
	//Getters
	std::string GetName() { return _name_of_goods; }
	double GetPrice() { return _price_of_goods; }
	int GetCount() { return _count; }
	Provider GetProvider() { return _provider; }
	//Setters
	Goods& SetName(std::string GoodsName);
	Goods& SetPrice(double Price);
	Goods& SetCount(int Count);
	Goods& SetProvider(Provider GoodsProvider);
	//Methods
	void Put();
	void PutFull();
	
};

