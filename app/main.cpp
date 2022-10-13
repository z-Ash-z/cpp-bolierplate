#include <iostream>
<<<<<<< HEAD
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator{true};
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
=======
#include <lib.hpp>
#include <vector>

int main()
{
    dummy();

    bool condition{true};
    if (condition)
    {
        std::cout << "Hakuna matata" << std::endl;
    }

    std::vector<int> test { 1, 2, 3, 4, 5 };
    test[4] = 0;

>>>>>>> c73d6b794f1bd2b731ea38f46a23ec2e57fa8c1f
    return 0;
}
