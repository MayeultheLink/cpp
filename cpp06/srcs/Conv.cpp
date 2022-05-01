#include "Conv.hpp"

Conv::Conv( void ) {}

Conv::Conv( const Conv & src )
{
	*this = src;
}

Conv & Conv::operator=( const Conv & )
{
	return *this;
}

Conv::~Conv( void ) {}

bool isChar( const char* value ) {

	std::string newValue(value);

	if (newValue.length() != 1)
		return false;

	if (isdigit(value[0]))
		return false;

	return true;

}

bool isFloat( const char* value ) {

	std::string newValue(value);

	std::string specials[3] = {"-inff", "+inff", "nanf"};
	for (int i=0; i < 3; i++)
		if (specials[i] == newValue)
			return true;

	if (value[newValue.length() - 1] != 'f')
		return false;

	int c = 0;
	for (size_t i=0; i < newValue.length(); i++)
		if (value[i] == '.')
			c++;
	if (c > 1)
		return false;

	for (unsigned long i = 0; i < newValue.length() - 2; i++)
	{
		if (i == 0 && value[i] == '-')
			i++;
		if (!isdigit(value[i]) && value[i] != '.')
			return false;
	}

	return true;

}

bool isDouble( const char* value ) {

	std::string newValue(value);

	std::string specials[3] = {"-inf", "+inf", "nan"};
	for (int i=0; i < 3; i++)
		if (specials[i] == newValue)
			return true;

	int c = 0;
	for (size_t i=0; i < newValue.length(); i++)
		if (value[i] == '.')
			c++;
	if (c != 1)
		return false;

	for (size_t i = 0; i < newValue.length(); i++)
	{
		if (i == 0 && value[i] == '-')
			i++;
		if (!isdigit(value[i]) && value[i] != '.')
			return false;
	}

	return true;

}

bool isInt( const char* value ) {

	std::string newValue(value);

	if (newValue.length() == 0)
		return false;

	for (size_t i = 0; i < newValue.length(); i++)
	{
		if (i == 0 && value[i] == '-')
			i++;
		if (!isdigit(value[i]))
			return false;
	}

	return true;

}

void Conv::analyseType( const char* value ) {

	bool (*isTab[4])(const char* value) = {isChar, isInt, isFloat, isDouble};
	int typeTab[4] = {Conv::typeChar, Conv::typeInt, Conv::typeFloat, Conv::typeDouble};

	this->type = -1;

	for (int i=0; i < 4; i++)
		if (isTab[i]( value ))
			this->type = typeTab[i];

	if (this->type == -1)
		throw Conv::unknownTypeException();

}

void Conv::getValues( const char * value ) {

	this->charValue = value[0];
	this->intValue = atoi(value);
	this->floatValue = atof(value);
	this->doubleValue = atof(value);

}

void Conv::print( void ) {

	if (this->type == Conv::typeChar)
		std::cout << "char: " << this->charValue << std::endl << "int: " << static_cast<int>(this->charValue) << std::endl << "float: " << static_cast<float>(this->charValue) << std::endl << "double: " << static_cast<double>(this->charValue) << std::endl;
	if (this->type == Conv::typeInt)
		std::cout << "char: " << static_cast<char>(this->intValue) << std::endl << "int: " << this->intValue << std::endl << "float: " << static_cast<float>(this->intValue) << std::endl << "double: " << static_cast<double>(this->intValue) << std::endl;
	if (this->type == Conv::typeFloat)
		std::cout << "char: " << static_cast<char>(this->floatValue) << std::endl << "int: " << static_cast<int>(this->floatValue) << std::endl << "float: " << this->floatValue << std::endl << "double: " << static_cast<double>(this->floatValue) << std::endl;
	if (this->type == Conv::typeDouble)
		std::cout << "char: " << static_cast<char>(this->doubleValue) << std::endl << "int: " << static_cast<int>(this->doubleValue) << std::endl << "float: " << static_cast<float>(this->doubleValue) << std::endl << "double: " << this->doubleValue << std::endl;

}