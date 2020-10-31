#include <iostream>
#include <vector>
#include <string>

int findRepeatNumber(std::vector<int>& nums);
bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target);
std::string replaceSpace(std::string s);

int main()
{
	auto print_vector = [](std::vector<int> nums) 
	{
		for (auto& num : nums)
		{
			std::cout << num << " ";
		}
		std::cout << "\n";
	};

	// findRepeatNumber
	std::vector<int> v1 = { 2, 3, 1, 0, 2, 5, 3 };
	print_vector(v1);
	std::cout << "result: "<< findRepeatNumber(v1) << std::endl;
	std::cout << "\n";


	// findNumberIn2DArray
	std::vector<std::vector<int>> matrix = {
		{1, 4, 7, 11, 15},
		{2, 5, 8, 12, 19},
		{3, 6, 9, 16, 22},
		{10, 13, 14, 17, 24},
		{18, 21, 23, 26, 30}
	};
	for (auto& v : matrix)
	{
		print_vector(v);
	}
	int inputNum = 5;
	std::cout << "input number: " << inputNum << ", result: " << (findNumberIn2DArray(matrix, inputNum) ? "true" : "false") << std::endl;
	std::cout << "\n";
	
	
	// replaceSpace
	std::string s = "We are happy.";
	std::cout << s << std::endl << "result: " << replaceSpace(s) << std::endl;

}