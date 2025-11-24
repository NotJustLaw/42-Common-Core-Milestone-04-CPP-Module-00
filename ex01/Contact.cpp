/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:43:07 by notjustlaw        #+#    #+#             */
/*   Updated: 2025/11/21 17:02:29 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

std::string Contact::get_first_name() const{
	return (this->first_name);
}

std::string Contact::get_last_name() const{
	return (this->last_name);
}

std::string Contact::get_nickname() const{
	return (this->nickname);
}

std::string Contact::get_phone_number() const{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret() const{
	return (this->darkest_secret);
}

void Contact::set_first_name(std::string const &value){
	this->first_name = value;
}

void Contact::set_last_name(std::string const &value){
	this->last_name = value;
}

void Contact::set_nickname(std::string const &value){
	this->nickname = value;
}

void Contact::set_phone_number(std::string const &value){
	this->phone_number = value;
}

void Contact::set_darkest_secret(std::string const &value){
	this->darkest_secret = value;
}