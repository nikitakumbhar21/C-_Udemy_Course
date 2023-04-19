//============================================================================
// Name        : S34_StaticMem_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Cool Utility
/*	You will write a class named CoolUtility that works in such a way that the code below

    CoolUtility cu("I can take you from point A to point #");
    cu.what_do_you_do();
    std::cout << std::endl;
    std::cout << "general purpose : " << CoolUtility::s_general_description << std::endl;
will print something like

I can take you from point A to point #
general purpose : Cool utility to move us all to Mars
The class will have two member variables

s_general_description;

m_object_description;

s_general_description will be a static variable storing the message
"Cool utility to move us all to Mars" without any new character at the end.
It will be stored as const char *

m_object_description will be just a non static member variable of type const char *.
 You will be careful to initialize it properly with the value the users of the class
 pass through the one param constructor.

You will also set up a

void what_do_you_do() const
method that just prints whatever message is stored in m_object_description on
std::cout without any space after the message. */
//============================================================================

#include <iostream>

class CoolUtility
{
public :
	CoolUtility(const char * object_description)
		: m_object_description(object_description){}
	void what_do_you_do() const
	{
		std::cout << m_object_description ;
	}

	static const char* s_general_description;
private :
	const char * m_object_description;

};

const char * CoolUtility::s_general_description {"Cool utility to move us all to Mars"};

int main()
{
	CoolUtility cu("I can take you from point A to point #");
	cu.what_do_you_do();
	std::cout << std::endl;
	std::cout << "general purpose : " << CoolUtility::s_general_description << std::endl;
}
