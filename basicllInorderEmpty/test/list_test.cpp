#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../list.hpp"
#include <string>

TEST_CASE("Test insert and print")
{
	List scores;
	scores.InsertInOrder(12);
	std::string oneitem = scores.getPrintableList();
	REQUIRE(oneitem == "12 -> nullptr");
	
	scores.InsertInOrder(5);
	scores.InsertInOrder(24235);
	scores.InsertInOrder(-1);
	std::string multi = scores.getPrintableList();
	REQUIRE(multi = "-1 -> 5 -> 12 -> 24235 -> nullptr");
}
