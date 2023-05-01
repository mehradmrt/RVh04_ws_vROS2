# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vehiclemodel_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vehiclemodel_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vehiclemodel_FOUND FALSE)
  elseif(NOT vehiclemodel_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vehiclemodel_FOUND FALSE)
  endif()
  return()
endif()
set(_vehiclemodel_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vehiclemodel_FIND_QUIETLY)
  message(STATUS "Found vehiclemodel: 2.0.0 (${vehiclemodel_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vehiclemodel' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vehiclemodel_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vehiclemodel_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${vehiclemodel_DIR}/${_extra}")
endforeach()
