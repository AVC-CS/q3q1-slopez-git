#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    double root1 = (-b + sqrt(discriminant)) / (2 * a);


    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    

    if (root2 > root1) swap(root1, root2);


    cout << setprecision(2) << fixed;
    cout << root1 << " " << root2 << endl;
        return 0;
}
