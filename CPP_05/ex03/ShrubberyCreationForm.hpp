#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	private:
		const std::string	target;
	public:
		ShrubberyCreationForm(const std::string &target);//							Default Constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &other);//				Copy constructor
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &other);//	Copy assignement operator
		~ShrubberyCreationForm();//													Destructor

		void	execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream &other, const AForm &src);

#endif