#pragma once
#include "Goods.h"

class Warehouse
{
public:
	Warehouse();
	Warehouse(unsigned int length);
	Warehouse(unsigned int length, Goods* goods);
	~Warehouse();
private:
	static unsigned int cnt;
	unsigned int _number_of_warehouse;
	unsigned int _length;
	unsigned int _COUNT_;
	Goods* _goods;
public:
	// Длина массива товаров
	inline unsigned int length() { return _length; }
	unsigned long long count() { return _COUNT_; }
	Goods &operator[] (unsigned int x) { return _goods[x]; }
	Goods & getGoodsByIndex(unsigned int index) { return _goods[index]; }
	Goods*  getGoods() { return _goods; }
	unsigned int getWarehouseNumber() { return _number_of_warehouse; }
	//Warehouse & setWarehouseNumber(unsigned long long number);
	Warehouse & setLength(unsigned int length);
	Warehouse & setGoods(Goods* goods_to_insert, unsigned int length_of_array);
	Warehouse & addGoods(Goods* goods_to_insert, unsigned int length_of_array);
	friend std::ostream & operator << (std::ostream &o, Warehouse src);
};

