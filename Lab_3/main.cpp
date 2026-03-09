#include <iostream>
#include "Canvas.h"
#include "Math.h"
int main()
{
    int a = 3, b = 5;
    printf("Add(3, 5): %i\n", Math::Add(a, b));
    printf("Mul(3, 5): %i\n", Math::Mul(a, b));
    int c = 7;
    printf("Add(3, 5, 7): %i\n", Math::Add(a, b, c));
    printf("Mul(3, 5, 7): %i\n", Math::Mul(a, b, c));

    double d_a = 3.453, d_b = 5.583;
    printf("Add(3.453, 5.583): %i\n", Math::Add(d_a, d_b));
    printf("Mul(3.453, 5.583): %i\n", Math::Mul(d_a, d_b));
    double d_c = 7.857;
    printf("Add(3.453, 5.583, 7.857): %i\n", Math::Add(d_a, d_b, d_c));
    printf("Mul(3.453, 5.583, 7.857): %i\n", Math::Mul(d_a, d_b, d_c));

    int nr=7, c_a = 1, c_b = 2, c_c = 3, c_d = 4, c_e = 5, c_f = 6, c_g = 7;
    printf("Add(1, 2, 3, 4, 5, 6, 7): %i\n", Math::Add(nr, c_a, c_b, c_c, c_d, c_e, c_f, c_g));

    const char* da = "pozitiv", * nu = "negativ";
    printf("Add(pozitiv, negativ): %s\n", Math::Add(da, nu));

    Canvas cnv(30, 30);

    cnv.DrawCircle(9, 9, 6, '#');

    cnv.FillCircle(26,6,3,'@');

    cnv.DrawRect(12,27,27,18,'&');

    cnv.FillRect(9,21,24,9,'$');

    cnv.SetPoint(18,3,'H');
        
    cnv.DrawLine(1,1,7,29 ,'Y');

    cnv.Print();
    cnv.Clear();
}