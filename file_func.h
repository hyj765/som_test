#include<iostream>
#pragma once


class file_manager {
private:
	std::string f_path;
public:
	file_manager(std::string _f_path);
	int file_size();
	int file_copy(std::string d_path);
};