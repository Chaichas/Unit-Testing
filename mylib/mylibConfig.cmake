#Config File
#Reference: https://stackoverflow.com/questions/20746936/what-use-is-find-package-when-you-need-to-specify-cmake-module-path?fbclid=IwAR0y0Gv29AF7x38bPNgm6SDN8Ik40C41ra_TDsmKobsm8zRySTY_91eyIeA#20857070

add_library(mylib STATIC IMPORTED)
find_library(mylib_LIBRARY_PATH mylib HINTS "${CMAKE_CURRENT_LIST_DIR}/../")
set_target_properties(mylib PROPERTIES IMPORTED_LOCATION "${mylib_LIBRARY_PATH}")

#By default project installed in CMAKE_INSTALL_PREFIX directory:
#Library installation commands:
#cmake -H. -B_builds
#sudo  cmake --build _builds --target install
