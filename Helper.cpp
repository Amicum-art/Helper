#include <iostream>
#include "Helper.h"
#include <string>


int main()
{
	std::string result = std::to_string(pow_double(132.647));
	std::cout << result << ' ' << result.length() << ' ' << result[0] 
			<< ' ' << result[result.length()-1] << std::endl;

	return 0;
}
