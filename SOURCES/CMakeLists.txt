# Set the minimum required version of CMake.
cmake_minimum_required(VERSION 3.1)

# Specify the project name and version.
project(MyProject VERSION 1.0)

# Enable the languages (CXX/C/OBJC/OBJCXX/Fortran/etc) you want to use.
# Uncomment the following line if you want to use GNU Fortran.
# enable_language(Fortran)

# Set the name of the project (executable).
set(PROJECT_NAME my_executable)

# Add your source files here.
set(SOURCES
    src/main.cpp
    # Add other source files as needed
)

# Create the executable.
add_executable(${PROJECT_NAME} ${SOURCES})

# Specify any additional libraries or dependencies.
# target_link_libraries(${PROJECT_NAME} PRIVATE my_library)

# Set compiler flags or other build options.
# target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)

# Specify include directories.
# target_include_directories(${PROJECT_NAME} PRIVATE include)

# Specify installation rules if needed.
# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
