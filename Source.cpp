#include<iostream>
#include<string>

struct adress {
	std::string country;
	std::string city;
	std::string street;
	int HouseNumber;
	int FlatNumber;
	int index;
};

void struct_cin(adress& person) {
	std::cout << "Country: ";
	getline(std::cin, person.country);
	std::cout << "City: ";
	getline(std::cin, person.city);
	std::cout << "Street: ";
	getline (std::cin, person.street);
	std::cout << "HouseNumber: ";
	std::cin >> person.HouseNumber;
	std::cout << "FlatNumber: ";
	std::cin >> person.FlatNumber;
	std::cout << "Index: ";
	std::cin >> person.index;
}

void struct_cout(adress& person) {
	std::cout << "Country: " << person.country << std::endl;
	std::cout << "City: " << person.city << std::endl;
	std::cout << "Street: " << person.street << std::endl;
	std::cout << "HouseNumber: " << person.HouseNumber << std::endl;
	std::cout << "FlatNumber: " << person.FlatNumber << std::endl;
	std::cout << "Index: " << person.index << std::endl;
}

int main()
{
	adress person;
	struct_cin(person);
	std::cout << std::endl;
	struct_cout(person);
	return 0;
}