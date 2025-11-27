#include <stdio.h>
#include <math.h>

int main() {
    double S = 3600.0;
    double chieu_rong_moi, chieu_dai_moi;
    double chieu_rong_cu, chieu_dai_cu;
    double chu_vi;
    double a = 1, b = 20, c = -2400;
    double delta = b*b - 4*a*c;
    double x1 = (-b + sqrt(delta)) / (2*a);
    double x2 = (-b - sqrt(delta)) / (2*a);
    if (x1 > 0 && (3600/x1 - 30) > 0) {
        chieu_rong_cu = x1;
    } else {
        chieu_rong_cu = x2;
    }
    chieu_dai_cu = 3600 / chieu_rong_cu;
    chu_vi = 2 * (chieu_rong_cu + chieu_dai_cu);
    printf("%.2f\n", chu_vi);
    return 0;
}