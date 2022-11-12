cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(main VERSION 1.0)
add_executable(main usb.cpp)
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

if(UNIX AND NOT APPLE)
    set(LINUX TRUE)
endif()
#linux libusb
if (LINUX)
  message(STATUS ">>> Linux")
  add_library( libusb SHARED IMPORTED )
  set_target_properties( libusb PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/libusb-1.0.so )
  target_link_libraries(main libusb)
endif ()
#windows libusb
if (WIN32)
message(STATUS ">>> Windows")
    target_link_libraries(main ${CMAKE_CURRENT_SOURCE_DIR}/lib/libusb-1.0.lib)
endif ()