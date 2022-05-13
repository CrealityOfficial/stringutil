#ifndef STRINGUTIL_UTIL_1630743680042_H
#define STRINGUTIL_UTIL_1630743680042_H
#include "stringutil/interface.h"
#include <string>
#include <vector>

namespace stringutil
{
	/*×Ö·û´®Ð¡Ð´»¯*/
	STRINGUTIL_API std::string toLowerCase(const std::string& str);
	/*×Ö·û´®È¥µôÊ×Î²¿Õ¶Î*/
	STRINGUTIL_API std::string trimHeadTail(const std::string& str);
	/*×Ö·û´®·Ö¸î*/
	STRINGUTIL_API std::vector<std::string> splitString(const std::string& str, const std::string& delim = ",");
	STRINGUTIL_API bool str_replace(std::string& strContent, const char* pszOld, const char* pszNew);
}

#endif // STRINGUTIL_UTIL_1630743680042_H