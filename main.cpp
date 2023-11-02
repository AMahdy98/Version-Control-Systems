#include <iostream>
#include <vector>

int getSum(std::vector<int> numbers)
{
    int sum = 0;
    for (auto num : numbers)
    {
        sum += num;
    }
    return sum;
}

int main()
{

    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << getSum(nums) << std::endl;

    return 0;
}