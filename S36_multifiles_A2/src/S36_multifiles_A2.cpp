//============================================================================
// Name        : S36_multifiles_A2.cpp (declaration and defination)
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : declaration and defination
//============================================================================

#include <iostream>

//Declaration and definition
class Person
{
	public :
    //Declaration for the constructor
	Person(const std::string& names_param, int age_param);

	void print_info()const
	{
		std::cout << "name : " << full_name << " , age : " << age << std::endl;
	}
private :
	std::string full_name;
	int age;

public :
	//static variable declaration
	static int person_count;
};

	//Declaration and definition
	double weight;

	//Functions : Declaration and defintion
	/*
	double add(double a, double b){
	    return a + b;
	}
	*/

	//Declaration
	double add(double a, double b);
	//Declaration and definition
	struct Point
	{
	    double m_x;
	    double m_y;
	};

	//Declaration
	int Person::person_count = 8;

	Person::Person(const std::string& names_param, int age_param) : full_name{names_param}, age{age_param}
	{
	    ++person_count;
	}

	double add(double a, double b)
	{
	    return a + b;
	}
	int main()
	{
	    /*
	   // weight = 5; // Assignment
	    std::cout << weight << std::endl;
	    double result = add(10,20.5);
	    std::cout << "result : " << result << std::endl;
	    */
	   Person p1("John Snow",27);
	   p1.print_info();

	    return 0;
	}

	/*
	//Definition
	double add(double a, double b){
	    return a + b;
	}
	*/
