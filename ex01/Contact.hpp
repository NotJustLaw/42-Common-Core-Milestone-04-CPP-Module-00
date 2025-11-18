/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:18:08 by notjustlaw        #+#    #+#             */
/*   Updated: 2025/11/17 15:27:27 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string phone_number;
		std::string	darkest_secret;
	public:
	Contact();
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;
	void set_first_name(std::string const &value);
	void set_last_name(std::string const &value);
	void set_nickname(std::string const &value);
	void set_phone_number(std::string const &value);
	void set_darkest_secret(std::string const &value);
};

#endif