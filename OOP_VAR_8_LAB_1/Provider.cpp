#include "Provider.h"

Provider::Provider() : Provider("StdCompany")
{
}

Provider::Provider(std::string CompanyName) : Provider(CompanyName, "StdCountry")
{
}

Provider::Provider(std::string CompanyName, std::string RegistrationCountry) : Provider(CompanyName, RegistrationCountry, "StdPhone")
{
}

Provider::Provider(std::string CompanyName, std::string RegistrationCountry, std::string Phone)
{
	_name_of_company = CompanyName;
	_country_of_registration = RegistrationCountry;
	_phone_number = Phone;
}

Provider::Provider(const Provider& src)
{
	_name_of_company = src._name_of_company;
	_country_of_registration = src._country_of_registration;
	_phone_number = src._phone_number;
}

Provider::~Provider()
{
	/*_phone_number = nullptr;
	_country_of_registration = nullptr;
	_name_of_company = nullptr;*/
	//delete this;
}

void Provider::Put()
{
	std::cout << "<Provider>" << _name_of_company << "" << std::endl;
}

void Provider::PutFull()
{
	std::cout << "Name: " << _name_of_company << " Country: " << _country_of_registration << " Phone: " << _phone_number << std::endl;
}

bool Provider::Equals(const Provider& prov)
{
	if (
		_name_of_company == prov._name_of_company &&
		_country_of_registration == prov._country_of_registration &&
		_phone_number == prov._phone_number
		)
		return true;
	return false;
}

Provider& Provider::SetName(std::string CompanyName)
{
	_name_of_company = CompanyName;
	return *this;
}

Provider& Provider::SetCountry(std::string RegistrationCountry)
{
	_country_of_registration = RegistrationCountry;
	return *this;
}

Provider& Provider::SetPhone(std::string Phone)
{
	_phone_number = Phone;
	return *this;
}

std::ostream & operator << (std::ostream & o, Provider src)
{
	return o << "<Provider>"
		<< "\nName: " << src._name_of_company
		<< "\nCountry: " << src._country_of_registration
		<< "\nPhone: " << src._phone_number
		<< std::endl;
}
std::istream & operator >> (std::istream & o, Provider &src)
{
	getline(o, src._name_of_company);
	getline(o, src._country_of_registration);
	getline(o, src._phone_number);
	return o;
}
