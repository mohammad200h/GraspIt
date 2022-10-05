# Install script for directory: /home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/catkin_generated/installspace/grasp_planning_graspit.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/grasp_planning_graspit/cmake" TYPE FILE FILES
    "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/catkin_generated/installspace/grasp_planning_graspitConfig.cmake"
    "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/catkin_generated/installspace/grasp_planning_graspitConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/grasp_planning_graspit" TYPE FILE FILES "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgrasp_planning_graspit.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgrasp_planning_graspit.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgrasp_planning_graspit.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/mamad/Graspit/devel/lib/libgrasp_planning_graspit.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgrasp_planning_graspit.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgrasp_planning_graspit.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgrasp_planning_graspit.so"
         OLD_RPATH "/opt/ros/kinetic/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgrasp_planning_graspit.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit" TYPE EXECUTABLE FILES "/home/mamad/Graspit/devel/lib/grasp_planning_graspit/grasp_planning")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning"
         OLD_RPATH "/home/mamad/Graspit/devel/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning_graspit-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning_graspit-targets.cmake"
         "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/CMakeFiles/Export/lib/grasp_planning_graspit/grasp_planning_graspit-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning_graspit-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning_graspit-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit" TYPE FILE FILES "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/CMakeFiles/Export/lib/grasp_planning_graspit/grasp_planning_graspit-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit" TYPE FILE FILES "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/CMakeFiles/Export/lib/grasp_planning_graspit/grasp_planning_graspit-targets-noconfig.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning-targets.cmake"
         "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/CMakeFiles/Export/lib/grasp_planning_graspit/grasp_planning-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit/grasp_planning-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit" TYPE FILE FILES "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/CMakeFiles/Export/lib/grasp_planning_graspit/grasp_planning-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit" TYPE FILE FILES "/home/mamad/Graspit/build/graspit-pkgs/grasp_planning_graspit/CMakeFiles/Export/lib/grasp_planning_graspit/grasp_planning-targets-noconfig.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit" TYPE FILE FILES "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/cmake/grasp_planning_graspitConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/grasp_planning_graspit" TYPE FILE FILES
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/GraspItSceneManager.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/GraspItSceneManagerHeadless.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/GraspItAccessor.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/GraspItDatabaseManager.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/GraspItSimpleDBManager.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/EigenGraspPlanner.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/EigenGraspResult.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/GraspItTypes.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/SharedPtr.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/ThreadImpl.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/PrintHelpers.h"
    "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/include/grasp_planning_graspit/LogBinding.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/grasp_planning_graspit" TYPE FILE FILES "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/CMakeMacros/FindEigen3.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/grasp_planning_graspit" TYPE DIRECTORY FILES "/home/mamad/Graspit/src/graspit-pkgs/grasp_planning_graspit/tutorial")
endif()

