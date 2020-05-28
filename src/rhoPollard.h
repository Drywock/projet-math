#ifndef RHOPOLLARD
#define RHOPOLLARD

#include <vector>

class rhoPollard
{
public:
    static void factorize(int n);
    static int getDivisor(int n);
    static void showFactors();

    static std::vector<int> getFactors(int n);

private:
    static std::vector<int> factors;

};




#endif