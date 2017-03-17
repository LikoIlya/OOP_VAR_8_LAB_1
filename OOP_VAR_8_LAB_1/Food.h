#pragma once
#include "Goods.h"
#include <ctime>

class Food :
	public Goods
{
	time_t _prodDate;
	time_t _expirationDate;
public:
	Food();
	Food(Goods Good);
	Food(Goods Good, time_t Prodused);
	Food(Goods Good, time_t Prodused, time_t Expired);
	Food(time_t Prodused);
	Food(time_t Prodused, time_t Expired);
	Food(std::string GoodsName);
	Food(std::string GoodsName, int Price);
	Food(std::string GoodsName, int Price, int Count);
	Food(std::string GoodsName, int Price, int Count, Provider GoodsProvider);
	Food(std::string GoodsName, int Price, int Count, Provider GoodsProvider, time_t Prodused);
	Food(std::string GoodsName, int Price, int Count, Provider GoodsProvider, time_t Prodused, time_t Expired);
	Food(const Food& src);
	~Food();
	Food& SetProdDate(time_t Prodused);
	Food& SetExpireDate(time_t Expired);
	time_t GetProdDate() { return _prodDate; }
	time_t GetExpDate() { return _expirationDate; }
	std::string alarm();
};
