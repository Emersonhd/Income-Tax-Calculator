#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/unit_test.hpp>

//Test for the function calculateTax

BOOST_AUTO_TEST_CASE( my_addition_test )
{
// Check equality of the results of two expressions
BOOST_CHECK_EQUAL( (1+2) , 3 );
}


