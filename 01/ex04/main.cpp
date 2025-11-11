#include <string>
#include <iostream>
#include <fstream>

void replace(std::string& str, const std::string s1, const std::string s2)
{
	int	i = 0;
	if(s1.empty())
		return ;
	while ((i = str.find(s1, i)) != std::string::npos)
	{
		str.erase(i, s1.length());
		str.insert(i, s2);
		i += s2.length();
	}
}

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of inputs.\nExpected: ./Sed_is_for_losers 'filename' 's1' 's2'\n";
		return (-1);
	}
	std::string filename = argv[1];
	std::ifstream filein(filename);
	if (!filein.is_open())
	{
		std::cerr << "Error: Invalid file!" << std::endl;
		return (-1);
	}
	std::string line;
	std::string text;
	while (std::getline(filein, line))
		text.append(line + "\n");
	filein.close();
	replace(text, argv[2], argv[3]);
	std::ofstream fileout(filename + ".replace");
	if (!fileout.is_open())
	{
		std::cerr << "Error: could not create output file.\n";
		return (-1);
	}
	fileout << text;
	fileout.close();
	return (0);
}
