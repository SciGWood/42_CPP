/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwen <gwen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:31:50 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/23 08:29:37 by gwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data		data;
	uintptr_t	ptr;

	data.content = "Salut les copains !";
	ptr = Serializer::serialize(&data);

	std::cout << GREEN << "Data adress: " << &data << RESET << std::endl;
	std::cout << CYAN << "Data content: " << data.content << '\n' << RESET << std::endl;
	
	std::cout << RED << "Ptr value: " << ptr << '\n' << RESET << std::endl;
	
	Data	*deserialized = Serializer::deserialize(ptr);

	std::cout << GREEN << "Deserialized data adress: " << deserialized << RESET << std::endl;
	std::cout << CYAN << "Deserialized data content: " << deserialized->content << RESET << std::endl;
	return (0);
}
