#include "Food.h"


///TODO: Finish getters and setters


Food::Food():Food(0) {}
Food::Food(time_t Prodused) : Food(Prodused,0) {}
Food::Food(time_t Prodused, time_t Expired) : Goods(),_prodDate(Prodused),_expirationDate(Expired) {}
Food::Food
(
	std::string GoodsName
) : Food(GoodsName,0) {}
Food::Food
(
	std::string GoodsName,
	int Price
) : Food(GoodsName, Price, 0) {}
Food::Food
(
	std::string GoodsName,
	int Price,
	int Count
) : Food(GoodsName, Price, Count, Provider()) {}
Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider
) : Food(GoodsName, Price, Count, GoodsProvider, 0) {}
Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	time_t Prodused
) : Food(GoodsName, Price, Count, GoodsProvider, Prodused, 0) {}
Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	time_t Prodused,
	time_t Expired
) : Goods(GoodsName,Price,Count,GoodsProvider)
{
	_prodDate = Prodused;
	_expirationDate = 60 * 60 * 24 * Expired;
}
Food::Food(const Food &src)
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

std::string Food::alarm()
{
	return _prodDate + _expirationDate >= time(0) ? "Товар придатний до своживання" : "Товар не придатний до споживання";
}
