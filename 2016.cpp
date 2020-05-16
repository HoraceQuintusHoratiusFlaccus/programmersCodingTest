#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    b -= 1;
    
    if (a > 1)
    {
        b += 31;
        if (a > 2)  { b += 29; }
        if (a > 3)  { b += 31; }
        if (a > 4)  { b += 30; }
        if (a > 5)  { b += 31; }
        if (a > 6)  { b += 30; }
        if (a > 7)  { b += 31; }
        if (a > 8)  { b += 31; }
        if (a > 9)  { b += 30; }
        if (a > 10) { b += 31; }
        if (a > 11) { b += 30; }
    }
    
    answer = day[b % 7];
    
    return answer;
}
