# include <stdio.h>
void main()
{
    int Pressure=32, Volume=2;
    float Temp;
    printf("\nEnter The Room Temmperature...");
    scanf("%f", &Temp);
    Temp+=460;
    Temp*=0.37;
    float m=(Pressure*Volume)/Temp;
    printf("\nThe mass of air in the automobile tire is...%f\n", m);
}
