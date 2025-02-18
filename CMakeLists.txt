cmake_minimum_required(VERSION 3.20)
project(guiTest VERSION 1.0)

include(FetchContent)
FetchContent_Declare(cmake_common GIT_REPOSITORY https://gitlab.au.dk/ausa/cmake_common.git)
FetchContent_MakeAvailable(cmake_common)

# Find ROOT package
find_package(AUSALIB REQUIRED)

add_library(guiLib SHARED source/TGMainFrameExample.cpp include/TGMainFrameExample.hh)
target_link_libraries(guiLib PUBLIC AUSA::AUSA ROOT::Gui ROOT::Core)
target_include_directories(guiLib PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
root_generate_dictionary(G__Dict include/TGMainFrameExample.hh MODULE guiLib LINKDEF include/LinkDef.h)

list(APPEND CALIBRATOR_SOURCES TGMainFrameExample.cpp)
list(APPEND CALIBRATOR_HEADERS TGMainFrameExample.hh)
list(TRANSFORM CALIBRATOR_SOURCES PREPEND source/)
list(TRANSFORM CALIBRATOR_HEADERS PREPEND include/)
add_executable(guiTest main.cpp ${CALIBRATOR_SOURCES} ${CALIBRATOR_HEADERS})
target_link_libraries(guiTest PUBLIC AUSA::AUSA ROOT::Gui guiLib)
target_include_directories(guiTest PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

install(TARGETS guiTest #CalibratorGUI
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT lib
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT bin
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT lib)
install(FILES ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}/libguiLib.rootmap ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}/libguiLib_rdict.pcm
        DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} COMPONENT lib)

# Report components to be installed to user
list(APPEND INSTALL_COMPONENTS lib bin)
list(APPEND INSTALL_PATHS ${CMAKE_INSTALL_LIBDIR} ${CMAKE_INSTALL_BINDIR})
print_install_digest("${INSTALL_COMPONENTS}" "${INSTALL_PATHS}") # Custom function

# Package library with CPack
package_project() # Custom function