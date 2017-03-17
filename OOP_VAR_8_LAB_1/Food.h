#define _CRT_SECURE_NO_WARNINGS
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
	Food(Goods Good, int day, int month, int year);
	Food(Goods Good, int day, int month, int year, int days);
	Food(int day, int month, int year);
	Food(int day, int month, int year, int days);
	Food(std::string GoodsName);
	Food(std::string GoodsName, double Price);
	Food(std::string GoodsName, double Price, int Count);
	Food(std::string GoodsName, double Price, int Count, Provider GoodsProvider);
	Food(std::string GoodsName, double Price, int Count, Provider GoodsProvider, int day, int month, int year);
	Food(std::string GoodsName, double Price, int Count, Provider GoodsProvider, int day, int month, int year, int days);
	Food(const Food& src);
	~Food();
	Food& SetProdDate(int day, int month, int year);
	Food& SetExpireDate(int days);
	time_t makeDate(int  day, int month, int year);
	time_t GetProdDate() { return _prodDate; }
	time_t GetExpDate() { return _expirationDate; }
	std::string alarm();
};
