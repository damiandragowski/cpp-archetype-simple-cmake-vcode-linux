#define BOOST_TEST_MODULE SimpleClassTest

#include "SimpleClass.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <string>
#include <iostream>
using namespace std;

BOOST_AUTO_TEST_SUITE(SimpleClassSuite)

BOOST_AUTO_TEST_CASE(displayTest)
{
    SimpleClass<std::string> simpleClass(std::string("simple"));

    simpleClass.display();
}
BOOST_AUTO_TEST_SUITE_END()
