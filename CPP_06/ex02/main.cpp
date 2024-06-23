/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwen <gwen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 08:47:36 by gwen              #+#    #+#             */
/*   Updated: 2024/06/23 09:20:21 by gwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


static Base	*generate(void)
{
	srand(time(NULL));

	char	c = "ABC"[rand() % 3];
	std::cout << MAGENTA << c << " created." << RESET << std::endl;
	switch (c)
	{
		case 'A':
			return (new A);
		case 'B':
			return (new B);
		case 'C':
			return (new C);
		default:
			return (NULL);
	}
	return (NULL);
}

static void	identify(Base *p)
{
	bool	cast;

	std::cout << CYAN << "Identified (with pointer): " << std::flush;
	cast = dynamic_cast<A *>(p);
	if (cast)
	{
		std::cout << GREEN << "A." << RESET << std::endl;
		return ;
	}
	cast = dynamic_cast<B *>(p);
	if (cast)
	{
		std::cout << YELLOW << "B." << RESET << std::endl;
		return ;
	}
	cast = dynamic_cast<C *>(p);
	if (cast)
	{
		std::cout << RED << "C." << RESET << std::endl;
		return ;
	}
	if (!cast)
		std::cout << BLUE << "unknown." << RESET << std::endl;
}

static void	identify(Base &p)
{
	std::cout << CYAN << "Identified (with reference): " << std::flush;
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << GREEN << "A." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << YELLOW << "B." << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << RED << "C." << RESET << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << BLUE << "unknown" << RESET << '\n';
			}
			
		}
		
	}
	
}

int	main(void)
{
    Base	*base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;
    return (0);
}