#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;
	public:
		Form(const std::string &name, const int signGrade, const int execGrade);//	Default Constructor
		Form(const Form &other);//				Copy constructor
		Form&	operator=(const Form &other);//	Copy assignement operator
		~Form();//								Destructor

		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		int			getSignedStatus() const;
		void		beSigned(const Bureaucrat &B);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &other, const Form &src);

#endif