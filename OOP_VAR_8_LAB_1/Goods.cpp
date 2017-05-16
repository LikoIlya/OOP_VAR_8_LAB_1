#include "Goods.h"

Goods::Goods(const Goods& src)
{
	_count = src._count;
	_name_of_goods = src._name_of_goods;
	_price_of_goods = src._price_of_goods;
	_provider = src._provider;
}

Goods::Goods() : Goods("StdName"){}

Goods::Goods(std::string GoodsName) : Goods(GoodsName, 0){}

Goods::Goods(std::string GoodsName, double Price) : Goods(GoodsName, Price, 0){}

Goods::Goods(std::string GoodsName, double Price, int Count) : Goods(GoodsName, Price, Count, Provider()){}

Goods::Goods(std::string GoodsName, double Price, int Count, Provider GoodsProvider)
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

Goods Goods::operator+(Goods & sec)
{
	try
	{
		if (this->_name_of_goods != sec._name_of_goods)
		{
			throw std::exception("Not the same goods");
		}
		Goods temp = *this;
		temp._count = this->_count + sec._count;
		return temp;
	}
	catch (std::exception err)
	{
		std::cerr << err.what() << std::endl;
		return *this;
	}
}

Goods & Goods::operator=(const Goods & src)
{
	_name_of_goods = src._name_of_goods;
	_price_of_goods = src._price_of_goods;
	_count = src._count;
	_provider = src._provider;
	return *this;
}

bool Goods::operator==(Goods & sec)
{
	return this->Equals(sec);
}

bool Goods::operator>(Goods & sec)
{
	return _price_of_goods > sec._price_of_goods;
}

bool Goods::operator<(Goods & sec)
{
	return _price_of_goods < sec._price_of_goods;
}

bool Goods::Equals(const Goods& sec)
{
	if (
		this->_name_of_goods == sec._name_of_goods &&
		this->_count == sec._count &&
		this->_price_of_goods == sec._price_of_goods &&
		this->_provider.Equals(sec._provider)
		)
		return true;
	return false;
}

Goods & Goods::operator++()
{
	_count++;
	return *this;
}	

Goods Goods::operator++(int)
{
	Goods temp = *this;
	++*this;
	return temp;
}

Goods& Goods::SetName(std::string GoodsName)
{
	_name_of_goods = GoodsName;
	return *this;
}

Goods& Goods::SetPrice(double Price)
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
std::ostream & operator << (std::ostream & o, Goods src)
{
	return o << "<Goods>\nName: " << src._name_of_goods << "\nPrice: " << src._price_of_goods << "\nCount: " << src._count << "\nProvider: " << src._provider.GetName() << std::endl;
}