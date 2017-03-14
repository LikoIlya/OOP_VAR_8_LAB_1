#include "IndustrialGoods.h"


///TODO: Finish getters and setters


IndustrialGoods::IndustrialGoods() : IndustrialGoods(0) {}
IndustrialGoods::IndustrialGoods(int Conditions) : IndustrialGoods(Conditions,0) {}
IndustrialGoods::IndustrialGoods(int Conditions, int plc) : Goods(), _conditions(Conditions), _place(plc) {}
IndustrialGoods::IndustrialGoods
(
	std::string GoodsName
) : IndustrialGoods(GoodsName,0) {}
IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price
) : IndustrialGoods(GoodsName, Price,0) {}
IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price,
	int Count
) : IndustrialGoods(GoodsName, Price, Count,Provider()) {}
IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider
) : IndustrialGoods(GoodsName, Price, Count,GoodsProvider,0) {}
IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	int Conditions
) : IndustrialGoods(GoodsName, Price, Count, GoodsProvider, Conditions, 0) {}
IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	int Conditions,
	int plc
) : Goods(GoodsName, Price, Count, GoodsProvider)
{
	_conditions = Conditions;
	_place = plc;
}
IndustrialGoods::IndustrialGoods(const IndustrialGoods & src)
{
	_name_of_goods = src._name_of_goods;
	_count = src._count;
	_price_of_goods = src._price_of_goods;
	_provider = src._provider;
	_conditions = src._conditions;
	_place = src._place;
}
IndustrialGoods::~IndustrialGoods()
{
}
std::string IndustrialGoods::alarm()
{
	return _cond[_conditions];
}
