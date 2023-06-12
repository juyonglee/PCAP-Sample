cmake_minimum_required(VERSION 3.25)
project(PCAP_Sample)

set(CMAKE_CXX_STANDARD 17)

add_executable(PCAP_Sample main.cpp)

# -l -- include library found in search path
target_link_libraries(PCAP_Sample pcap)