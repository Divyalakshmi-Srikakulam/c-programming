Include<stdio.h>
int main ()
{
float f,c;
printf ("enter the temperature in celsius:");
scanf("%f",&c);
f=9*c/5+32;
printf("temperature in fahrenheit : %. 2f\n", f);
return 0;
}
