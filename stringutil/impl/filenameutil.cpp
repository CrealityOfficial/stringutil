#include "stringutil/filenameutil.h"
#include <cstring>
#include"stringutil/util.h"

namespace stringutil
{
	std::string extensionFromFileName(const std::string& fileName, bool lowerCase)
	{
		std::string fileType = fileName;
		int pos = fileName.find_last_of(".");
		if (pos > 0 && pos < fileType.length()-1)
		{
			fileType = fileType.substr(pos + 1, fileType.length() - pos);
		}
		if (lowerCase)
		{
			fileType = toLowerCase(fileType);
		}
		return fileType;
	}

	bool begins_with(const char* s1, const char* s2)
	{
		using namespace ::std;
		return !strncasecmp(s1, s2, strlen(s2));
	}

	// Skip comments in an ASCII file (lines beginning with #)
	void skip_comments(FILE* f)
	{
		int c;
		bool in_comment = false;
		while (1) {
			c = fgetc(f);
			if (c == EOF)
				return;
			if (in_comment) {
				if (c == '\n')
					in_comment = false;
			}
			else if (c == '#') {
				in_comment = true;
			}
			else if (!isspace(c)) {
				break;
			}
		}
		ungetc(c, f);
	}
}