#include "MyReplace.hpp"

MyReplace::MyReplace ( std::string fileName, std::string toReplace, std::string replacement )
			: fileName(fileName), toReplace(toReplace), replacement(replacement) {
	this->newFileName = this->fileName;
	this->newFileName += ".replace";
}

MyReplace::~MyReplace ( void ) {}

void MyReplace::replace ( void ) {

	std::string content;

	this->ifs.open(this->fileName);
	if (!ifs)
	{
		std::cerr << "Error while opening file." << std::endl;
		return ;
	}
	content.assign(std::istreambuf_iterator<char>(this->ifs), std::istreambuf_iterator<char>());
	this->ifs.close();

	for (size_t pos=0; pos < content.length(); pos++)
	{
		if (content.compare(pos, this->toReplace.length(), this->toReplace) == 0)
		{
			content.erase(pos, this->toReplace.length());
			content.insert(pos, this->replacement);
		}
	}

	this->ofs.open(this->newFileName);
	if (!ofs)
	{
		std::cerr << "Error while creating file." << std::endl;
		return ;
	}
	this->ofs << content;
	this->ofs.close();

}
