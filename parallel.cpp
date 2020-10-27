/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function implementations for the @link "parallel.h" @endlink file.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#include "parallel.h"

namespace nwacc
{
	/**
	 * A no-argument destructor for this instance.
	*/
	parallel::~parallel()
	{
		//std::cout << "Parallel circuit deleted." << std::endl;
	}

	/**
	 * @copydoc circuit::get_resistance
	*/
	double parallel::get_resistance() const
	{
		auto sum = 0.0;
		for (const auto& a_circuit : this->circuits_) {
			sum += k_ohms_law_divisor / a_circuit->get_resistance();
		}
		return k_ohms_law_divisor / sum;
	}

	/**
	 * Adds a new circuit to the list of circuits.
	 * 
	 * @param circuit The new circuit to add.
	*/
	void parallel::add(circuit* circuit)
	{
		this->circuits_.emplace_back(circuit);
	}
}