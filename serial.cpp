/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function implementations for the @link "serial.h" @endlink file.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#include "serial.h"

namespace nwacc
{
	/**
	 * A no-argument destructor for this instance.
	*/
	serial::~serial()
	{
		//std::cout << "Serial circuit deleted." << std::endl;
	}

	/**
	 * @copydoc circuit::get_resistance
	*/
	double serial::get_resistance() const
	{
		auto sum = 0.0;
		for (const auto& a_circuit : this->circuits_) {
			sum += a_circuit->get_resistance();
		}
		return sum;
	}

	/**
	 * Adds a new circuit to the list of circuits.
	 * 
	 * @param circuit The new circuit to add.
	*/
	void serial::add(circuit* circuit)
	{
		this->circuits_.emplace_back(circuit);
	}
}