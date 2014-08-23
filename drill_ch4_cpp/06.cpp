#include <iostream>
#include <vector>
 
bool input(double &smaller, double &larger)
{
        std::cin >> smaller;
        if (!std::cin) { // 数値に変換できないものが来たら
                return false;
        }
        std::cin  >> larger;
        if (smaller > larger) {
                std::swap(smaller, larger);
        }
        return true;
}
void input(const double smaller, const double larger, std::vector<double> &nums)
{
        nums.push_back(smaller);
        nums.push_back(larger);
        std::sort(nums.begin(), nums.end());
}
 
void print(const double smaller, const double larger, const std::vector<double> nums)
{
        if (smaller != larger) {
                if (larger - smaller < 1.0/10000000) {
                        std::cout << "the numbers are almost equal." << std::endl;
                }
                else {
                        std::cout << "the smaller value is: " << smaller << (smaller == *(nums.begin()) ? " <- the smallest so far" : "") << '\n'
                                  << "the laeger  value is: " << larger  << (larger  == *(nums.end()-1) ? " <- the largest  so far" : "") << std::endl;
                }
        } 
        else {
                std::cout << "the numbers are equal." << std::endl;
        }
}
 
int main()
{
        std::vector<double> nums;
        while (true)
        {
                double  smaller, larger;
                if (!input(smaller, larger)) break;
                input(smaller, larger, nums);
                print(smaller, larger, nums);
        }
}