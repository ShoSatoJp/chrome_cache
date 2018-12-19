#pragma warning(disable:4996)

#pragma once

#include "targetver.h"

//stl
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <fstream>
#include <bitset>
#include <vector>
#include <string>
#include <sstream>
#include <filesystem>
#include <map>

//from vcpkg
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/iostreams/filtering_streambuf.hpp>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/filter/gzip.hpp>
#include <boost/iostreams/copy.hpp>
