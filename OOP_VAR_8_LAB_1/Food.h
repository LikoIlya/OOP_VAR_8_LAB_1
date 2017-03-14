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
	Food(time_t Prodused);
	Food(time_t Prodused, time_t Expired);
	Food(std::string GoodsName);
	Food(std::string GoodsName, int Price);
	Food(std::string GoodsName, int Price, int Count);
	Food(std::string GoodsName, int Price, int Count, Provider GoodsProvider);
	Food(std::string GoodsName, int Price, int Count, Provider GoodsProvider, time_t Prodused);
	Food(std::string GoodsName, int Price, int Count, Provider GoodsProvider, time_t Prodused, time_t Expired);
	Food(const Food &src);
	~Food();
	std::string alarm();
};

