/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:42:11 by notjustlaw        #+#    #+#             */
/*   Updated: 2025/11/29 17:52:17 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(){
	PhoneBook pb;
	std::string input;
	
	while(true) {
		std::cout << "Enter a VALID command:" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof()) break;

		if (input == "ADD")
			pb.add();
		if (input == "SEARCH")
			pb.search();
		else if(input == "EXIT")
			break;
	}
}