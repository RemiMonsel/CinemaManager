cmake_minimum_required(VERSION 3.10)    # Minimal Version required for CMake
project(CinemaManagement)               # Project name

# Choose C++ version
set(CMAKE_CXX_STANDARD 17)              # Use STD C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # Make required the standard C++

# Add inclusion directories
include_directories(include)            # Header folder

add_library(commonLibrary commonLibrary/GenericLib.cpp)

# Add executable
add_executable(CinemaManagement src/main.cpp src/cinema/Film.cpp src/cinema/Room.cpp src/cinema/Client.cpp src/cinema/Ticket.cpp) # Add main and classes files

target_link_libraries(CinemaManagement commonLibrary)    # Executable link for GenericLib library