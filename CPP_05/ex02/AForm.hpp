#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	protected:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;
	public:
		AForm(const std::string &name, const int signGrade, const int execGrade);//	Default Constructor
		AForm(const AForm &other);//												Copy constructor
		AForm&	operator=(const AForm &other);//									Copy assignement operator
		virtual ~AForm();//															Destructor

		std::string		getName() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		int				getSignedStatus() const;
		void			beSigned(const Bureaucrat &B);

		virtual void	execute(Bureaucrat const &executor) const = 0;

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

		class FormAlreadySigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &other, const AForm &src);

#endif