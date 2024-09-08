# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appcalculate_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appcalculate_autogen.dir\\ParseCache.txt"
  "appcalculate_autogen"
  )
endif()
