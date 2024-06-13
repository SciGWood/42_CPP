#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm(const std::string &target);//						Default Constructor
		PresidentialPardonForm(const PresidentialPardonForm &other);//				Copy constructor
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &other);//	Copy assignement operator
		~PresidentialPardonForm();//												Destructor

		void	execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream &other, const AForm &src);

#endif