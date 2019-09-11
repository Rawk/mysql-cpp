#include <boost/test/included/unit_test.hpp>

#include "testInputBinder.hpp"
#include "testMySql.hpp"
#include "testOutputBinder.hpp"

using namespace boost::unit_test;

test_suite* init_unit_test_suite(int, char*[]) {
    // Tests from testInputBinder.hpp
    framework::master_test_suite().add(BOOST_TEST_CASE(testBind));
    // Tests from testOutputBinder.hpp
    framework::master_test_suite().add(BOOST_TEST_CASE(testSetResult));
    framework::master_test_suite().add(BOOST_TEST_CASE(testSetParameter));
    // Tests from testMySql.hpp
    framework::master_test_suite().add(BOOST_TEST_CASE(testConnection));
    framework::master_test_suite().add(BOOST_TEST_CASE(testRunCommand));
    framework::master_test_suite().add(BOOST_TEST_CASE(testRunQuery));
    framework::master_test_suite().add(BOOST_TEST_CASE(testInvalidCommands));
    framework::master_test_suite().add(BOOST_TEST_CASE(testPreparedStatement));

    return 0;
}
