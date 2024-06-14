/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:37:05 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/14 15:45:15 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : i(0)
{
}

Data::Data(int nb)
{
	this->i = nb;
}

Data::Data(const Data &other)
{
	this->i = other.i;
}

Data&	Data::operator=(const Data& other)
{
	if (this != other)
		this->i = other.i;
	return (*this);
}

int Data::getI()
{
	return (this->i);
}

Data::~Data()
{
}
