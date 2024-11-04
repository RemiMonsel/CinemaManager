cmake_minimum_required(VERSION 3.10)  # Version minimale requise de CMake
project(CinemaManagement)               # Nom du projet

# Choisir la version de C++
set(CMAKE_CXX_STANDARD 17)              # Utiliser le standard C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # Rendre le standard C++ requis

# Ajouter les répertoires d'inclusion
include_directories(include)             # Dossier pour les fichiers d'en-tête

# Ajouter un exécutable
add_executable(cinemaApp src/main.cpp)  # Nom de l'exécutable et fichier source principal

# Ajouter les fichiers source
target_sources(cinemaApp PRIVATE
    src/cinema/Film.cpp                   # Fichier source de la classe Film
)