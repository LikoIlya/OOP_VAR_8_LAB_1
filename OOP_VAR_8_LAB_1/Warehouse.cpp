#include "Warehouse.h"
#include <array>
#include <locale>

unsigned int Warehouse::cnt = 1;

Warehouse::Warehouse() : Warehouse(0){}
Warehouse::Warehouse(unsigned int length)
{
	setLength(length);
	_number_of_warehouse = cnt++;
}
Warehouse::Warehouse(unsigned int length, Goods* goods)
{
	setLength(length);
	setGoods(goods, length);
	_number_of_warehouse = cnt++;
}


Warehouse::~Warehouse()
{
	delete[] _goods;
}



//Warehouse & Warehouse::setWarehouseNumber(unsigned long long number)
//{
//}


Warehouse & Warehouse::setLength(unsigned int length)
{
	_COUNT_ = length;
	return *this;
}


Warehouse & Warehouse::setGoods(Goods* goods_to_insert, unsigned int length_of_array)
{
	try
	{
		_length = length_of_array;
		delete[] _goods;
		_goods = new Goods[_length];
		for (; length_of_array > 0; length_of_array--)
		{
			_goods[_length - length_of_array] = goods_to_insert[_length - length_of_array];
		}
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}
	return *this;
}

Warehouse& Warehouse::addGoods(Goods* goods_to_insert, unsigned int length_of_array)
{
	try
	{
		_length += length_of_array;
		delete[] _goods;
		_goods = new Goods[_length];
		for (unsigned long long index = _length - length_of_array; index < _length; index++)
		{
			_goods[index] = goods_to_insert[index];
		}
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& o, Warehouse src)
{
	  o << "<Warehouse>"
		<< "\nNumber: " << src._number_of_warehouse
		<< "\nCount of goods: " << src._length
		<< "\nCapacity: " << src._COUNT_
		<< "\nGoods:\n[\n";
	  for (unsigned long long index = 0; index < src._length; index++)
	  {
		  o << "{" << src._goods[index] << "}" << std::endl;
	  }
		o <<"]"<< std::endl;
		return  o;
}
