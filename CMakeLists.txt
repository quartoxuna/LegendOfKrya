cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME "LegendOfKrya")
set(VERSION_NUMBER "0.1.0")

# Define Project
project(
    ${PROJECT_NAME}
    VERSION ${VERSION_NUMBER}
    DESCRIPTION "A game duh"
    LANGUAGES CXX
)

# SFML Library
find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

# Add subdirectories
add_subdirectory(src/engine)

# Add main executable
add_executable(
    ${PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    LINK_PUBLIC engine
    sfml-system sfml-window sfml-graphics
)

# Define Compile Features
target_compile_features(
    ${PROJECT_NAME}
    PRIVATE
    cxx_std_11
)
