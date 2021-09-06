#include "stringutil/util.h"

namespace stringutil
{
	std::string toLowerCase(const std::string& str)
	{
		return str;
	}

	std::string trimHeadTail(const std::string& s)
	{
		std::string str = s;
		size_t n = str.find_last_not_of(" \r\n\t");
		if (n != std::string::npos) {
			str.erase(n + 1, str.size() - n);
		}
		n = str.find_first_not_of(" \r\n\t");
		if (n != std::string::npos) {
			str.erase(0, n);
		}
		return str;
	}

	std::vector<std::string> splitString(const std::string& str, const std::string& delim)
	{
		std::vector<std::string> elems;
		size_t pos = 0;
		size_t len = str.length();
		size_t delim_len = delim.length();
		if (delim_len == 0)
			return elems;
		while (pos < len)
		{
			int find_pos = str.find(delim, pos);
			if (find_pos < 0)
			{
				std::string t = str.substr(pos, len - pos);
				if (!t.empty())
					elems.push_back(t);
				break;
			}

			std::string t = str.substr(pos, find_pos - pos);
			if (!t.empty())
				elems.push_back(t);
			pos = find_pos + delim_len;
		}
		return elems;
	}
}