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
include plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/depend.make

# Include the progress variables for this target.
include plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/flags.make

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/flags.make
plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/plugin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/plugin.c

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/plugin.c > CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.i

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/plugin.c -o CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.s

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.requires:

.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.requires

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.provides: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.requires
	$(MAKE) -f plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/build.make plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.provides.build
.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.provides

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.provides.build: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o


plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/flags.make
plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/utt_textgrid.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/utt_textgrid.c

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/utt_textgrid.c > CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.i

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/utt_textgrid.c -o CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.s

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.requires:

.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.requires

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.provides: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.requires
	$(MAKE) -f plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/build.make plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.provides.build
.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.provides

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.provides.build: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o


plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/flags.make
plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o: /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/write.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o   -c /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/write.c

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/utt_textgrid_plugin.dir/src/write.c.i"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/write.c > CMakeFiles/utt_textgrid_plugin.dir/src/write.c.i

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/utt_textgrid_plugin.dir/src/write.c.s"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid/src/write.c -o CMakeFiles/utt_textgrid_plugin.dir/src/write.c.s

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.requires:

.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.requires

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.provides: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.requires
	$(MAKE) -f plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/build.make plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.provides.build
.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.provides

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.provides.build: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o


# Object files for target utt_textgrid_plugin
utt_textgrid_plugin_OBJECTS = \
"CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o" \
"CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o" \
"CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o"

# External object files for target utt_textgrid_plugin
utt_textgrid_plugin_EXTERNAL_OBJECTS =

plugins/lib/utt_textgrid.spi.1.0.0: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o
plugins/lib/utt_textgrid.spi.1.0.0: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o
plugins/lib/utt_textgrid.spi.1.0.0: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o
plugins/lib/utt_textgrid.spi.1.0.0: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/build.make
plugins/lib/utt_textgrid.spi.1.0.0: engine/lib/libspct.so.1.1
plugins/lib/utt_textgrid.spi.1.0.0: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C shared library ../../../../lib/utt_textgrid.spi"
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utt_textgrid_plugin.dir/link.txt --verbose=$(VERBOSE)
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../../lib/utt_textgrid.spi.1.0.0 ../../../../lib/utt_textgrid.spi.1 ../../../../lib/utt_textgrid.spi

plugins/lib/utt_textgrid.spi.1: plugins/lib/utt_textgrid.spi.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/lib/utt_textgrid.spi.1

plugins/lib/utt_textgrid.spi: plugins/lib/utt_textgrid.spi.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/lib/utt_textgrid.spi

# Rule to build all files generated by this target.
plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/build: plugins/lib/utt_textgrid.spi

.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/build

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/requires: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/plugin.c.o.requires
plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/requires: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/utt_textgrid.c.o.requires
plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/requires: plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/src/write.c.o.requires

.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/requires

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/clean:
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid && $(CMAKE_COMMAND) -P CMakeFiles/utt_textgrid_plugin.dir/cmake_clean.cmake
.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/clean

plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/depend:
	cd /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/sources/speect/plugins/serialization/files/utterance/textgrid /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid /home/matteo/Scrivania/Despeect-ProductBaseline/SpeectInstaller/builds/x86_64-Linux/Speect/plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/serialization/files/utterance/textgrid/CMakeFiles/utt_textgrid_plugin.dir/depend
