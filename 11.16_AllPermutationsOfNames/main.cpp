#include <iostream>
#include <vector>

using std::vector, std::string, std::cout;


void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList)
{
    // Base case:
    // All elements of nameList were moved into permList, so print the permList
    if (nameList.empty())
    {
        for (const string& s : permList)
        {
            cout << s;
            cout << ((permList.back() != s) ? ", " : "");   // Print ", " if not last element of list
        }
        cout << '\n';
    }
    else
    {
        // Recursive case:
        // Move an element of nameList into the back of permList (a different one every time).
        // This causes every possible combination of elements in nameList to be printed when it reaches the base case.
        for (int i = 0; i < nameList.size(); ++i)
        {
            string temp = nameList.at(i);
            vector<string> tempPerms(permList);     // make copy of lists
            vector<string> tempNames(nameList);

            // Move element i of tempNames into tempPerms:
            tempNames.erase(tempNames.begin() + i);
            tempPerms.push_back(temp);

            PrintAllPermutations(tempPerms, tempNames);

            // Move element i back into tempNames:
            tempPerms.pop_back();
            tempNames.insert(tempNames.begin() + i, temp);
        }
    }

}


int main()
{
    vector<string> nameList;
    vector<string> permList;
    string name;

    // Get user input:
    std::cin >> name;
    while (name != "-1")
    {
        nameList.push_back(name);
        std::cin >> name;
    }

    // Send permList in empty and nameList in full
    PrintAllPermutations(permList, nameList);

    return 0;
}
