#include <iostream>
#include <string>

using namespace std;

bool static IsKPeriodic(const string& s, int K)
{
    if (K <= 0 || s.empty())
        return false;

    int n = s.size();
    if (n % K != 0)
        return false;

    for (int i = K; i < n; ++i)
    {
        if (s[i] != s[i % K])
            return false;
    }

    return true;
}

int main() {

	string a = "abcabcabc";

    cout << "s1 (K=1): " << IsKPeriodic(a, 1) << std::endl;
    cout << "s2 (K=2): " << IsKPeriodic(a, 2) << std::endl;
    cout << "s3 (K=3): " << IsKPeriodic(a, 3) << std::endl;

	return 0;
}