// infoware - C++ System information Library
//
// Written in 2016 by nabijaczleweli <nabijaczleweli@gmail.com> and ThePhD <phdofthehouse@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>


#ifndef _WIN32

#include "infoware/cpu.hpp"
#include <unistd.h>


// http://stackoverflow.com/a/150971/2851815
unsigned int iware::cpu::cores() noexcept {
	return sysconf(_SC_NPROCESSORS_ONLN);
}


#endif
