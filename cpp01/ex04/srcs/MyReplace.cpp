#include "MyReplace.hpp"

MyReplace::MyReplace ( std::string fileName, std::string toReplace, std::string replacement )
			: fileName(fileName), toReplace(toReplace), replacement(replacement) {
	this->newFileName = this->fileName;
	this->newFileName += ".replace";
}

MyReplace::~MyReplace ( void ) {}

void MyReplace::replace ( void ) {

	std::string content;

	this->fs.open(this->fileName);
	content.assign(std::istreambuf_iterator<char>(this->fs), std::istreambuf_iterator<char>());

	for (size_t pos=0; pos < content.length(); pos++)
	{
		if (content.compare(pos, this->toReplace.length(), this->toReplace) == 0)
		{
			content.erase(pos, this->toReplace.length());
			content.insert(pos, this->replacement);
		}
	}

	this->newFs.open(this->newFileName);
	this->newFs << content;

}
