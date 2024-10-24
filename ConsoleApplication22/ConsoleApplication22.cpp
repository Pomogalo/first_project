#include <iostream>
#include <string>
using namespace std;

const double pi = 3.14;
class square
{
private:
    double r;
    double p;
    double res;
public:
    square(double r)
    {
        this->r = r;
        this->p = pi;
        this->res = res;
    }
    double dlina() {
        res = 0;
        res = (r * 2) * p;
        return res;
    }
    double ploshad() {
        res = 0;
        res = p * (r * r);
        return res;
    }
};

int main()
{
    square sq12n{5.5};
    cout << sq12n.ploshad();
    cout << "\n" << sq12n.dlina();
}