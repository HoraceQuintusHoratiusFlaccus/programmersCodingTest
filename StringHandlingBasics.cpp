#include <string>

using namespace std;

bool solution(string s) {
    int sSize = s.size();
    
    if (sSize == 4 || sSize == 6)
    {
        for (int i = 0; i < sSize; ++i)
            if (!isdigit(s[i]))
                return false;
        
        return true;
    }
    else
        return false;
}
