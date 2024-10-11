
add_library(chessgamelib interface.cpp board.cpp rules.cpp)

add_executable(chessgame chessgame.cpp)
target_link_libraries(chessgame chessgamelib)

target_include_directories(chessgame PUBLIC ${CMAKE_SOURCE_DIR}/include)
