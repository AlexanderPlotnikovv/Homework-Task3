#include<iostream>

struct adress {
	std::string country;
	std::string city;
	std::string street;
	int HouseNumber;
	int FlatNumber;
	int index;
};

void struct_cout(adress& person) {
	std::cout << "Country: ";
	std::cin >> person.country;
	std::cout << "City: ";
	std::cin >> person.city;
	std::cout << "Street: ";
	std::cin >> person.street;
	std::cout << "HouseNumber: ";
	std::cin >> person.HouseNumber;
	std::cout << "FlatNumber: ";
	std::cin >> person.FlatNumber;
	std::cout << "Index: ";
	std::cin >> person.index;
}

int main()
{
	adress person;
	struct_cout(person);
	std::cout << person.city;
	return 0;
}