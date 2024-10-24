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
    void printAllData()
    {
        cout << "Длина круга = " << getDlina() << endl;
        cout << "Площадь круга = " << getPloshad();
    }
};
int main()
{
    setlocale(0, "");

    float rad;
    // Комментарий
    cout << "Здравствуйте, введите пожалуйста радиус:";
    cin >> rad;

    circle circleClass{ rad };
    circleClass.printAllData();
    
}

