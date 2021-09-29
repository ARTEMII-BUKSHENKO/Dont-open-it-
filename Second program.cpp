using namespace std;
#include<iostream>;
int main()
{
	int sidea, sideb, perimitor, area;
	int i, j;
	cout « "enter side A" « endl;
	cin » sidea;
	cout « "enter side B" « endl;
	cin » sideb;
	perimitor = 2 * (sidea + sideb);
	cout « "perimitor is " « perimitor « endl;
	area = sidea * sideb;
	cout « "area is " « area « endl;
	for (i = 1; i <= sidea; i++)
	{
		for (j = 1; j <= sideb; j++)
		{
			if (i == 1 || i == sidea || j == 1 || j == sideb)
				cout « "*";
			else
				cout « " ";
		}
		cout « "\n";
	}

	return 0;
}
