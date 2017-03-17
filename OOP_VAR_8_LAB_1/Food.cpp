#include "Food.h"

Food::Food() : Food(0)
{
}

Food::Food(Goods Good) : Food(Good, 0, 0, 0)
{
}

Food::Food(Goods Good, int day, int month, int year) : Food(Good, day, month, year, 0)
{
}

Food::Food(Goods Good, int day, int month, int year, int days) : Goods(Good)
{
	_expirationDate = 60 * 60 * 24 * days;
	_prodDate = makeDate(day, month, year);
}

Food::Food(int day, int month, int year) : Food(day,month,year, 0)
{
}

Food::Food(int day, int month, int year, int days) : Goods()
{
	_expirationDate = 60 * 60 * 24 * days;
	_prodDate = makeDate(day, month, year);
}

Food::Food
(
	std::string GoodsName
) : Food(GoodsName, 0)
{
}

Food::Food
(
	std::string GoodsName,
	int Price
) : Food(GoodsName, Price, 0)
{
}

Food::Food
(
	std::string GoodsName,
	int Price,
	int Count
) : Food(GoodsName, Price, Count, Provider())
{
}

Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider
) : Food(GoodsName, Price, Count, GoodsProvider, 0, 0, 0)
{
}

Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	int day,
	int month,
	int year
) : Food(GoodsName, Price, Count, GoodsProvider, day, month, year, 0)
{
}

Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	int day, int month, int year, int days
) : Goods(GoodsName, Price, Count, GoodsProvider)
{
	_expirationDate = 60 * 60 * 24 * days;
	_prodDate = makeDate(day, month, year);
}

Food::Food(const Food& src)
{
	_name_of_goods = src._name_of_goods;
	_count = src._count;
	_price_of_goods = src._price_of_goods;
	_provider = src._provider;
	_expirationDate = src._expirationDate;
	_prodDate = src._prodDate;
}

Food::~Food()
{
}

Food& Food::SetProdDate(int day, int month, int year)
{
	
	_prodDate = makeDate(day, month, year);
	return *this;
}

Food& Food::SetExpireDate(int days)
{
	//std::cout << "Set expire time in days:" << std::endl;
	_expirationDate = 60 * 60 * 24 * days;
	return *this;
}

time_t Food::makeDate(int day, int month, int year)
{
	time_t now;
	time(&now);
	struct tm *timeinfo = localtime(&now);
	timeinfo->tm_year = year - 1900;
	timeinfo->tm_mon = month - 1;
	timeinfo->tm_mday = day;
	return mktime(timeinfo);
}

std::string Food::alarm()
{
	return _prodDate + _expirationDate >= time(0) ? "Товар придатний до своживання" : "Товар не придатний до споживання";
}
