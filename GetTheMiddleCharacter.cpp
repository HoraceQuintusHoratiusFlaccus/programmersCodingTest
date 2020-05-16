#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int sSize = s.size();
    
    if (sSize % 2)
        answer = s[(sSize - 1) / 2];
    else
    {
        answer = s[(sSize - 1) / 2];
        answer += (s[sSize / 2]);
    }
    
    return answer;
}
