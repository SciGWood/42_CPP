/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:17:25 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/14 15:20:44 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
        std::cout << "Usage: enter a number to convert. (only one argument accepted)"
                    << std::endl;
    else
    {
        std::string str(argv[1]);
        ScalarConverter::convert(str);
    }
    return (0);
}
