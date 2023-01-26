VIP Onboarding Lab 1: CMake & Toolchain

Written Questions:
The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
  -> The paths are relative to the parent directory that holds the CMakeList.txt file.

What some differences between cmake and ninja?
  -> 'ninja' is a specific build system that can produce an executable program. 'cmake' is used to produce other build systems such as 'make' and 'ninja'.

Why is it important to run cmake in its own directory?
  -> Running cmake generates a lot of "random" files that I don't quite understand yet, so running it in its own directory prevents polluting the source code folders.
