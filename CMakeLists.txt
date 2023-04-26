# cmake_minimum_required(VERSION 3.5)
# project(udp_server)

# set(CMAKE_CXX_STANDARD 11)

# # 查找boost库
# set(Boost_NO_BOOST_CMAKE ON)
# set(Boost_USE_STATIC_LIBS OFF)
# set(Boost_USE_MULTITHREADED ON)
# set(Boost_USE_STATIC_RUNTIME OFF)
# find_package(Boost REQUIRED COMPONENTS system)

# # 将头文件和源文件放入一个变量中
# set(SOURCE_FILES
#         main.cpp
#         Server.cpp
#         )

# set(HEADER_FILES
#         Server.h
#         )

# # 添加可执行文件并链接相关库
# add_executable(udp_server ${SOURCE_FILES} ${HEADER_FILES})
# target_link_libraries(udp_server ${Boost_LIBRARIES})

cmake_minimum_required(VERSION 3.0)
project(udp_example)

set(CMAKE_CXX_STANDARD 11)

find_package(Boost REQUIRED COMPONENTS system)

add_executable(udp_example main.cpp)

target_link_libraries(udp_example ${Boost_LIBRARIES} -pthread)