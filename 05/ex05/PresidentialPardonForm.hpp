#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string const & target = "");
		PresidentialPardonForm(const PresidentialPardonForm &form);
		PresidentialPardonForm &operator=(const PresidentialPardonForm & form);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor) const;
		static PresidentialPardonForm *create(std::string const & target);
};