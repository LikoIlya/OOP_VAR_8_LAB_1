#pragma once
#include <iostream>
#include <string>

/*
	��� "������������" ��������� �� ����, �� ������:
		- ���������� � ������ ����������� ����� ������� ������� ������ ���� � ������ �����, ������ ��������� �� ���������� ���������
		- �� ������� ���������� �������� ��������� �������.
 */
class Provider
{
private:
	std::string _name_of_company;
	std::string _country_of_registration;
	std::string _phone_number;
public:
	Provider();
	Provider(std::string CompanyName);
	Provider(std::string CompanyName, std::string RegistrationCountry);
	Provider(std::string CompanyName, std::string RegistrationCountry, std::string Phone);
	Provider(const Provider &src);
	~Provider();
	std::string GetName() { return _name_of_company; }
	std::string GetCountry() { return _country_of_registration; }
	std::string GetPhone() { return _phone_number; }
	void Put();
	void PutFull();
	Provider& SetName(std::string CompanyName);
	Provider& SetCountry(std::string RegistrationCountry);
	Provider& SetPhone(std::string Phone);
};

