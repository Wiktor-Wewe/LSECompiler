#pragma once
#include <string>

class Image
{
public:
	Image(int id, std::string name, std::string path)
	{
		this->_id = id;
		this->_name = name;
		this->_path = path;
	}
	int getId();
	std::string getName();
	std::string getPath();

private:
	int _id;
	std::string _name;
	std::string _path;
};

