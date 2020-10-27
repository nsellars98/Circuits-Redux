/**
 * CPP 1 - Homework 7 Solution
 *
 * This application will use concepts from object-oriented programming such as classes, inheritance,
 * and dynamic memory allocation to solve a complex problem found in the real world.
 *
 * This file contains the 'main' function. Program execution begins and ends there.
 *
 * @date 07/04/2020
 * 
 * @author Nathan C. Sellars
*/

#include <vector>

#include "circuit.h"
#include "parallel.h"
#include "resistor.h"
#include "serial.h"

/**
 * The starting point of the application. A return value indicates whether
 * the program completed successfully and without error; otherwise, the program
 * failed, and a non-zero value is returned indicating an error has occurred.
 * 
 * @return an integer to indicate success or failure. Zero (0) is success;
 * otherwise, failure.
*/
auto main() -> int
{
	 std::vector<nwacc::circuit*> circuits;
	
	/**
	 * Circuit One
	 */
	
	auto* circuit_one = new nwacc::parallel();
	circuit_one->add(new nwacc::resistor(100.0));
	
	auto* circuit_two = new nwacc::serial();
	circuit_two->add(new nwacc::resistor(100.0));
	circuit_two->add(new nwacc::resistor(200.0));
	circuit_one->add(circuit_two);
	
	circuit_one->print();
	delete circuit_one;
	//
	// circuits.emplace_back(circuit_one);
	// circuits.emplace_back(circuit_two);

	/**
	 * Circuit Two
	 */

	// auto* circuit_one = new nwacc::serial();
	// circuit_one->add(new nwacc::resistor(300.0));
	// circuit_one->add(new nwacc::resistor(450.0));
	//
	// auto* circuit_two = new nwacc::parallel();
	// circuit_two->add(new nwacc::resistor(275.0));
	// circuit_two->add(new nwacc::resistor(125.0));
	// circuit_one->add(circuit_two);
	//
	// circuit_one->print();
	// delete circuit_one;
	//
	// circuits.emplace_back(circuit_one);
	// circuits.emplace_back(circuit_two);

	/**
	 * Circuit Three
	 */
	
	// auto* circuit_one = new nwacc::parallel();
	// circuit_one->add(new nwacc::resistor(25.72));
	// circuit_one->add(new nwacc::resistor(31.41));
	//
	// auto* circuit_two = new nwacc::parallel();
	// circuit_two->add(new nwacc::resistor(112.58));
	// circuit_two->add(new nwacc::resistor(87.98));
	// circuit_one->add(circuit_two);
	//
	// circuit_one->print();
	// delete circuit_one;
	//
	// circuits.emplace_back(circuit_one);
	// circuits.emplace_back(circuit_two);

	// for (const auto& a_circuit : circuits) {
	// 	std::cout << a_circuit->get_resistance() << std::endl;
	// }
	//
	// for (auto& a_circuit : circuits) {
	// 	delete a_circuit;
	// }
	
	return 0;
}