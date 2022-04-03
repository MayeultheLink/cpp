#ifndef MYREPLACE_H
# define MYREPLACE_H

#include <string>
#include <iostream>
#include <fstream>

class	MyReplace {

public :

	MyReplace( std::string fileName, std::string toReplace, std::string replacement );
	~MyReplace( void );

	void replace( void );

private :

	std::string fileName;
	std::string toReplace;
	std::string replacement;
	std::string newFileName;
	std::fstream fs;
	std::ofstream newFs;

};

#endif
