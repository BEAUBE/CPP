#include "Change.hpp"

Change::Change(std::string originalfilename, std::string news1, std::string news2)
{
	this->FileName = originalfilename;
	this->NewFileName = originalfilename.append(".replace");
	this->s1 = news1;
	this->s2 = news2;
}

Change::~Change(void) {}

bool Change::execution()
{
	std::ifstream infile;
	std::ofstream outfile;
	std::size_t i;

	i = 0;
	infile.open(this->FileName.c_str());
	if (!infile.is_open())
		return (0);
	getline(infile, this->text, '\0');
	infile.close();
	while (this->text.find(this->s1, i) < std::string::npos)
	{
		i = this->text.find(this->s1, i);
		this->text.erase(i, this->s1.length());
		this->text.insert(i, this->s2);
		i += s2.length();
	}
	outfile.open(this->NewFileName.c_str());
	if (!outfile.is_open())
			return (0);
	outfile << this->text;
	outfile.close();
	return (1);
}

bool Change::allok(void)
{
	if (this->s1.empty())
		return (0);
	if (this->FileName.empty())
		return (0);
	return (1);
}
