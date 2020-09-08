//FUNCTIONS AND THEIR WORK IN THIS PROGRAM

/*
               float calcArea(float);
This function takes radius in float as parameter an returns area of the circle
in float. It also validates if the radius entered for a particular circle is valid
not by calling the function radiusValidation.

               int radiusValidation(float); 
This function takes the radius in float and checks if the radius is valid for a
circle or not. In case of valid radius returns 1 but in case of invalid radius
it returns 0.
*/
//___________________________________________________________________________________________________________


#include<stdio.h>

#define NOFCIRCLE 100 //TO BE USED TO STORE RADIUS AND AREA OF 100 CIRCLES
#define pi 3.142  //defining a constant can be used throughout unless it is undefi-
//ned somewhere in the program
float calcArea(float);
int radiusValidation(float); 
//___________________________________________________________________________________________________________


struct Shape{
    float radius;
    float area;
};

int main(){
    struct Shape Circle[NOFCIRCLE];
    int count = 0;
    printf("Enter the radius of circle: ");
    scanf("%f",&Circle[count].radius);
    while(Circle[count].radius && count < NOFCIRCLE){
        Circle[count].area= calcArea(Circle[count].radius);
        printf("\nArea of the circle with specified radius is: %f",Circle[count].area);
        printf("\nEnter 0 when no circles are left\nEnter the radius of the circle whose area is to be calculated: ");
        scanf("%f", &Circle[count+1].radius);//Reading radius from standard input
        count++;
    }  
    //printf("Radius of the circle is: %f",Circle[0].radius);
    //Tracking the working of the structure
    printf("\nArea %dth circle is: %f",count-2,Circle[count-2].area);
    return 0;
}


//Definition of function calcArea()
float calcArea(float r){
    if(radiusValidation(r))
    {
        float result;
        result = pi*r*r;
        return result;
    }
    else
    {
        printf("\n!Radius of a circle should be positive!\n");
        return 0;
    }
    
}


//Definition of function radiusValidation()
int radiusValidation(float rad){
    if (rad<0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}