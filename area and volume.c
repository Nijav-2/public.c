#include<stdio.h>
#include<math.h>
int main()
{
    int shapes;
    float a,b,l,w;
    float d,r,h,choice;
    printf("Enter your choice(1-19):\n");
    scanf("%d",&shapes);
    switch(shapes){
        case 1:printf("Area of square:-\n");
               printf("Enter the value for a:\n");     //area of square
               scanf("%f",&a);
               printf("The area of square is %f\n",a*a);
               break;
        case 2:printf("Area of rectangle:-\n");
               printf("Enter the value for l and w:\n");  //area of rectangle
               scanf("%f",&l);
               scanf("%f",&w);
               printf("The area of rectangle is %f\n",l*w);
               break;
        case 3:printf("Area of triangle:-\n");
               printf("Enter the value for b and h:\n");  //area of triangle
               scanf("%f",&b);
               scanf("%f",&h);
               printf("The area of triangle is %f\n",0.5*b*h);
               break;
        case 4:printf("Area of parallelogram:-\n");
               printf("Enter the value for b and h:\n");   //area of parallelogram
               scanf("%f",&b);
               scanf("%f",&h);
               printf("The area of parallelogram is %f\n",b*h);
               break;
        case 5:printf("Area of rhombus:-\n");
               printf("Enter the value for d:\n");  //area of rhombus
               scanf("%f",&d);
               printf("The area of rhombus is %f\n",0.5*d*d);
               break;
        case 6:printf("Area of trapezium:-\n");
               printf("Enter the value for a , b and h:\n");  //area of trapezium
               scanf("%f",&a);
               scanf("%f",&b);
               scanf("%f",&h);
               printf("The area of trapezium is %f\n",0.5*(a+b)*h);
               break;
        case 7:printf("Area of circle:-\n");  //area of circle
               printf("Enter the value for r:\n");
               scanf("%f",&r);
               printf("The area of circle is %f\n",3.14*r*r);
               break;
        case 8:printf("Area of ellipse:-\n");  //area of ellipse
               printf("Enter the value for a and b:\n");
               scanf("%f",&a);
               scanf("%f",&b);
               printf("The area of ellipse is %f\n",3.14*a*b);
               break;
        case 9:printf("Area of cube:-\n");   //area of cube
               printf("Enter the value for a:\n");
               scanf("%f",&a);
               printf("The area of cube is %f\n",6*a*a);
               break;
        case 10:printf("Area of cuboid:-\n");  //area of cuboid
                printf("Enter the value for l,b and h\n");
                scanf("%f",&l);
                scanf("%f",&b);
                scanf("%f",&h);
                printf("The area of cuboid is %f\n",2*(l*b+b*h+h*l));
                break;
        case 11:printf("Area of sphere:-\n");   //area of sphere
                printf("Enter the value for r:\n");
                scanf("%f",&r);
                printf("The area of sphere is %f\n",4*3.14*r*r);
                break;
        case 12:printf("Area of cylinder:-\n");  //area of cylinder
                printf("Enter the value for h and r\n");
                scanf("%f",&h);
                scanf("%f",&r);
                printf("The area of cylinder is %f\n",2*3.14*r*(h+r));
                break;
        case 13:printf("Area of hemisphere:-\n");  //area of hemisphere
                printf("Enter the value for r:\n");
                scanf("%f",&r);
                printf("The area of hemisphere is %f\n",3*3.14*r*r);
                break;
        case 14:printf("Volume of cube:-\n");  //volume of cube
                printf("Enter the value for a:\n");
                scanf("%f",&a);
                printf("The volume of cube is %f\n",a*a*a);
                break;
        case 15:printf("Volume of cuboid:-\n");  //volume of cuboid
                printf("Enter the value for l,b and h:\n");
                scanf("%f",&l);
                scanf("%f",&b);
                scanf("%f",&h);
                printf("The volume of cuboid is %f\n",l*b*h);
                break;
        case 16:printf("Volume of sphere:-\n");  //volume of sphere
                printf("Enter the value for r:\n");
                scanf("%f",&r);
                printf("The volume of sphere is %f\n",1.33*3.14*r*r*r);
                break;
        case 17:printf("Volume of cylinder:-\n");  //volume of cylinder
                printf("Enter the value for r and h:\n");
                scanf("%f",&r);
                scanf("%f",&h);
                printf("The volume of cylinder is %f\n",3.14*r*r*h);
                break;
        case 18:printf("Volume of cone:-\n");  //volume of cone
                printf("Enter the value for r and h:\n");
                scanf("%f",&r);
                scanf("%f",&h);
                printf("The volume of cone is %f\n",0.33*3.14*r*r*h);
                break;
        case 19:printf("Volume of hemisphere:-\n");  //volume of hemisphere
                printf("Enter the value for r:\n");
                scanf("%f",&r);
                printf("The volume of cone is %f\n",0.67*3.14*r*r*r);
                break;
        }
        return 0;
}
