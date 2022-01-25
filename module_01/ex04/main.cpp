#include <iostream>
#include <fstream>

int	error_handler(int type, char **argv, std::ifstream &in, std::ofstream &out)
{
	if (type == 1)
		std::cerr << "Usage: ./replace filename s1 s2" << std::endl;
	else if (type == 2)
		std::cerr << "Error opening '" << argv[1] << "'\n";
	else if (type == 3)
	{
		std::cerr << "Error creating '" << (std::string) argv[1] + ".replace" << "'\n";
		in.close();
	}
	else
	{
		std::cerr << "Error while reading '" << argv[1] << "'\n";
		in.close();
		out.close();
	}
	return (1);
}

int	main(int argc, char **argv)
{
	std::ifstream	in;
	std::ofstream	out;
	std::string		output_file;
	std::string		buf;
	std::string		s1, s2;
	int				found;

	if (argc != 4)
		return (error_handler(1, argv, in, out));

	in.open(argv[1], std::ifstream::in);
	if ((in.rdstate() & std::ifstream::failbit) != 0)
		return (error_handler(2, argv, in, out));

	output_file = (std::string) argv[1] + ".replace";
	out.open(output_file, std::ofstream::out);
	if ((out.rdstate() & std::ofstream::failbit) != 0)
		return (error_handler(3, argv, in, out));

	s1 = argv[2];
	s2 = argv[3];
	while (std::getline(in, buf))
	{
		if (in.bad())
			return (error_handler(4, argv, in, out));
		found = buf.find(s1);
		while (found != -1)
		{
			buf.insert(found, s2);
			buf.erase(found + s2.size(), s1.size());
			found = buf.find(s1);
		}
		out << buf << std::endl;
	}

	in.close();
	out.close();
	return (0);
}