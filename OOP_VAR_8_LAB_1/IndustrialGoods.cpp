#include "IndustrialGoods.h"

IndustrialGoods::IndustrialGoods() : IndustrialGoods(0)
{
}

IndustrialGoods::IndustrialGoods(Goods Good) : IndustrialGoods(Good, 0)
{
}

IndustrialGoods::IndustrialGoods(Goods Good, int Conditions) : IndustrialGoods(Good, Conditions, 0)
{
}

IndustrialGoods::IndustrialGoods(Goods Good, int Conditions, int Place) : Goods(Good)
{
	_conditions = Conditions;
	_place = Place;
}

IndustrialGoods::IndustrialGoods(int Conditions) : IndustrialGoods(Conditions, 0)
{
}

IndustrialGoods::IndustrialGoods(int Conditions, int plc) : Goods(), _conditions(Conditions), _place(plc)
{
}

IndustrialGoods::IndustrialGoods
(
	std::string GoodsName
) : IndustrialGoods(GoodsName, 0)
{
}

IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price
) : IndustrialGoods(GoodsName, Price, 0)
{
}

IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price,
	int Count
) : IndustrialGoods(GoodsName, Price, Count, Provider())
{
}

IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider
) : IndustrialGoods(GoodsName, Price, Count, GoodsProvider, 0)
{
}

IndustrialGoods::IndustrialGoods
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	int Conditions
) : IndustrialGoods(GoodsName, Price, Count, GoodsProvider, Conditions, 0)
{
}

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

IndustrialGoods::IndustrialGoods(const IndustrialGoods& src)
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

IndustrialGoods& IndustrialGoods::SetConditions(int Conditions)
{
	//std::cout << "Set Conditions:\n0."<<_cond[0]<<std::endl<< "1." << _cond[1] << std::endl << "2." << _cond[2] << std::endl << "3." << _cond[3] << std::endl << "4." << _cond[4] << std::endl;
	if (Conditions < 0)
		Conditions = 0;
	if (Conditions > 4)
		Conditions = 4;
	_conditions = Conditions;
	return *this;
}

IndustrialGoods& IndustrialGoods::SetPlace(int Place)
{
	//std::cout << "Set Place:\n0." << _plc[0] << std::endl << "1." << _plc[1] << std::endl << "2." << _plc[2] << std::endl;
	if (Place < 0)
		Place = 0;
	if (Place > 2)
		Place = 2;
	_place = Place;
	return *this;
}

std::string IndustrialGoods::alarm()
{
	return _cond[_conditions];
}
