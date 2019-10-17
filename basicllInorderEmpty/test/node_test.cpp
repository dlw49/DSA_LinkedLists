#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include <string>
#include "../node.hpp"

TEST_CASE("Testing basic node")
{
	Node* n;
	n = new Node(7);
	REQUIRE(n->GetData() == 7);
	REQUIRE(n->GetNext() == nullptr);
}

TEST_CASE("Test node chaining")
{
	Node* n;
	n = new Node(7);
	Node* n2 = new Node(12, n);
	REQUIRE(n2->GetData() == 12);
	REQUIRE(n2->GetNext()->GetData() == 7);
	REQUIRE(n2->GetNext()->GetNext() == nullptr);
}
