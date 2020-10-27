/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function prototypes for the @link "serial.cpp" @endlink implementation
 * file and the declaration for the serial class.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#ifndef SERIAL_H_
#define SERIAL_H_

#include <vector>

#include "circuit.h"

namespace nwacc
{
	/**
	 * Represents a serial circuit with behaviors to determine the state of
	 * this particular circuit. A serial circuit models a series of circuits,
	 * each of which, can be a single resistor or another circuit.
	*/
	class serial : public circuit
	{
	public:

		/**
		 * A no-argument destructor for this instance.
		*/
		~serial();

		/**
		 * @copydoc circuit::get_resistance
		*/
		double get_resistance() const override;

		/**
		 * Adds a new circuit to the list of circuits.
		 * 
		 * @param circuit The new circuit to add.
		*/
		void add(circuit* circuit);

	private:

		/**
		 * @brief The container of circuits for this instance.
		*/
		std::vector<circuit*> circuits_;
	};
}

#endif