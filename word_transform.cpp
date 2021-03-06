#include"word_transform.h"

void word_transform(ifstream &map_file, ifstream &input)
{
	auto trans_map = buildMap(map_file);
	string text;
	ofstream out("outfile.txt"); //touch a file named outfile.txt to save transitived text

	while (getline(input, text))
	{
		istringstream stream1(text);
		string word;
   		bool firstword = true;

		while(stream1 >> word)
		{
			if (firstword)
			{
				firstword = false;
			}
			else
			{
				out << " ";
			}

			out << transform(word, trans_map);
		}
		out << endl;
	}
	out.close();
}

