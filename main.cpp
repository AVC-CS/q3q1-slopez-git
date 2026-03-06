#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    // TODO
    cin >> a >> b >> c;

    // TODO
    double discriminant = b * b - 4 * a * c;
    // TODO
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    // TODO
    double root2 = (-b - sqrt(discriminant)) / (2 * a);

    // TODO
    double larger  = (root1 > root2) ? root1 : root2;
    // TODO
    double smaller = (root1 > root2) ? root2 : root1;

    cout << setprecision(2) << fixed;
    // TODO
    cout << larger << " " << smaller << endl;

    return 0;
}
