#include <iostream>
#include <string>
#include <chrono>

using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main()
{

    TimePoint start, end;
    Duration elapsedTime;
    std::string input;

    start = Clock::now();

    std::cout << "Type the word \"start\" as quickly as you can: " << std::flush;
    std::cin >> input;
    
    end = Clock::now();

    std::cout << "reaction time: " << (end - start).count()  << " sec" << std::endl;

    std::cout << std::endl << std::endl;

}