#include <iostream>
#include <map>

int main()
{
    // Create a map of int to string
    std::map<int, std::string> exampleMap = {
        {1, "one"},
        {2, "two"},
        {3, "three"}};

    // Iterate over the map using a range-based for loop
    for (const auto &pair : exampleMap)
    {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
