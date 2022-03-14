#include "file_func.h"

	file_manager::file_manager(std::string _f_path): f_path(_f_path){};
	int file_manager::file_size() {
		FILE* f = NULL;
		fopen_s(&f, f_path.c_str(), "rb");
		fseek(f, 0, SEEK_END);
		int size = ftell(f);
		fclose(f);
		return size / 1024;
	}
	int file_manager::file_copy(std::string d_path) {
		FILE*d,*s;
		char buffer[2] = { 0 };
		fopen_s(&s,this->f_path.c_str(),"rb");
		fopen_s(&d,d_path.c_str(), "wb");
		while (feof(s) == 0) {
			fread(buffer, 2, 1, s);
			fwrite(buffer, 2, 1, d);
		}
		fclose(d);
		fclose(s);
		return 1;
	}
