#include <bits/stdc++.h>

using namespace std;

double power(float _a){
    return _a*_a;
}


int main()
{
    float x1, y1, x2, y2, x3, y3, p;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;



    double a, b, c;
    a=sqrt(power(x1-x2)+power(y1-y2));
    b=sqrt(power(x2-x3)+power(y2-y3));
    c=sqrt(power(x1-x3)+power(y1-y3));
    p = (a+b+c)/2;


    if((a+b>c) && (a+c>b) && (b+c>a))
        cout << sqrt((p-a)*(p-b)*(p-c)*p);
    else
        cout << "triangle does not exist";
    return 0;
}
