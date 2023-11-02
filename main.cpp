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

float getAverage(std::vector<int> numbers)
{
    float average = 0;
    for (auto num : numbers)
    {
        average += num;
    }
    return average / numbers.size();
}
    
int getMin(std::vector<int> numbers)
{
    int min = numbers[0];
    for (auto num : numbers)
    {
        min = min > num ? num : min;
    }
    return min;
}

int main()
{

    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Sum: " << getSum(nums) << std::endl;
    std::cout << "Average: " << getAverage(nums) << std::endl;
    std::cout << "Min: " << getMin(nums) << std::endl;

    return 0;
}