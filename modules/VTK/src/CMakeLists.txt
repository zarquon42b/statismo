add_library( statismo-VTK
  vtkStandardMeshRepresenter.cxx
  vtkUnstructuredGridRepresenter.cxx
)
target_link_libraries( statismo-VTK
  statismo-core
  ${VTK_LIBRARIES}
)

#generate_export_header( statismo-VTK
#  EXPORT_MACRO_NAME STATISMO_VTK_EXPORT
#)

set_target_properties( statismo-VTK PROPERTIES
  DEBUG_POSTFIX "-d"
  VERSION "${statismo_LIB_VERSION}"
  SOVERSION "${statismo_LIB_SOVERSION}"
)

install( TARGETS statismo-VTK
  EXPORT statismoTargets
  RUNTIME DESTINATION ${INSTALL_BIN_DIR}
  LIBRARY DESTINATION ${INSTALL_LIB_DIR}
  ARCHIVE DESTINATION ${INSTALL_LIB_DIR}
)

#install( FILES ${CMAKE_CURRENT_BINARY_DIR}/statismo-VTK-export.h
#DESTINATION ${INSTALL_INCLUDE_DIR}/statismo/VTK
#)
