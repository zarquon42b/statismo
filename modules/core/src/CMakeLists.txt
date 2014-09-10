add_library( statismo-core
  ModelInfo.cxx
)
target_link_libraries( statismo-core ${HDF5_LIBRARIES} )

#generate_export_header( statismo-core
#  EXPORT_MACRO_NAME STATISMO_CORE_EXPORT
#)

set_target_properties( statismo-core PROPERTIES
  DEBUG_POSTFIX "-d"
  VERSION "${statismo_LIB_VERSION}"
  SOVERSION "${statismo_LIB_SOVERSION}"
)

install( TARGETS statismo-core
  EXPORT statismoTargets
  RUNTIME DESTINATION ${INSTALL_BIN_DIR}
  LIBRARY DESTINATION ${INSTALL_LIB_DIR}
  ARCHIVE DESTINATION ${INSTALL_LIB_DIR}
)

#install( FILES ${CMAKE_CURRENT_BINARY_DIR}/statismo-core-export.h
#  DESTINATION ${INSTALL_INCLUDE_DIR}/statismo/core
#)
