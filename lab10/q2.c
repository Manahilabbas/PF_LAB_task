/*Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary.*/
#include<stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    int x1,x2,y1,y2;
    struct point p;
    printf("enter the lowwer point of rectangular boundry on y axis:");
    scanf("%d",&y1);
    printf("enter the upper point of rectangular boundry on y axis:");
    scanf("%d",&y2);
    printf("enter the left point of rectangular boundry on x axis:");
    scanf("%d",&x1);
    printf("enter the right point of rectangular boundry on x axis:");
    scanf("%d",&x2);
    printf("enter the point (x,y)");
    scanf("%d %d",&p.x ,&p.y);
    if(p.x>x1&&p.x<x2){
        if(p.y>y1&&p.y<y2)
        printf("point lies within the rectangular boundry");
        else 
    printf("point does not lies in the boundry");
    }
    else 
    printf("point does not lies in the boundry");
    return 0;
}