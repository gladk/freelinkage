#===========================================================
ADD_EXECUTABLE(freelinkage main.cpp)
TARGET_LINK_LIBRARIES(freelinkage ${Boost_LIBRARIES} vtkHybrid)
INSTALL(TARGETS freelinkage DESTINATION ${CMAKE_INSTALL_BINDIR})
#===========================================================
