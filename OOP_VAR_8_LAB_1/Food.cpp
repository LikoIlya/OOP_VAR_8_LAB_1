#include "Food.h"

Food::Food() : Food(0)
{
}

Food::Food(Goods Good) : Food(Good, 0)
{
}

Food::Food(Goods Good, time_t Produced) : Food(Good, Produced, 0)
{
}

Food::Food(Goods Good, time_t Produced, time_t Expired) : Goods(Good)
{
	_expirationDate = Expired;
	_prodDate = Produced;
}

Food::Food(time_t Prodused) : Food(Prodused, 0)
{
}

Food::Food(time_t Prodused, time_t Expired) : Goods()
{
	_prodDate = Prodused;
	_expirationDate = Expired;
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
) : Food(GoodsName, Price, Count, GoodsProvider, 0)
{
}

Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	time_t Prodused
) : Food(GoodsName, Price, Count, GoodsProvider, Prodused, 0)
{
}

Food::Food
(
	std::string GoodsName,
	int Price,
	int Count,
	Provider GoodsProvider,
	time_t Prodused,
	time_t Expired
) : Goods(GoodsName, Price, Count, GoodsProvider)
{
	_prodDate = Prodused;
	_expirationDate = 60 * 60 * 24 * Expired;
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

Food& Food::SetProdDate(time_t Prodused)
{
	_prodDate = Prodused;
	return *this;
}

Food& Food::SetExpireDate(time_t Expired)
{
	_expirationDate = Expired;
	return *this;
}

std::string Food::alarm()
{
	return _prodDate + _expirationDate >= time(0) ? "Товар придатний до своживання" : "Товар не придатний до споживання";
}
