#include "Goods.h"

Goods::Goods(const Goods& src)
{
	_count = src._count;
	_name_of_goods = src._name_of_goods;
	_price_of_goods = src._price_of_goods;
	_provider = src._provider;
}

Goods::Goods() : Goods("StdName")
{
}

Goods::Goods(std::string GoodsName) : Goods(GoodsName, 0)
{
}

Goods::Goods(std::string GoodsName, int Price) : Goods(GoodsName, 0, 0)
{
}

Goods::Goods(std::string GoodsName, int Price, int Count) : Goods(GoodsName, 0, 0, Provider())
{
}

Goods::Goods(std::string GoodsName, int Price, int Count, Provider GoodsProvider)
{
	_name_of_goods = GoodsName;
	_price_of_goods = Price;
	_count = Count;
	_provider = GoodsProvider;
}

Goods::~Goods()
{
	//delete this;
}

void Goods::Put()
{
	std::cout << "" << _name_of_goods << "" << std::endl;
}

void Goods::PutFull()
{
	std::cout << "Goods: " << _name_of_goods << " Price: " << _price_of_goods << " Count: " << _count << " Provider: " << _provider.GetName() << std::endl;
}

std::string Goods::alarm()
{
	return _name_of_goods;
}

Goods& Goods::SetName(std::string GoodsName)
{
	_name_of_goods = GoodsName;
	return *this;
}

Goods& Goods::SetPrice(int Price)
{
	_price_of_goods = Price;
	return *this;
}

Goods& Goods::SetCount(int Count)
{
	_count = Count;
	return *this;
}

Goods& Goods::SetProvider(Provider GoodsProvider)
{
	_provider = GoodsProvider;
	return *this;
}
