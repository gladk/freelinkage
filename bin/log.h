/*
    This file is part of freelinkage.
    Freelinkage the program for calculating mechanical linkages.
    Copyright (C) 2013 TU Bergakademie Freiberg, Institute for Mechanics and Fluid Dynamics

    Author: 2013, Anton Gladky <gladky.anton@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Gapart is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with freelinkage.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once
#define BOOST_FILESYSTEM_NO_DEPRECATED

#include <boost/filesystem.hpp> 
#include <boost/program_options.hpp>
#include <boost/regex.hpp>
#include <boost/foreach.hpp>

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>

class logs {
  public:
    logs();
    void info(std::string s);
    void fatal(std::string s);
};
