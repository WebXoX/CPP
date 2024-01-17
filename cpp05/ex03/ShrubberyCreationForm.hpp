#pragma once
#ifndef __ShrubberyCreationForm_H__
#define __ShrubberyCreationForm_H__
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm:public AForm
{
	public:
	/*orth ShrubberyCreationForm*/
    	ShrubberyCreationForm ();
    	ShrubberyCreationForm (const ShrubberyCreationForm &a);
    	~ShrubberyCreationForm ();
    	ShrubberyCreationForm (std::string target);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &a);

	/*orth ShrubberyCreationForm*/

	/*exception*/
	/*exception*/

	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		void execute(Bureaucrat const & executor) const;
	/*extra*/

	private:
		const std::string target;
};
std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& f);
#endif
//                       ___
//                 _,-'\"\"   \"\"\"\"`--.
//              ,-'          __,,-- \\
//            ,\'    __,--\"\"\"\"dF      )
//           /   .-\"Hb_,--\"\"dF      /
//         ,\'       _Hb ___dF\"-._,-'
//       ,'      _,-\"\"\"\"   \"\"--..__
//      (     ,-'                  `.
//       `._,'     _   _             ;
//        ,'     ,' `-'Hb-.___..._,-'
//        \\    ,'\"Hb.-\'HH`-.dHF\"
//         `--\'   \"Hb  HH  dF\"
//                 \"Hb HH dF
//                  \"HbHHdF
//                   |HHHF
//                   |HHH|
//                   |HHH|
//                   |HHH|
//                   |HHH|
//                   dHHHb
//                 .dFd|bHb.               o
//       o       .dHFdH|HbTHb.          o /
// \\  Y  |  \\__,dHHFdHH|HHhoHHb.         Y
// ##########################################