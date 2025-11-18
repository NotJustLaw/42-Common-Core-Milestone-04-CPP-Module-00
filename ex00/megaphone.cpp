/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:54:18 by notjustlaw        #+#    #+#             */
/*   Updated: 2025/11/14 15:47:27 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std; //This will declare that we dont need to use std:: anymore

bool isLower(char c) {
    return (c >= 'a' && c <= 'z');
}

//Basic function to change lowercase to uppercase
string convertor(string s){
	int i = -1;
	
	while (s[++i])
		if (isLower(s[i]))
			s[i] -= 32;
	return s;
}

int	main(int ac, char *av[]){
	if (ac == 1)
		return (cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl, 1);
	for (int i = 1; i < ac; i++)
		cout << convertor(av[i]);
	cout << "\n";
	return (0);
}