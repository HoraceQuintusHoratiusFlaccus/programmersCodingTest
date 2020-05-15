#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    map<string, int> partInfo;
    
    for (string name : participant)
        partInfo[name] = 0;
    
    for (string name : participant)
        partInfo[name] += 1;
    
    for (string name : completion)
        partInfo[name] -= 1;
    
    for (auto i = partInfo.begin(); i != partInfo.end(); ++i)
        if (i -> second)
            return i -> first;
}
