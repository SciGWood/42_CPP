#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:
		const std::string	target;
	public:
		RobotomyRequestForm(const std::string &target);//						Default Constructor
		RobotomyRequestForm(const RobotomyRequestForm &other);//				Copy constructor
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &other);//	Copy assignement operator
		~RobotomyRequestForm();//												Destructor

		void	execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream &other, const AForm &src);

#endif