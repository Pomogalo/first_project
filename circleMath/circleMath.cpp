#include <iostream>

using namespace std;
#define PI 3.14
class circle
{
    float radius;
public:
    circle(float& data) {
        this->radius = data;
    }

    float getDlina()
    {
        return 2 * PI * this->radius;
    }

    float getPloshad()
    {
        return PI * (this->radius * this->radius);
    }
};
int main()
{
    setlocale(0, "");

    float rad;

    cout << "Здравствуйте, введите пожалуйста радиус:";
    cin >> rad;

    circle circleClass{ rad };

    cout << "Длина круга = "<< circleClass.getDlina() << endl;
    cout << "Площадь круга = " << circleClass.getPloshad();
}

