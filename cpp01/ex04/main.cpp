#include <fstream>
#include <iostream>
#include <string>

std::string replace_str(std::string fileName, std::string line,std::string s1,std::string s2 )
{
	size_t index;
	std::string left;
	std::string right;
	index= line.find(s1);
	while (index != std::string::npos)
	{
		left = line.substr(0,index);
		right = line.substr(index+s1.length(),line.length());
		line = left + s2 + right;
		index = line.find(s1);
	}
	left.clear();
	right.clear();
	return line;
}

void openfile(std::string fileName,std::string s1,std::string s2 )
{
	std::string line;
	std::string nline;
	std::ifstream infile(fileName);

	if (infile.is_open())
	{
		std::ofstream outfile(fileName+".replace");
		while (std::getline(infile,line))
		{
			nline = replace_str(fileName, line,s1, s2);
			outfile << nline <<std::endl;
		}
		outfile.close();
		infile.close();
	}
	else
		std::cout << "ERROR FILE DOES NOT EXSIST" << std::endl;
	
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		openfile(argv[1],argv[2],argv[3]);
	}
	else
		std::cout << "Incorrect format ./replace <fileName> target_str replace_str" << std::endl;
	
	return 0;
}