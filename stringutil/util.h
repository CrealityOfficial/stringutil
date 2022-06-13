#ifndef STRINGUTIL_UTIL_1630743680042_H
#define STRINGUTIL_UTIL_1630743680042_H
#include "stringutil/interface.h"
#include <string>
#include <vector>
#include<codecvt>

namespace stringutil
{
	/*�ַ���Сд��*/
	STRINGUTIL_API std::string toLowerCase(const std::string& str);
	/*�ַ���ȥ����β�ն�*/
	STRINGUTIL_API std::string trimHeadTail(const std::string& str);
	/*�ַ����ָ�*/
	STRINGUTIL_API std::vector<std::string> splitString(const std::string& str, const std::string& delim = ",");
	STRINGUTIL_API bool str_replace(std::string& strContent, const char* pszOld, const char* pszNew);

	/*���ַ�ת��1*/
	STRINGUTIL_API std::string wstring2string(const std::wstring& wstr);
	/*���ַ�ת��2*/
	STRINGUTIL_API std::string wchar2char(const wchar_t* wp);
}

#endif // STRINGUTIL_UTIL_1630743680042_H