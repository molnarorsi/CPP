# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Stringek.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stringek.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stringek.dir/flags.make

CMakeFiles/Stringek.dir/main.cpp.obj: CMakeFiles/Stringek.dir/flags.make
CMakeFiles/Stringek.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Stringek.dir/main.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Stringek.dir\main.cpp.obj -c "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\main.cpp"

CMakeFiles/Stringek.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stringek.dir/main.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\main.cpp" > CMakeFiles\Stringek.dir\main.cpp.i

CMakeFiles/Stringek.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stringek.dir/main.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\main.cpp" -o CMakeFiles\Stringek.dir\main.cpp.s

CMakeFiles/Stringek.dir/functions.cpp.obj: CMakeFiles/Stringek.dir/flags.make
CMakeFiles/Stringek.dir/functions.cpp.obj: ../functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Stringek.dir/functions.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Stringek.dir\functions.cpp.obj -c "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\functions.cpp"

CMakeFiles/Stringek.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stringek.dir/functions.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\functions.cpp" > CMakeFiles\Stringek.dir\functions.cpp.i

CMakeFiles/Stringek.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stringek.dir/functions.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\functions.cpp" -o CMakeFiles\Stringek.dir\functions.cpp.s

# Object files for target Stringek
Stringek_OBJECTS = \
"CMakeFiles/Stringek.dir/main.cpp.obj" \
"CMakeFiles/Stringek.dir/functions.cpp.obj"

# External object files for target Stringek
Stringek_EXTERNAL_OBJECTS =

Stringek.exe: CMakeFiles/Stringek.dir/main.cpp.obj
Stringek.exe: CMakeFiles/Stringek.dir/functions.cpp.obj
Stringek.exe: CMakeFiles/Stringek.dir/build.make
Stringek.exe: CMakeFiles/Stringek.dir/linklibs.rsp
Stringek.exe: CMakeFiles/Stringek.dir/objects1.rsp
Stringek.exe: CMakeFiles/Stringek.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Stringek.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Stringek.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stringek.dir/build: Stringek.exe

.PHONY : CMakeFiles/Stringek.dir/build

CMakeFiles/Stringek.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Stringek.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Stringek.dir/clean

CMakeFiles/Stringek.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek" "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek" "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\cmake-build-debug" "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\cmake-build-debug" "D:\UNIVERSITY\MASODEV\ELSO FELEV\Fejlett programozasi technikak\Gyakorlatok\LAB1\Stringek\cmake-build-debug\CMakeFiles\Stringek.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Stringek.dir/depend
