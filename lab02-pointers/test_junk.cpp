#include "unit_test_framework.h"

TEST(whatever_test_name_is){
	bool potato = true;
	ASSERT_EQUAL(potato, false); // Must use one of the defined assert macros
}

TEST_MAIN()
