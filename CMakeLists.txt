cmake_minimum_required (VERSION 2.6)
project (POPBALSUITE)

find_package(Boost 1.53.0 REQUIRED COMPONENTS program_options)
SET(Boost_USE_STATIC_LIBS TRUE)

# Turn off line breaks in error messages so that IDEs can parse the errors properly
IF(CMAKE_COMPILER_IS_GNUCC)
  SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fmessage-length=0")
ENDIF(CMAKE_COMPILER_IS_GNUCC)
IF(CMAKE_COMPILER_IS_GNUCXX)
  # Add -pg to the compile and link flags to enable profiling
  SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
  SET(CMAKE_LINK_FLAGS_DEBUG "${CMAKE_LINK_FLAGS_DEBUG}")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fmessage-length=0")
ENDIF(CMAKE_COMPILER_IS_GNUCXX)

SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

enable_testing()

# The main executable
add_executable(popbal-app ${POPBALSUITE_SOURCE_DIR}/apps/popbal.cpp)
target_link_libraries(popbal-app popbal ${Boost_LIBRARIES})

# Add the source directories
add_subdirectory(${POPBALSUITE_SOURCE_DIR}/source/popbal)

include_directories(${Boost_INCLUDE_DIRS}
                    ${POPBALSUITE_SOURCE_DIR}/source/popbal/include
                   )
