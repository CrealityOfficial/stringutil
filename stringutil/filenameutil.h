#ifndef STRINGUTIL_FILENAMEUTIL_1630743680041_H
#define STRINGUTIL_FILENAMEUTIL_1630743680041_H
#include "stringutil/interface.h"
#include <string>
#include <cstdio>

#ifdef _MSC_VER
# ifndef strcasecmp
#  define strcasecmp _stricmp
# endif
# ifndef strncasecmp
#  define strncasecmp _strnicmp
# endif
# ifndef strdup
#  define strdup _strdup
# endif
#endif

#define GET_LINE() do { if (!fgets(buf, 1024, f)) return false; } while (0)
#define GET_WORD() do { if (fscanf(f, " %1023s", buf) != 1) return false; } while (0)
#define COND_READ(cond, where, len) do { if ((cond) && !fread((void *)&(where), (len), 1, f)) return false; } while (0)
#define FPRINTF(...) do { if (fprintf(__VA_ARGS__) < 0) return false; } while (0)
#define FWRITE(ptr, size, nmemb, stream) do { if (fwrite((ptr), (size), (nmemb), (stream)) != (nmemb)) return false; } while (0)

namespace stringutil
{
	/*»ñÈ¡ºó×º*/
	STRINGUTIL_API std::string extensionFromFileName(const std::string& fileName, bool lowerCase = false);
	STRINGUTIL_API bool begins_with(const char* s1, const char* s2);

	STRINGUTIL_API void skip_comments(FILE* f);
}

#define LINE_IS(text) stringutil::begins_with(buf, text)
#endif // STRINGUTIL_FILENAMEUTIL_1630743680041_H