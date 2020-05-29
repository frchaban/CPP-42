#include <iostream>
#include <fstream>
#include <string>

std::string ft_toupper(std::string str)
{
	for(int i  = 0; i < (int)str.length(); i++)
		{
			if (str[i] <= 122 && str[i] >= 97)
				str[i] -= 32 ;
		}
	return (str);
}

std::string replace_all(std::string input, std::string to_find, std::string to_replace)
{
	std::string::size_type lastPos = 0;
    std::string::size_type findPos;
	std::string newString;
	newString.reserve(input.length());

	while(std::string::npos != (findPos = input.find(to_find, lastPos)))
    {
        newString.append(input, lastPos, findPos - lastPos);
        newString += to_replace;
        lastPos = findPos + to_find.length();
    }

	newString += input.substr(lastPos);
	return (newString);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}

	//Open initial file and store its content into a string
	std::ifstream input_file;
	std::string content;

	input_file.open(argv[1], std::ios::in);
	if (input_file.is_open())
	{
		std::getline(input_file, content, '\0');
		input_file.close();
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
		return (0);
	}

	// modify the content;
	std::string to_find = argv[2];
	std::string to_replace = argv[3];
	content = replace_all(content, to_find, to_replace);

	//Create new_file and copy the modified content
	std::ofstream replace;
	std::string path = argv[1];
	path = ft_toupper(path);
	replace.open (path.append(".replace"), std::ios::out | std::ios::in | std::ios::trunc);
	if (replace.is_open())
	{
		replace << content;
		replace.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
	return (0);
}
