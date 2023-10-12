#include <fstream>
#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/stat.h>

bool isDirectory(char *path)
{
	struct stat fileStat;
	if(stat(path,&fileStat) != 0)
		return false;
	return (S_ISDIR(fileStat.st_mode));
}

std::string replaceStr(std::string fileName, std::string line,std::string s1,std::string s2 )
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

void openFile(std::string fileName,std::string s1,std::string s2 )
{
	struct stat fileStat;
	std::string line;
	std::string nline;
	std::ifstream infile(fileName);
 	stat((fileName.c_str()), &fileStat);
	if ( infile.is_open() && S_ISDIR(fileStat.st_mode) == 0)
	{
		std::ofstream outfile(fileName+".replace");
		while (std::getline(infile,line))
		{
			if(s1.compare(s2)!=0)
			{
				nline = replaceStr(fileName, line,s1, s2);
				outfile << nline <<std::endl;
			}
			else
				outfile << line <<std::endl;

		}
		outfile.close();
		infile.close();
	}
	else
		std::cout << "ERROR FILE DOES NOT EXSIST" << std::endl;
	
}

int main(int argc, char **argv)
{
	if (argc == 4 && argv[2][0] !='\0')
	{
		openFile(argv[1],argv[2],argv[3]);
	}
	else
		std::cout << "Incorrect format ./replace <fileName> target_str replace_str" << std::endl;
	
	return 0;
}