project (POPBAL)

file(GLOB_RECURSE INCS "include/*.h")
source_group("Header Files" FILES ${INCS})

add_library(popbal
             source/pb_cell.cpp
             source/pb_mechanism.cpp
             source/pb_phase.cpp
             source/pb_process_incep.cpp
             source/pb_process.cpp
             source/pb_solver.cpp
             ${INCS}
           )

include_directories(include 
                    ${Boost_INCLUDE_DIRS}
                   )

#target_link_libraries(other libs here)
