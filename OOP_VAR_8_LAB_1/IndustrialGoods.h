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
	IndustrialGoods(int Conditions);
	IndustrialGoods(int Conditions, int plc);
	IndustrialGoods(std::string GoodsName);
	IndustrialGoods(std::string GoodsName, int Price);
	IndustrialGoods(std::string GoodsName, int Price, int Count);
	IndustrialGoods(std::string GoodsName, int Price, int Count, Provider GoodsProvider);
	IndustrialGoods(std::string GoodsName, int Price, int Count, Provider GoodsProvider, int Conditions);
	IndustrialGoods(std::string GoodsName, int Price, int Count, Provider GoodsProvider, int Conditions, int plc);
	IndustrialGoods(const IndustrialGoods &src);
	~IndustrialGoods();
	std::string alarm();
};

