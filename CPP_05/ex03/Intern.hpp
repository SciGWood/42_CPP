#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern
{
	private:
		std::string	formTab[3];
    public:
        Intern();//						Default Constructor
        Intern(const Intern &other);//				    Copy constructor
        Intern&	operator=(const Intern &other);//	    Copy assignement operator
        ~Intern();//									Destructor

        AForm*    makeForm(std::string formName, std::string target);

		class NoSuchFile : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif