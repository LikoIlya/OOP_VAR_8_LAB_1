#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Goods.h"
#include <map>

class IndustrialGoods :
	public Goods
{
private:
	std::string _plc[3] = {
		"In stock", "Depend on the trading", "On display"
	};
	std::string _cond[5] = {
		"Warning!", "Not cant", "Fragile", "Do not throw", "Hazard"
	};
	int _conditions;
	int _place;

public:
	IndustrialGoods();
	IndustrialGoods(Goods Good);
	IndustrialGoods(Goods Good, int Conditions);
	IndustrialGoods(Goods Good, int Conditions, int Place);
	IndustrialGoods(int Conditions);
	IndustrialGoods(int Conditions, int Place);
	IndustrialGoods(std::string GoodsName);
	IndustrialGoods(std::string GoodsName, double Price);
	IndustrialGoods(std::string GoodsName, double Price, int Count);
	IndustrialGoods(std::string GoodsName, double Price, int Count, Provider GoodsProvider);
	IndustrialGoods(std::string GoodsName, double Price, int Count, Provider GoodsProvider, int Conditions);
	IndustrialGoods(std::string GoodsName, double Price, int Count, Provider GoodsProvider, int Conditions, int Place);
	IndustrialGoods(const IndustrialGoods& src);
	~IndustrialGoods();
	IndustrialGoods& SetConditions(int Conditions);
	IndustrialGoods& SetPlace(int Place);
	std::string GetConditions() { return _cond[_conditions]; }
	std::string GetPlace() { return _plc[_place]; }
	std::string alarm();
};
