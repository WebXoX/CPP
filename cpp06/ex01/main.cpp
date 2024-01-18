#include "Serializer.hpp"

int main()
{
	Data *data = new Data("Joe",22,"Male","Indian");
	std::cout << Serializer::serialize(data) << std::endl;
	std::cout << Serializer::deserialize( Serializer::serialize(data))->name << std::endl;
	std::cout << Serializer::deserialize( Serializer::serialize(data))->age << std::endl;
	std::cout << Serializer::deserialize( Serializer::serialize(data))->gender << std::endl;
	std::cout << Serializer::deserialize( Serializer::serialize(data))->nationality << std::endl;
	return (0);
}