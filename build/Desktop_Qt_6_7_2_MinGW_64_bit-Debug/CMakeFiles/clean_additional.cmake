# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\edytor_testo_Qlayout_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\edytor_testo_Qlayout_autogen.dir\\ParseCache.txt"
  "edytor_testo_Qlayout_autogen"
  )
endif()
