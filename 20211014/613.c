#include <stdio.h>

FILE *in, *out;
int s[2047], max, latmax;

int main ()
{
    in = fopen ("cuburi.in", "r");
    out = fopen ("cuburi.out", "w");
    int n, Ax, Bx, Cx, Ay, By, Cy, Az, Bz, Cz, X[2047], Y[2047], Z[2047];
    fscanf (in, "%d %d %d %d %d %d %d %d %d %d",
            &n, &Ax, &Bx, &Cx, &Ay, &By, &Cy, &Az,
            &Bz, &Cz);
    X[1] = 1; Y[1] = 1; Z[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        X[i] = (X[i]-1*Ax + Bx*i)%Cx;
        Y[i] = (Y[i]-1*Ay + By*i)%Cy;
        Z[i] = (Z[i]-1*Az + Bz*i)%Cz;
        s[i] += X[i] + Y[i] + Z[i];
        if (s[i] > max) 
        {
            max = s[i];
            if (X[i] == Y[i] && X[i] == Z[i])
                latmax = X[i];
        }
    }
    for (int i = 1; i <= n; i++)
//        printf ("|X: %d |Y: %d |Z: %d |", X[i], Y[i], Z[i]);
    fprintf (out, "%d", latmax);
    fclose (in);
    fclose (out);
    return 0;
}
