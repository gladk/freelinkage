#===========================================================
ADD_LIBRARY(freelinkagelib SHARED node.cpp)
TARGET_LINK_LIBRARIES(freelinkagelib ${Boost_LIBRARIES} )
INSTALL(TARGETS freelinkagelib DESTINATION ${CMAKE_INSTALL_LIBDIR})
#===========================================================
