#include "stringutil/filenameutil.h"

namespace stringutil
{
	std::string extensionFromFileName(const std::string& fileName, bool lowerCase)
	{
		return fileName;
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