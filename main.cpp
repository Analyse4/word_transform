#include<fstream>
#include"word_transform.h"

using namespace std;

int main(int argc, char **argv)
{
	ifstream in1(argv[1]);
	ifstream in2(argv[2]);

	word_transform(in1, in2);

	in1.close();
	in2.close();

	return 0;
}
