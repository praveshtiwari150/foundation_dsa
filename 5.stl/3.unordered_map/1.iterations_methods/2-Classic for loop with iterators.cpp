#include <iostream>
#include <map>

using namespace std;

int main()
{
    // Create a map of int to string
    map<int, string> exampleMap = {
        {1, "one"},
        {2, "two"},
        {3, "three"}};

    // Iterate over the map using an iterator with auto
    for (auto it = exampleMap.begin(); it != exampleMap.end(); ++it)
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    return 0;
}
