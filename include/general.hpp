/* Basic header file with basic level definitions and includes */

#ifndef GENERAL_HPP
# define GENERAL_HPP

#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <sstream>

//namespace snippets to use
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::stringstream;

//colors
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"
#define NONE	""

#endif