#include "Conv.hpp"

Conv::Conv( void ) {}

Conv::Conv( const Conv & src )
{
	*this = src;
}

Conv & Conv::operator=( const Conv & rhs)
{
	this->type = rhs.type;
	this->charValue = rhs.charValule;
	this->intValue = rhs.intValue;
	this->floatValue = rhs.floatValue;
	this->doubleValue = rhs.doubleValue;
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

void printChar( char c ) {

	std::cout << "char: ";
	std::cout << c << std::endl;
	std::cout << "int: ";
	std::cout << static_cast<int>(c) << std::endl;
	std::cout << "float: ";
	std::cout << static_cast<float>(c) << std::endl;
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << std::endl;

}

void printInt( int c ) {

	std::cout << "char: ";
	if ((c >= 0 && c <= 255 && !isprint(c)) || c > 255)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(c) << std::endl;
	std::cout << "int: ";
	std::cout << c << std::endl;
	std::cout << "float: ";
	std::cout << static_cast<float>(c) << std::endl;
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << std::endl;

}

void printFloat( float c ) {

	std::cout << "char: ";
	if ((c >= 0 && c <= 255 && !isprint(c)) || (c > 255 && c <= std::numeric_limits<int>::max()))
		std::cout << "Non displayable" << std::endl;
	else if (c > std::numeric_limits<int>::max() || c < std::numeric_limits<int>::min() || isnan(c))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<char>(c) << std::endl;
	std::cout << "int: ";
	if (c > std::numeric_limits<int>::max() || c < std::numeric_limits<int>::min() || isnan(c))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(c) << std::endl;
	std::cout << "float: ";
	std::cout << c << std::endl;
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << std::endl;

}

void printDouble( double c ) {

	std::cout << "char: ";
	if ((c >= 0 && c <= 255 && !isprint(c)) || (c > 255 && c <= std::numeric_limits<int>::max()))
		std::cout << "Non displayable" << std::endl;
	else if (c > std::numeric_limits<int>::max() || c < std::numeric_limits<int>::min() || isnan(c))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<char>(c) << std::endl;
	std::cout << "int: ";
	if (c > std::numeric_limits<int>::max() || c < std::numeric_limits<int>::min() || isnan(c))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(c) << std::endl;
	std::cout << "float: ";
	if (c > std::numeric_limits<float>::max() || c < std::numeric_limits<float>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(c) << std::endl;
	std::cout << "double: ";
	std::cout << c << std::endl;

}

void Conv::print( void ) {

	if (this->type == Conv::typeChar)
		printChar(this->charValue);
	if (this->type == Conv::typeInt)
		printInt(this->intValue);
	if (this->type == Conv::typeFloat)
		printFloat(this->floatValue);
	if (this->type == Conv::typeDouble)
		printDouble(this->doubleValue);

}
