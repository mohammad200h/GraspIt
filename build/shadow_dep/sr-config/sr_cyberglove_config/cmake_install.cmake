# Install script for directory: /home/mamad/Graspit/src/shadow_dep/sr-config/sr_cyberglove_config

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/mamad/Graspit/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/mamad/Graspit/build/shadow_dep/sr-config/sr_cyberglove_config/catkin_generated/installspace/sr_cyberglove_config.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sr_cyberglove_config/cmake" TYPE FILE FILES
    "/home/mamad/Graspit/build/shadow_dep/sr-config/sr_cyberglove_config/catkin_generated/installspace/sr_cyberglove_configConfig.cmake"
    "/home/mamad/Graspit/build/shadow_dep/sr-config/sr_cyberglove_config/catkin_generated/installspace/sr_cyberglove_configConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sr_cyberglove_config" TYPE FILE FILES "/home/mamad/Graspit/src/shadow_dep/sr-config/sr_cyberglove_config/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sr_cyberglove_config/calibrations" TYPE DIRECTORY FILES "/home/mamad/Graspit/src/shadow_dep/sr-config/sr_cyberglove_config/calibrations/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sr_cyberglove_config/mappings" TYPE DIRECTORY FILES "/home/mamad/Graspit/src/shadow_dep/sr-config/sr_cyberglove_config/mappings/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sr_cyberglove_config/serial" TYPE DIRECTORY FILES "/home/mamad/Graspit/src/shadow_dep/sr-config/sr_cyberglove_config/serial/")
endif()

