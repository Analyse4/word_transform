#include"transform.h"

const string &transform(const string &word, const map<string, string> &m)
{
	auto map_it = m.find(word);

	if (map_it != m.end())
	{
		return map_it->second;
	}
	else
		return word;
}

