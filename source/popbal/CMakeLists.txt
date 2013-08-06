project (POPBAL)

file(GLOB_RECURSE INCS "include/*.h")
file(GLOB_RECURSE CPPS "source/*.cpp")
source_group("Header Files" FILES ${INCS})

add_library(popbal
             ${CPPS}
             ${INCS}
           )

include_directories(include 
                    ${Boost_INCLUDE_DIRS}
                   )

#target_link_libraries(other libs here)
