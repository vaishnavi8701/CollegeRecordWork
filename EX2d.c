#include <stdio.h>
int main()
{
    int Pressure=32, Volume=2;
    float Temp=73.4;
    Temp+=460;
    Temp*=0.37;
    float m=(Pressure*Volume)/Temp;
    printf("\nThe mass of air in the automobile tire is...%f\n", m);
    return 0;
}
