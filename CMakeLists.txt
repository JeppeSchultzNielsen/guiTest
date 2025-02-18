cmake_minimum_required(VERSION 3.20)
project(guiTest)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(cmake_common GIT_REPOSITORY https://gitlab.au.dk/ausa/cmake_common.git)
FetchContent_MakeAvailable(cmake_common)

# Find ROOT package
find_package(AUSALIB REQUIRED)

add_library(guiLib SHARED TGMainFrameExample.cpp TGMainFrameExample.hh)
target_link_libraries(guiLib PUBLIC ROOT::Core ROOT::Gui)
target_include_directories(guiLib PUBLIC ${CMAKE_SOURCE_DIR})
root_generate_dictionary(G__Dict ${CMAKE_SOURCE_DIR}/TGMainFrameExample.hh MODULE guiLib LINKDEF LinkDef.h)


add_executable(guiTest main.cpp TGMainFrameExample.hh G__Dict.cxx TGMainFrameExample.cpp)
target_link_libraries(guiTest PUBLIC ROOT::Core ROOT::Gui ROOT::Graf AUSA::AUSA)

install(TARGETS guiTest #CalibratorGUI
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT lib
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT bin
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT lib)