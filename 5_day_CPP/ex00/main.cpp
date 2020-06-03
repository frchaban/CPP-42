
# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* winner = new Bureaucrat("Winner", 2);
    Bureaucrat* loser = new Bureaucrat("Loser", 149);

    std::cout << *winner;
    winner->incGrade();
    std::cout << winner->getName() << " upgraded ! Felicitation! " << std::endl;
    std::cout << *winner;
    winner->incGrade();
    std::cout << *winner;

    std::cout << *loser;
    loser->decGrade();
    std::cout << loser->getName() << " downgraded ! That's suck! " << std::endl;
    std::cout << *loser;
    loser->decGrade();
	std::cout << *loser;

    Bureaucrat* toHigh;
    Bureaucrat* toLow;

    // Test ToHigh
    try
    {
        toHigh = new Bureaucrat("ToHigh", 0);
        std::cerr << "[+][3] Exception does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[3] Exception : " << e.what() << std::endl;
    }

    try
    {
        toLow = new Bureaucrat("ToLow", 420);
        std::cerr << "[+][4] Exception does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[4] Exception : " << e.what() << std::endl;
    }

    delete winner;
    delete loser;
}
