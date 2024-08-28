#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac < 2 )
            throw (": Enter args");
        std::vector<int> Vec;
        std::deque<int> Deq;
        double vectorSortingTime;
        double dequeSortingTime;
        int number;
        for (int index = 1; index < ac; index++)
        {
            std::stringstream readstring(av[index]);
            if (!(readstring >> number) || !(readstring.eof()))
                throw ("");
            if (number < 0)
                throw (": Negative number !");
            Vec.push_back(number);
            Deq.push_back(number); 
        }


        std::cout << std::endl;
        print(Vec, Deq);
        calculateTime(Vec, Deq , vectorSortingTime, dequeSortingTime);
        print(Vec, Deq);
        std::cout << std::endl << "Time to process a range of " <<  ac - 1 <<  " elements with std::vector : " << vectorSortingTime << " us" << std::endl;
        std::cout << "Time to process a range of " <<  ac - 1 <<  " elements with std::deque :  " << dequeSortingTime << " us" << std::endl;
    }
    catch(const char *errorMsg)
    {
        std::cout << "Error " << errorMsg << std::endl;
    }
    
}