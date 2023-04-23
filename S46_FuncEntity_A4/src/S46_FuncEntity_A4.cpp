//============================================================================
// Name        : S46_FuncEntity_A4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Color Printer
//				Your job is to setup a Printer class, whose objects can print
//				a message with a specified color.//
//============================================================================

#include <iostream>

class Printer
{
	public :
	Printer(const std::string& color) : m_color(color){}

	std::string operator()(const std::string& msg) const{
		std::string tmp;
		tmp.append("[color: ").append(m_color);
		tmp.append(", message: ").append(msg);
		tmp.append("]");

		return tmp;
	}
	private :
	 std::string m_color;
};

int main()
{
	Printer red_printer("red");
	    auto result = red_printer("Hello");
	    std::cout << result  << std::endl;
	return 0;
}
