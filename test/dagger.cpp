/*
	This file is part of cpp-ethereum.

	cpp-ethereum is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Foobar is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file dagger.cpp
 * @author Gav Wood <i@gavwood.com>
 * @date 2014
 * Dagger test functions.
 */

#include <chrono>
#include "Dagger.h"
using namespace std;
using namespace std::chrono;
using namespace eth;

int daggerTest()
{
	// Test dagger
	{
		Dagger d;
		auto s = steady_clock::now();
		cout << hex << d.eval((h256)1, 0);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
		cout << hex << d.eval((h256)1, 1);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
	}
	{
		Dagger d;
		auto s = steady_clock::now();
		cout << hex << d.eval((h256)1, 0);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
		cout << hex << d.eval((h256)1, 1);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
	}
	return 0;
}

