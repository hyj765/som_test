#include<iostream>
#include "file_func.h"
using namespace std;


int main() {
	string f_path;
	cin >> f_path;
	file_manager m(f_path);
	string d_path;
	cin >> d_path;
	m.file_copy(d_path);
	cout << "file copy success" << endl;
}