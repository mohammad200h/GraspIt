execute_process(COMMAND "/home/mamad/Graspit/build/shadow_dep/shadow_robot_ethercat/sr_robot_lib/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/mamad/Graspit/build/shadow_dep/shadow_robot_ethercat/sr_robot_lib/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
