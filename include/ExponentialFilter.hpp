//!
//! @file				ExponentialFilter.hpp
//! @author				Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @created			2014-09-16
//! @last-modified		2014-09-16
//! @brief
//! @details
//!						See README.rst in repo root dir for more info.

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

//===============================================================================================//
//======================================== HEADER GUARD =========================================//
//===============================================================================================//

#ifndef MFILTER_EXPONENTIAL_FILTER_H
#define MFILTER_EXPONENTIAL_FILTER_H

//===============================================================================================//
//==================================== FORWARD DECLARATION ======================================//
//===============================================================================================//

namespace MbeddedNinja
{
	class ExponentialFilter;
}

//===============================================================================================//
//========================================== INCLUDES ===========================================//
//===============================================================================================//

//===== SYSTEM LIBRARIES =====//
//#include <cstdint>		// int8_t, int32_t e.t.c
//#include <iostream>

//===== USER LIBRARIES =====//
#include "MAssert/api/MAssertApi.hpp"

//===== USER SOURCE =====//
// none


namespace MbeddedNinja
{

	namespace MFilters
	{

		//! @brief		Offline exponential IIR filter.
		//! @details	Exceptions are not used.
		class ExponentialFilter
		{

			public:



			//======================================================================================//
			//==================================== PUBLIC METHODS ==================================//
			//======================================================================================//

			ExponentialFilter(
				float smoothingConstant,
				float initialValue) :
					smoothingConstant(smoothingConstant),
					output(initialValue)
			{
				// Make sure the smoothing constant is between 0 and 1 (inclusive)
				M_ASSERT((smoothingConstant >= 0.0) && (smoothingConstant <= 1.0));
			}

			float Run(float input)
			{

				// Using equation y(k) = a * y(k-1) + (1-a) * x(k)
				this->output = this->smoothingConstant * this->output + (1 - this->smoothingConstant) * input;

				// Return the calculated output, y(k)
				return this->output;
			}

			//======================================================================================//
			//============================ PUBLIC OPERATOR OVERLOAD DECLARATIONS ===================//
			//======================================================================================//



			//======================================================================================//
			//================================= PUBLIC VARIABLES ===================================//
			//======================================================================================//


					
			private:

			//======================================================================================//
			//=================================== PRIVATE METHODS ==================================//
			//======================================================================================//

			// none

			//======================================================================================//
			//================================== PRIVATE VARIABLES =================================//
			//======================================================================================//

			//! @brief		Stores the smoothing constant (a), that is provided in the constructor.
			float smoothingConstant;

			//! @brief		Remembers the output, y(k), for next time Run() is called (where it is used
			//!				as y(k-1)).
			float output;

			protected:

			//======================================================================================//
			//=================================== PROTECTED METHODS ================================//
			//======================================================================================//

			// none

			//======================================================================================//
			//================================== PROTECTED VARIABLES ===============================//
			//======================================================================================//

			// none
			
		}; // class ExponentialFilter

	} // namespace MFilters
} // namespace MbeddedNinja

#endif	// #ifndef MFILTER_EXPONENTIAL_FILTER_H

// EOF
