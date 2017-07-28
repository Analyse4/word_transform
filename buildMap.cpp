#include"buildMap.h"

map<string, string> buildMap(ifstream &map_file)
{
	map<string, string> trans_map;
	string key;
	string value;

	while(map_file >> key && getline(map_file, value))
	{
		if (value.size() > 1)
		{
			trans_map[key] = value.substr(1);
		}
		else
			throw runtime_error("no rule for " + key);
	}
	return trans_map;
}

