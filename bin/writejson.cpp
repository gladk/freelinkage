/*
    This file is part of freelinkage.
    Gapart is the program to modify particle-pack-files for DEM-simulations.
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

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

#include <boost/foreach.hpp>
#include <Eigen/Core>

#include <vector>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

void writejson() {
  ptree pt;
    
  std::vector <Eigen::Vector3d> nodes, nodes_read;
  
  nodes.push_back(Eigen::Vector3d(0,0,0));
  nodes.push_back(Eigen::Vector3d(1110,0,0));
  nodes.push_back(Eigen::Vector3d(555,2180,0));
  BOOST_FOREACH(const Eigen::Vector3d &node, nodes) {
      pt.add("node", node(0));
      pt.add("node", node(1));
      pt.add("node", node(2));
  }
  
  write_json ("example.json", pt);
  
  ptree pt_read;

  read_json("example.json", pt_read);
  BOOST_FOREACH(ptree::value_type &v, pt.get_child("node")) {
    //nodes_read.push_back(static_cast <Eigen::Vector3d> v.second.data());
    std::cerr<<v.second.data()<<std::endl;
  }
}

int main(int ac, char* av[]) { 
  writejson();
}
