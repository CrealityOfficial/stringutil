set(SRCS stringutil/interface.h
		 stringutil/util.h
		 stringutil/filenameutil.h
		 stringutil/impl/util.cpp
		 stringutil/impl/filenameutil.cpp
		 )
set(LIBS)
set(DEFS)

if(BUILD_STRINGUTIL_STATIC)
	__add_real_target(stringutil lib SOURCE ${SRCS}
								LIB ${LIBS}
								DEF ${DEFS}
								INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
								SOURCE_FOLDER
								)
else()
	list(APPEND DEFS STRINGUTIL_DLL)
	__add_real_target(stringutil dll SOURCE ${SRCS}
								LIB ${LIBS}
								DEF ${DEFS}
								INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
								SOURCE_FOLDER
								)
								
	if(INSTALL_STRINGUTIL)
		INSTALL(TARGETS stringutil
				LIBRARY DESTINATION lib
				ARCHIVE DESTINATION .
				RUNTIME DESTINATION bin)
	endif()
endif()

