#include <string>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int pCount = 0;
    int yCount = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'P' || s[i] == 'p')
            ++pCount;
        else if (s[i] == 'Y' || s[i] == 'y')
            ++yCount;
    }
    
    if (pCount != yCount)
        answer = false;

    return answer;
}
