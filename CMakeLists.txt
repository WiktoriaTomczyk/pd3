cmake_minimum_required(VERSION 3.5)
project(Wiktoria_Tomczyk_pd3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Kat.cpp Kat.h PunktNaZiemi.cpp PunktNaZiemi.h Ksztalt.cpp Ksztalt.h .idea/PunktZWysokoscia.cpp .idea/PunktZWysokoscia.h PunktZWysokoscia.cpp PunktZWysokoscia.h)
add_executable(Wiktoria_Tomczyk_pd3 ${SOURCE_FILES})