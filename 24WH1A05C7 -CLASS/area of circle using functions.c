#include<stdio.h>
float areacircle(float);
int main()
{
float π=3.14,area;
int r=3;
area = areacircle(r);
printf("%2f",area);
    return 0;
}
float areacircle(float){
float π=3.14,area,r=3;
area = 3.14*r*r;
return area;

}