set(SRCS stringutil/interface.h
		 stringutil/util.h
		 stringutil/filenameutil.h
		 stringutil/impl/util.cpp
		 stringutil/impl/filenameutil.cpp
		 )
set(LIBS)

__add_common_library(stringutil)

if(CC_INSTALL_STRINGUTIL)
	__install_directory_specif(${CMAKE_CURRENT_SOURCE_DIR}/ stringutil)
endif()

