/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function prototypes for the @link "circuit.cpp" @endlink implementation
 * file and the declaration for the circuit class.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#ifndef CIRCUIT_H_
#define CIRCUIT_H_

#include <iostream>

namespace nwacc
{
	/**
	 * Represents a circuit with behaviors to determine the state of the circuit.
	*/
	class circuit
	{
	public:

		/**
		 * A no-argument destructor for this instance.
		*/
		virtual ~circuit();

		/**
		 * Gets the resistance values for each circuit.
		 * 
		 * @return The resistance values for the circuits.
		*/
		virtual double get_resistance() const = 0;

		/**
		 * Prints the combined resistance values for each circuit on the specified
		 * output stream.
		 * 
		 * @param out The target output stream to use. The default is the common
		 * output stream (cout).
		*/
		virtual void print(std::ostream& out = std::cout) const;

	private:

		/**
		 * The amount of decimal places to use for the resistance value.
		*/
		static constexpr int k_decimal_places = 2;

		/**
		 * The banner to display for the combined resistance on the console.
		*/
		static const std::string k_resistance_banner;
	};
}

#endif