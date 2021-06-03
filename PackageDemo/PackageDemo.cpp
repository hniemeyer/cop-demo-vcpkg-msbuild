// PackageDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fmt/core.h>
#include "xtensor/xarray.hpp"

int main()
{
	xt::xarray<double> arr1
	{ {1.0, 2.0, 3.0},
	 {2.0, 5.0, 7.0},
	 {2.0, 5.0, 7.0} };

	const auto res = 5.0 * arr1 - 0.5;

	fmt::print("Hello, world!\n");
	fmt::print("{}", res[0,0]);
}