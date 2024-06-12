#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(const std::string &name, int grade);//	Default Constructor
		Bureaucrat(const Bureaucrat &other);//				Copy constructor
		Bureaucrat&	operator=(const Bureaucrat &other);//	Copy assignement operator
		~Bureaucrat();//									Destructor

		std::string	getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();
		void		signForm(AForm &F);
		void		executeForm(AForm const &form);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream &other, const Bureaucrat &src);

#endif