message(STATUS "Building for MS-DOS with DJGPP with Debian")

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER i586-pc-msdosdjgpp-gcc)
set(EXECUTABLE_NAME "oc_msdos")
set(CMAKE_EXECUTABLE_SUFFIX ".exe")

# Build executable
add_executable(opencraft ${SRC_FILES})
