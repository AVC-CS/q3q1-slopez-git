#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a = 0.0, b = 0.0, c = 0.0;


    double root1, root2;


    cin >> a >> b >> c;


    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) discriminant = 0;

    root1 = (-b + sqrt(discriminant)) / (2 * a);


    root2 = (-b - sqrt(discriminant)) / (2 * a);
    

    if (root2 > root1) {
        swap(root1, root2);
    }

    cout << fixed << setprecision(2) << root1 << " " << root2 << endl; 

    return 0;
}
