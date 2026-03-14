cmake_minimum_required(VERSION 4.1)
project(lab_4 C)

set(CMAKE_C_STANDARD 23)

include(FetchContent)

FetchContent_Declare(
        libprg
        #
        # GIT_REPOSITORY https://github.com/NicolySilvaDeCastro/libprg.git
        # GIT_TAG origin/main
        # or GIT_TAG 0.0.1

        # You can reference a local directory instead
        URL file:///${CMAKE_CURRENT_SOURCE_DIR}/../../libprog
)
FetchContent_MakeAvailable(libprg)

add_executable(lab_4 main.c)