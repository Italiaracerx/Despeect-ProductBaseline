# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect

# Include any dependencies generated for this target.
include plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/depend.make

# Include the progress variables for this target.
include plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/flags.make

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/flags.make
plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/plugin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/track_int_plugin.dir/src/plugin.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/plugin.c

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/track_int_plugin.dir/src/plugin.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/plugin.c > CMakeFiles/track_int_plugin.dir/src/plugin.c.i

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/track_int_plugin.dir/src/plugin.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/plugin.c -o CMakeFiles/track_int_plugin.dir/src/plugin.c.s

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.requires:

.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.requires

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.provides: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.requires
	$(MAKE) -f plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/build.make plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.provides.build
.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.provides

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.provides.build: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o


plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/flags.make
plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/track_int.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/track_int_plugin.dir/src/track_int.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/track_int.c

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/track_int_plugin.dir/src/track_int.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/track_int.c > CMakeFiles/track_int_plugin.dir/src/track_int.c.i

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/track_int_plugin.dir/src/track_int.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer/src/track_int.c -o CMakeFiles/track_int_plugin.dir/src/track_int.c.s

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.requires:

.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.requires

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.provides: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.requires
	$(MAKE) -f plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/build.make plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.provides.build
.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.provides

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.provides.build: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o


# Object files for target track_int_plugin
track_int_plugin_OBJECTS = \
"CMakeFiles/track_int_plugin.dir/src/plugin.c.o" \
"CMakeFiles/track_int_plugin.dir/src/track_int.c.o"

# External object files for target track_int_plugin
track_int_plugin_EXTERNAL_OBJECTS =

plugins/lib/track_int.spi.1.0.0: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o
plugins/lib/track_int.spi.1.0.0: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o
plugins/lib/track_int.spi.1.0.0: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/build.make
plugins/lib/track_int.spi.1.0.0: engine/lib/libspct.so.1.1
plugins/lib/track_int.spi.1.0.0: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C shared library ../../../lib/track_int.spi"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/track_int_plugin.dir/link.txt --verbose=$(VERBOSE)
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../lib/track_int.spi.1.0.0 ../../../lib/track_int.spi.1 ../../../lib/track_int.spi

plugins/lib/track_int.spi.1: plugins/lib/track_int.spi.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/lib/track_int.spi.1

plugins/lib/track_int.spi: plugins/lib/track_int.spi.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/lib/track_int.spi

# Rule to build all files generated by this target.
plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/build: plugins/lib/track_int.spi

.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/build

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/requires: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/plugin.c.o.requires
plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/requires: plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/src/track_int.c.o.requires

.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/requires

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/clean:
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer && $(CMAKE_COMMAND) -P CMakeFiles/track_int_plugin.dir/cmake_clean.cmake
.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/clean

plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/depend:
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/utils/tracks/integer /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/utils/tracks/integer/CMakeFiles/track_int_plugin.dir/depend
