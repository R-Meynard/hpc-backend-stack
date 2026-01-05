cmake_minimum_required(VERSION 3.16)
project(jour_01_raii LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
  "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

if (NOT SOURCES)
  message(WARNING "No .cpp sources found in ${CMAKE_SOURCE_DIR}/src. Please add sources under src/ or adjust the glob.")
else()
  add_executable(${PROJECT_NAME} ${SOURCES})
  target_compile_options(${PROJECT_NAME} PRIVATE -g)
endif()
