# Install script for directory: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/processors/features/nlp/syl_acc_in_phrase

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/processors/features/nlp/syl_acc_in_phrase/syls_acc_from_start/cmake_install.cmake")
  include("/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/processors/features/nlp/syl_acc_in_phrase/syls_acc_to_end/cmake_install.cmake")
  include("/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/processors/features/nlp/syl_acc_in_phrase/syls_to_next_acc/cmake_install.cmake")
  include("/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/processors/features/nlp/syl_acc_in_phrase/syls_from_prev_acc/cmake_install.cmake")

endif()
