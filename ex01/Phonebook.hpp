/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:10:27 by notjustlaw        #+#    #+#             */
/*   Updated: 2025/11/17 15:12:14 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
		int	index_tracking;
	public:
		PhoneBook();

		void add();
		void search();

		
};


#endif