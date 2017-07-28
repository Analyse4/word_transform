#ifndef _BUILDMAP_H_
#define _BUILDMAP_H_

#include<map>
#include<string>
#include<fstream>

using namespace std;

map<string, string> buildMap(ifstream &map_file);

#endif
