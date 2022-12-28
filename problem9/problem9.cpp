#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> digits ;
	digits.push_back( 1 );
	for( int i=1; i<=1000; i++)
	{
		int carryover = 0;
		for ( vector<int>::iterator iter = digits.begin(); iter != digits.end(); iter++ )
		{
			*iter = *iter * 2 + carryover;
			if ( *iter > 9 && (iter+1) != digits.end() )
			{
				*iter -= 10;
				carryover = 1;
			}
			else if ( *iter > 9 && (iter+1) == digits.end())
			{
				*iter -= 10;
				digits.push_back(1);
				break;
			}
			else if ( *iter <= 9 )
				carryover = 0;
		}
	}

	int sum = 0;

	for ( vector<int>::iterator iter = digits.begin(); iter != digits.end(); iter++ )
		sum += *iter;
	
	cout << sum;

	cin.get();
	return 0;
}