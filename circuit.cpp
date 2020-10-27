/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function implementations for the @link "circuit.h" @endlink file.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#include <iomanip>

#include "circuit.h"

namespace nwacc
{
	/**
	 * A no-argument destructor for this instance.
	*/
	circuit::~circuit()
	{
		//std::cout << "Circuit deleted." << std::endl;
	}

	/**
	 * Prints the combined resistance values for each circuit on the specified
	 * output stream.
	 * 
	 * @param out The target output stream to use. The default is the common
	 * output stream (cout).
	*/
	void circuit::print(std::ostream& out) const
	{
		out << std::fixed << std::showpoint << std::setprecision(k_decimal_places);		
		out << k_resistance_banner << this->get_resistance() << std::endl;
	}

	/**
	 * The banner to display for the combined resistance on the console.
	*/
	const std::string circuit::k_resistance_banner = "Combined Resistance: ";
}