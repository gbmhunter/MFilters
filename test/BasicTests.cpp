//!
//! @file 			BasicTests.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @created		2014-09-16
//! @last-modified 	2014-09-16
//! @brief 			Contains basic tests.
//! @details
//!					See README.rst in root dir for more info.

//===== SYSTEM LIBRARIES =====//
//#include <cstdint>	// uint32_t, e.t.c

//====== USER LIBRARIES =====//
#include "MUnitTest/api/MUnitTestApi.hpp"

//===== USER SOURCE =====//
#include "../api/MFiltersApi.hpp"

using namespace MbeddedNinja;

namespace MFiltersTestsNs
{

	MTEST(BasicExpFilterTest)
	{
		// Create an exponential filter
		MFilters::ExponentialFilter myExpFilter(0.5);

		// Check
		CHECK_EQUAL(0.0, myExpFilter.Run(0.0));
	}

	MTEST(AEq0ExpFilterTest)
	{
		// Create an exponential filter, setting
		// a to 1. Output should remain at 0.
		MFilters::ExponentialFilter myExpFilter(1.0);

		// Check that the output remains at 0
		CHECK_EQUAL(0.0, myExpFilter.Run(10.0));

		// Check that the output remains at 0
		CHECK_EQUAL(0.0, myExpFilter.Run(-5.23));

		// Check that the output remains at 0
		CHECK_EQUAL(0.0, myExpFilter.Run(234.54));
	}

	MTEST(AEq1ExpFilterTest)
	{
		// Create an exponential filter, setting
		// a to 0. Output should follow input.
		MFilters::ExponentialFilter myExpFilter(0.0);

		// Check that the output follows input
		CHECK_EQUAL(10.0, myExpFilter.Run(10.0));

		// Check that the output follows input
		CHECK_EQUAL(-5.23, myExpFilter.Run(-5.23));

		// Check that the output follows input
		CHECK_EQUAL(234.54, myExpFilter.Run(234.54));
	}

} // namespace MFiltersTestsNs
