#pragma once
#include <iostream>
#include <fstream>

class Change {
	public:
		bool execution(void);
		bool allok(void);
		Change(std::string newfilename, std::string news1, std::string news2);
		~Change();
	private:
		std::string FileName;
		std::string NewFileName;
		std::string s1;
		std::string s2;
		std::string text;
		std::ifstream infile;
		std::ofstream outfile;
};
