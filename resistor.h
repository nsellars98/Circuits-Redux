/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function prototypes for the @link "resistor.cpp" @endlink implementation
 * file and the declaration for the resistor class.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#ifndef RESISTOR_H_
#define RESISTOR_H_

#include "circuit.h"

namespace nwacc
{
	/**
	 * Represents a single resistor with behaviors to determine the state of the resistor.
	*/
	class resistor : public circuit
	{
	public:

		/**
		 * Constructs and initializes a new instance of a resistor with the specified
		 * resistance value.
		 * 
		 * @param resistance The resistance value for this instance. 
		*/
		resistor(const double resistance);

		/**
		 * A no-argument destructor for this instance.
		*/
		~resistor();

		/**
		 * @copydoc circuit::get_resistance
		*/
		double get_resistance() const override;		

	private:

		/**
		 * The resistance value for this instance.
		*/
		double resistance_;
	};
}

#endif