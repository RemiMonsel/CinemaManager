cmake_minimum_required(VERSION 3.10)    # Minimal Version required for CMake
project(CinemaManagement)               # Project name

# Choose C++ version
set(CMAKE_CXX_STANDARD 17)              # Use STD C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # Make required the standard C++

# Add inclusion directories
include_directories(include)            # Header folder

# Add executable
add_executable(cinemaApp src/main.cpp)  # Name of the executable

# Add source files
target_sources(cinemaApp PRIVATE
    src/cinema/Film.cpp                 # Add Film class as a source file
)
target_sources(cinemaApp PRIVATE
    src/cinema/Room.cpp                 # Add Room class as a source file
)