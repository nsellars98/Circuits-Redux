/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the function prototypes for the @link "parallel.cpp" @endlink implementation
 * file and the declaration for the parallel class.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#ifndef PARALLEL_H_
#define PARALLEL_H_

#include <vector>

#include "circuit.h"

namespace nwacc
{
	/**
	 * Represents a parallel circuit with behaviors to determine the state of
	 * this particular circuit. A parallel circuit models a list of circuits
	 * in parallel, each of which, can be a single resistor or another circuit.
	*/
	class parallel : public circuit
	{
	public:

		/**
		 * A no-argument destructor for this instance.
		*/
		~parallel();

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

		/**
		 * The divisor value used when calculating the Ohms Law resistance value for
		 * parallel circuits.
		*/
		static constexpr int k_ohms_law_divisor = 1;
	};
}

#endif