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
include plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/depend.make

# Include the progress variables for this target.
include plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/flags.make

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/flags.make
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/plugin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/plugin.c

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/plugin.c > CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.i

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/plugin.c -o CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.s

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.requires:

.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.requires

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.provides: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.requires
	$(MAKE) -f plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/build.make plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.provides.build
.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.provides

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.provides.build: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o


plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/flags.make
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/phoneset_json.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/phoneset_json.c

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/phoneset_json.c > CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.i

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/phoneset_json.c -o CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.s

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.requires:

.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.requires

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.provides: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.requires
	$(MAKE) -f plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/build.make plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.provides.build
.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.provides

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.provides.build: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o


plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/flags.make
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/serialized_phoneset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/serialized_phoneset.c

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/serialized_phoneset.c > CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.i

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/serialized_phoneset.c -o CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.s

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.requires:

.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.requires

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.provides: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.requires
	$(MAKE) -f plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/build.make plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.provides.build
.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.provides

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.provides.build: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o


plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/flags.make
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/read.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/phoneset_json_plugin.dir/src/read.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/read.c

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/phoneset_json_plugin.dir/src/read.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/read.c > CMakeFiles/phoneset_json_plugin.dir/src/read.c.i

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/phoneset_json_plugin.dir/src/read.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json/src/read.c -o CMakeFiles/phoneset_json_plugin.dir/src/read.c.s

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.requires:

.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.requires

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.provides: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.requires
	$(MAKE) -f plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/build.make plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.provides.build
.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.provides

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.provides.build: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o


# Object files for target phoneset_json_plugin
phoneset_json_plugin_OBJECTS = \
"CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o" \
"CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o" \
"CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o" \
"CMakeFiles/phoneset_json_plugin.dir/src/read.c.o"

# External object files for target phoneset_json_plugin
phoneset_json_plugin_EXTERNAL_OBJECTS =

plugins/lib/phoneset_json.spi.1.0.0: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o
plugins/lib/phoneset_json.spi.1.0.0: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o
plugins/lib/phoneset_json.spi.1.0.0: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o
plugins/lib/phoneset_json.spi.1.0.0: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o
plugins/lib/phoneset_json.spi.1.0.0: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/build.make
plugins/lib/phoneset_json.spi.1.0.0: engine/lib/libspct.so.1.1
plugins/lib/phoneset_json.spi.1.0.0: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C shared library ../../../../lib/phoneset_json.spi"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/phoneset_json_plugin.dir/link.txt --verbose=$(VERBOSE)
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../../lib/phoneset_json.spi.1.0.0 ../../../../lib/phoneset_json.spi.1 ../../../../lib/phoneset_json.spi

plugins/lib/phoneset_json.spi.1: plugins/lib/phoneset_json.spi.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/lib/phoneset_json.spi.1

plugins/lib/phoneset_json.spi: plugins/lib/phoneset_json.spi.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/lib/phoneset_json.spi

# Rule to build all files generated by this target.
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/build: plugins/lib/phoneset_json.spi

.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/build

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/requires: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/plugin.c.o.requires
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/requires: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/phoneset_json.c.o.requires
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/requires: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/serialized_phoneset.c.o.requires
plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/requires: plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/src/read.c.o.requires

.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/requires

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/clean:
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json && $(CMAKE_COMMAND) -P CMakeFiles/phoneset_json_plugin.dir/cmake_clean.cmake
.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/clean

plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/depend:
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/phoneset/json /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/serialization/files/phoneset/json/CMakeFiles/phoneset_json_plugin.dir/depend
