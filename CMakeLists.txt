cmake_minimum_required(VERSION 3.16)
project(gas_build_system)
set(CXX_STANDARD 17)
if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()
# aux_source_directory(src/main/cpp/ gbs_sources)
aux_source_directory(src/main/cpp/gas gbs_sources)
aux_source_directory(src/main/cpp/gas/bs gbs_sources)
add_executable(gbs src/main/cpp/main.cpp ${gbs_sources})
target_link_libraries(gbs core)
target_include_directories(core PUBLIC src/main/cpp)
# target_include_directories(test PUBLIC src/test/cpp)
# target_link_libraries(test core Shlwapi)

