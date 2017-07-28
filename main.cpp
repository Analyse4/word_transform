#include<fstream>
#include"word_transform.h"

using namespace std;

int main(int argc, char **argv)
{
	ifstream in1("file1.txt");
	ifstream in2("file2.txt");

	word_transform(in1, in2);

	return 0;
}
