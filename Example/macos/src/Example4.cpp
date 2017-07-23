﻿/// Example4.cpp 
/// (C) 2017 Masato Kokubo
#if defined _MSC_VER
	#include "stdafx.h"
#endif

#include <complex>

#include "Example.hpp"
#include "DebugTrace.hpp"

/// ClassA::func4
void ClassA::func4() const noexcept {
/**/DEBUG_TRACE

	// std::complex<float>
	std::complex<float> fcomplex1(1.234F, 3.456F);
/**/DEBUG_PRINT(fcomplex1)

	// std::complex<double>
	std::complex<double> const dcomplex1(1.23456, 3.45678);
/**/DEBUG_PRINT(dcomplex1)

	// std::complex<long double>
	std::complex<long double> ldcomplex1(1.2345678L, 3.4567890L);
/**/DEBUG_PRINT(ldcomplex1)
}