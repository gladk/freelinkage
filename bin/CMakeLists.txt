#===========================================================
ADD_EXECUTABLE(freelinkagebin main.cpp log.cpp)
TARGET_LINK_LIBRARIES(freelinkagebin ${Boost_LIBRARIES} freelinkagelib)
INSTALL(TARGETS freelinkagebin DESTINATION ${CMAKE_INSTALL_BINDIR})
#===========================================================
#===========================================================
ADD_EXECUTABLE(writejsjon writejson.cpp)
TARGET_LINK_LIBRARIES(writejsjon ${Boost_LIBRARIES} freelinkagelib)
INSTALL(TARGETS writejsjon DESTINATION ${CMAKE_INSTALL_BINDIR})
#===========================================================
