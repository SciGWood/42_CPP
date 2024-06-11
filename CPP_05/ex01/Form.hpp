#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string	name;
    public:
        Form(std::string name);//						Default Constructor
        Form(const Form &other);//				Copy constructor
        Form&	operator=(const Form &other);//	Copy assignement operator
        ~Form();//										Destructor
};

#endif