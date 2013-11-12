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

#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sinks/sync_frontend.hpp>
#include <boost/log/sinks/text_ostream_backend.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/log/utility/empty_deleter.hpp>

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

class logs {
  private:
    boost::shared_ptr< boost::log::core > _core;
    boost::log::sources::severity_logger< boost::log::trivial::severity_level > _lg;
  public:
    logs();
    void info(std::string s);
    boost::shared_ptr< boost::log::core > logRoutines();
};
