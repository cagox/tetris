# Tetris

I need a project to refresh my C++ skills, so here goes nothing.

This is a Tetris clone built using SDL2 and C++. 
I am creating the game using msvc for the compiler, and composing the code
in the wonderful Clion by the wonderful team over at JetBrains, and using
cmake for the build system.

If you are using a different setup, you will need to tweak things a bit.
Mainly, you will need to adjust the CMakeLists.txt and install the version of
SDL2 that is appropriate to your compiler. In theory, that should be it.

Remember that if you do not already have the SDL2.dll file installed on your
system, it will need to be in the directory with the executable to run properly.
Substitute .so file for .dll if you are building it under Linux or other POSIX system.
