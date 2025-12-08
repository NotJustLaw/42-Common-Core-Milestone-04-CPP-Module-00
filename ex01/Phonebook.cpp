/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:49:13 by notjustlaw        #+#    #+#             */
/*   Updated: 2025/11/29 17:40:12 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->index_tracking = 0;
};

void PhoneBook::add(){
	while(true){
		std::string input;
		std::cout << "Please provide a name to save the user as." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (input.empty())
			std::cout << "A saved contact cant have empty fields." << std::endl;
		else{
			contacts[index_tracking].set_first_name(input);
			break;
		}
	}
	while(true){
		std::string input;
		std::cout << "Please provide a last name to save the user as." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (input.empty())
			std::cout << "A saved contact cant have empty fields." << std::endl;
		else{
			contacts[index_tracking].set_last_name(input);
			break;
		}
	}
	while(true){
		std::string input;
		std::cout << "Please provide a nickname to save the user as." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (input.empty())
			std::cout << "A saved contact cant have empty fields." << std::endl;
		else{
			contacts[index_tracking].set_nickname(input);
			break;
		}
	}
	while(true){
		std::string input;
		std::cout << "Please provide a phone-number to save the user as." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (input.empty())
			std::cout << "A saved contact cant have empty fields." << std::endl;
		else{
			contacts[index_tracking].set_phone_number(input);
			break;
		}
	}
	while(true){
		std::string input;
		std::cout << "Please provide a the darkest secret to save the user as." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (input.empty())
			std::cout << "A saved contact cant have empty fields." << std::endl;
		else{
			contacts[index_tracking].set_darkest_secret(input);
			break;
		}
	}
	index_tracking++;
	if (index_tracking == 8)
    	index_tracking = 0;
	std::cout << "Contact successfully added." << std::endl;
}

std::string	format_field(std::string f){
	int	len = f.length();
	
	if (len > 10)
		return (f.substr(0, 9) + '.');
	if (len < 10){
		int number_of_spaces = 10 - len;
		return std::string(number_of_spaces, ' ') + f;
	}
	return (f);
}

void PhoneBook::search(){
	int	row_printed = 0;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < 8; i++){
		if (contacts[i].get_first_name().empty())
			continue;
		else {
			std::stringstream ss;
			ss << i;
			std::string index = ss.str();
			std::cout << "|"
				<< format_field(index)
				<< "|"
				<< format_field(contacts[i].get_first_name())
				<< "|"
				<< format_field(contacts[i].get_last_name())
				<< "|"
				<< format_field(contacts[i].get_nickname())
				<< "|"
				<< std::endl;
			row_printed++;
		}
	}
	if (row_printed == 0){
		std::cout << "PhoneBook empty" << std::endl;
		return;
	}
	std::string input;
	std::cout << "Enter the index of the contact you want to see:" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		return;
	for (int j = 0; input[j]; j++){
		if (!isdigit(input[j])){
			std::cout << "Invalid Index" << std::endl;
			return;
		}
	}
	int index = atoi(input.c_str());
	if (index < 0 || index > 7){
		std::cout << "Index out of range" << std::endl;
		return;
	}
	if (contacts[index].get_first_name().empty()){
		std::cout << "Contact doesn't exist" << std::endl;
		return;
	}
	std::cout << "First Name: "
		<<	contacts[index].get_first_name()
		<< 	std::endl
		<<	"Last Name: "
		<<	contacts[index].get_last_name()
		<< 	std::endl
		<<	"Nickname: "
		<<	contacts[index].get_nickname()
		<< 	std::endl
		<<	"Phone Number: "
		<<	contacts[index].get_phone_number()
		<< 	std::endl
		<<	"Darkest Secret: "
		<<	contacts[index].get_darkest_secret()
		<< 	std::endl;
}
