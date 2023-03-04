#include <iostream>
#include <cmath>
using namespace std;

struct point
{
    int x, y, z;
};

double length(point a, point b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

int main()
{
    point circle, a[10];
    double r;
    int n;
    cout << "enter center coordinate: " << endl;
    cin >> circle.x >> circle.y >> circle.z;
    cout << "enter radius: " << endl;
    cin >> r;
    cout << "enter number of points: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter coordinate of point number " << i << endl;
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    int k = 0;
    for (int i = 0; i < n; i++)
        if (length(circle, a[i]) == r)
            k++;
    cout << "number of point on circle " << k;
    return 0;
}
