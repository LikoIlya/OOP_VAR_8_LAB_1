#pragma once
#include <string>
#include "Provider.h"

/*
	Тип «Товар» визначити як клас, що містить:
		- реалізовані у вигляді символьного рядка довільної довжини закрите поле з назвою товару; закриті числові поля із ціною та кількістю у даній партії; постачальника визначити як об'ект відповідного типу;
		- усі функції реалізувати відповідно загальним вимогам.
*/
class Goods
{
private:
	std::string _name_of_goods;
	int _price_of_goods;
	int _count;
	Provider _provider;
public:
	Goods();
	Goods(std::string GoodsName);
	Goods(std::string GoodsName, int Price);
	Goods(std::string GoodsName, int Price, int Count);
	Goods(std::string GoodsName, int Price, int Count, Provider GoodsProvider);
	Goods(const Goods &);
	~Goods();
	std::string GetName() { return _name_of_goods; }
	int GetPrice() { return _price_of_goods; }
	int GetCount() { return _count; }
	Provider GetProvider() { return _provider; }
	void Put();
	void PutFull();
	Goods& SetName(std::string GoodsName);
	Goods& SetPrice(int Price);
	Goods& SetCount(int Count);
	Goods& SetProvider(Provider GoodsProvider);
};

