#include "Phonebook.class.hpp"
#include <iomanip>

void	add_command(std::string add[])
{
	std::cout << "Enter first name: ";
	std::cin >> add[0];
	std::cout << "Enter last name: ";
	std::cin >> add[1];
	std::cout << "Enter nickname: ";
	std::cin >> add[2];
	std::cout << "Enter phone number: ";
	std::cin >> add[3];
	std::cout << "Enter darkest secret: ";
	std::cin >> add[4];
}

void	display_field(std::string str)
{
	std::cout << std::setw(10);
	if (str.size() > 10)
		std::cout << str.substr(0, 9) + '.';
	else
		std::cout << str;
}

void	display_book(Phonebook book)
{
	int	i;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	i = 0;
	while (i < book.size)
	{
		std::cout << std::setw(10);
		std::cout << i + 1 << '|';
		display_field(book.array[i].first_name);
		std::cout << '|';
		display_field(book.array[i].last_name);
		std::cout << '|';
		display_field(book.array[i].nickname);
		std::cout << std::endl;
		i++;
	}
}

void	display_contact(Phonebook book)
{
	int			index;
	std::string	buf;

	std::cout << "Enter the index of the desired entry: ";
	std::cin >> buf;
	index = atoi(buf.c_str());
	if (index >= 1 && index <= book.size)
	{
		std::cout << "first name: " << book.array[index - 1].first_name << std::endl;
		std::cout << "last name: " << book.array[index - 1].last_name << std::endl;
		std::cout << "nickname: " << book.array[index - 1].nickname << std::endl;
		std::cout << "phone number: " << book.array[index - 1].phone_number << std::endl;
		std::cout << "darkest secret: " << book.array[index - 1].darkest_secret << std::endl;
	}
	else
		std::cout << "The index is incorrect\n";
}

int	main(void)
{
	Phonebook	book;
	std::string	cmd;
	std::string	add[5];
	
	std::cout << "Enter your command: ";
	std::cin >> cmd;
	while (cmd != "EXIT")
	{
		if (cmd == "ADD")
		{
			add_command(add);
			book.add_contact(Contact(add));
		}
		else if (cmd == "SEARCH")
		{
			display_book(book);
			display_contact(book);
		}
		std::cout << "Enter your command: ";
		std::cin >> cmd;
	}
}