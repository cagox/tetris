# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\burlingk\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\burlingk\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\burlingk\CLionProjects\tetris

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\tetris.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\tetris.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\tetris.dir\flags.make

CMakeFiles\tetris.dir\main.cpp.obj: CMakeFiles\tetris.dir\flags.make
CMakeFiles\tetris.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tetris.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\tetris.dir\main.cpp.obj /FdCMakeFiles\tetris.dir\ /FS -c C:\Users\burlingk\CLionProjects\tetris\main.cpp
<<

CMakeFiles\tetris.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\tetris.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\burlingk\CLionProjects\tetris\main.cpp
<<

CMakeFiles\tetris.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\tetris.dir\main.cpp.s /c C:\Users\burlingk\CLionProjects\tetris\main.cpp
<<

CMakeFiles\tetris.dir\Tetris.cpp.obj: CMakeFiles\tetris.dir\flags.make
CMakeFiles\tetris.dir\Tetris.cpp.obj: ..\Tetris.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tetris.dir/Tetris.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\tetris.dir\Tetris.cpp.obj /FdCMakeFiles\tetris.dir\ /FS -c C:\Users\burlingk\CLionProjects\tetris\Tetris.cpp
<<

CMakeFiles\tetris.dir\Tetris.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/Tetris.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\tetris.dir\Tetris.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\burlingk\CLionProjects\tetris\Tetris.cpp
<<

CMakeFiles\tetris.dir\Tetris.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/Tetris.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\tetris.dir\Tetris.cpp.s /c C:\Users\burlingk\CLionProjects\tetris\Tetris.cpp
<<

# Object files for target tetris
tetris_OBJECTS = \
"CMakeFiles\tetris.dir\main.cpp.obj" \
"CMakeFiles\tetris.dir\Tetris.cpp.obj"

# External object files for target tetris
tetris_EXTERNAL_OBJECTS =

tetris.exe: CMakeFiles\tetris.dir\main.cpp.obj
tetris.exe: CMakeFiles\tetris.dir\Tetris.cpp.obj
tetris.exe: CMakeFiles\tetris.dir\build.make
tetris.exe: CMakeFiles\tetris.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tetris.exe"
	C:\Users\burlingk\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\tetris.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x64\mt.exe --manifests -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\tetris.dir\objects1.rsp @<<
 /out:tetris.exe /implib:tetris.lib /pdb:C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug\tetris.pdb /version:0.0 /machine:x64 /debug /INCREMENTAL /subsystem:console   -LIBPATH:C:\Users\burlingk\CLionProjects\tetris\lib\SDL2\x64  SDL2.lib SDL2main.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\tetris.dir\build: tetris.exe
.PHONY : CMakeFiles\tetris.dir\build

CMakeFiles\tetris.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tetris.dir\cmake_clean.cmake
.PHONY : CMakeFiles\tetris.dir\clean

CMakeFiles\tetris.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\burlingk\CLionProjects\tetris C:\Users\burlingk\CLionProjects\tetris C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug C:\Users\burlingk\CLionProjects\tetris\cmake-build-debug\CMakeFiles\tetris.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\tetris.dir\depend

