/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function implementations for the @link "resistor.h" @endlink file.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#include "resistor.h"

namespace nwacc
{
	/**
	 * Constructs and initializes a new instance of a resistor with the specified
	 * resistance value.
	 * 
	 * @param resistance The resistance value for this instance. 
	*/
	resistor::resistor(const double resistance) :
	resistance_ { resistance } { }

	/**
	 * A no-argument destructor for this instance.
	*/
	resistor::~resistor()
	{
		//std::cout << "Resistor deleted." << std::endl;
	}

	/**
	 * @copydoc circuit::get_resistance
	*/
	double resistor::get_resistance() const
	{
		return this->resistance_;
	}
}