#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <string>

/*
	Тип "Постачальник" визначити як клас, що містить:
		- реалізоване у вигляді символьного рядка довільної довжини закриті поля з назвою фірми, країною реєстрації та контактним телефоном
		- усі функціі реалізувати відповідно загальним вимогам.
 */
class Provider
{
protected:
	std::string _name_of_company;
	std::string _country_of_registration;
	std::string _phone_number;
public:
	//Constructors
	Provider();
	Provider(std::string CompanyName);
	Provider(std::string CompanyName, std::string RegistrationCountry);
	Provider(std::string CompanyName, std::string RegistrationCountry, std::string Phone);
	Provider(const Provider& src);
	//Destrucrtor
	~Provider();
	//Getters
	std::string GetName() { return _name_of_company; }
	std::string GetCountry() { return _country_of_registration; }
	std::string GetPhone() { return _phone_number; }
	//Setters
	Provider& SetName(std::string CompanyName);
	Provider& SetCountry(std::string RegistrationCountry);
	Provider& SetPhone(std::string Phone);
	//Methods
	void Put();
	void PutFull();
	bool	operator == (Provider& sec),
			Equals(const Provider & prov);
	friend std::ostream & operator << (std::ostream &, Provider);
	friend std::istream & operator >> (std::istream &, Provider&);
};
