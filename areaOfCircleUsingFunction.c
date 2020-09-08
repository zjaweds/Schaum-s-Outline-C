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


//----------------------------------------------------------------------------------
/*
Following is the section of this program, written to calculate specified no of
Circles with specified radius.
Prerequisites are no of circles and their corresponding radius
||||
vvvv*/

/*
int main(){
    float radius;
    int nOfCircles;

    printf("Here you can calculate area of circle with any radius.\n");
    printf("How many circles are there ?: ");
    scanf("%d",&nOfCircles);
    if(nOfCircles<0){
        printf("\n!Enter valid no of circles!\n");
        printf("How many circles are there ?: ");
        scanf("%d",&nOfCircles);
    }
    for(int iteration=0; iteration<nOfCircles; iteration++){
        printf("\nEnter the radius of the circle whose area is to be calculated: ");
        scanf("%f", &radius);//Reading radius from standard input
        //Directly printing the calculated area without storing result to any other variable
        printf("\nArea of the %dth circle with specified radius is: %f",iteration + 1,calcArea(radius));
    }
    return 0;
}
*/

/*
^^^^^
|||||   Preceding is the section of this program, written to calculate specified no of
Circles with specified radius.
Prerequisites are no of circles and their corresponding radius
*/
//----------------------------------------------------------------------------------

//----------------------------------------------------------------------------------
/*
Following is the section of this program, written to calculate unspecified no of
Circles with specified radius.
Prerequisites is the radius of circles.
When no more circles are there then enter radius of the circle as 0 (Zero).
||||
vvvv*/


/*

This task can be completed using for loop also by putting radius != 0 in coditional -
expression of for loop

int main(){
    float radius;
    printf("Enter 0 when no circles are left\nEnter radius of the circle: ");
    scanf("%f",&radius);
    while(radius){
        //Directly printing the calculated area without storing result to any other variable
        printf("\nArea of the circle with specified radius is: %f",calcArea(radius));
        printf("\nEnter 0 when no circles are left\nEnter the radius of the circle whose area is to be calculated: ");
        scanf("%f", &radius);//Reading radius from standard input
    }
return 0;
}
*/

/*
^^^^^
|||||   Preceding is the section of this program, written to calculate unspecified no of
Circles with specified radius.
Prerequisites is the radius of circles.
When no more circles are there then enter radius of the circle as 0 (Zero).
*/
//---------------------------------------------------------------------------------

//---------------------------------------------------------------------------------
/*
Following is the section of this program, written to calculate unspecified no of
Circles with specified radius. And radius and area are to be stored in arrays
for 100 circles, we can change no of circles by changing the NOFCIRCLE value
from 100 to intended value. 
Prerequisites is the radius of circles.
When no more circles are there then enter radius of the circle as 0 (Zero).
||||
vvvv*/

/*
int main(){
    float radius[NOFCIRCLE],area[NOFCIRCLE];
    int count = 0;
    printf("Enter the radius of the circle: ");
    scanf("%f",radius);
    while(radius[count] && count < NOFCIRCLE){
        area[count]= calcArea(radius[count]);
        printf("\nArea of the circle with specified radius is: %f",area[count]);
        printf("\nEnter 0 when no circles are left\nEnter the radius of the circle whose area is to be calculated: ");
        scanf("%f", &radius[count+1]);//Reading radius from standard input
        count++;
    }
    return 0;
}
*/

/*
^^^^^
|||||   Following is the section of this program, written to calculate unspecified no of
Circles with specified radius. And radius and area are to be stored in arrays
for 100 circles, we can change no of circles by changing the NOFCIRCLE value
from 100 to intended value. 
Prerequisites is the radius of circles.
When no more circles are there then enter radius of the circle as 0 (Zero).
*/
//----------------------------------------------------------------------------------

//----------------------------------------------------------------------------------
/*
Following is the section of this program, written to calculate unspecified no of
Circles with specified radius. And radius and area are to be stored in arrays
for 100 circles, we can change no of circles by changing the NOFCIRCLE value
from 100 to intended value. 
Prerequisites is the radius of circles.
When no more circles are there then enter radius of the circle as 0 (Zero).
||||
vvvv*/

/*
int main(){
    float radius[NOFCIRCLE],area[NOFCIRCLE];
    int count = 0;
    printf("Enter the radius of the circle: ");
    scanf("%f",radius);
    while(radius[count] && count < NOFCIRCLE){
        area[count]= calcArea(radius[count]);
        printf("\nArea of the circle with specified radius is: %f",area[count]);
        printf("\nEnter 0 when no circles are left\nEnter the radius of the circle whose area is to be calculated: ");
        scanf("%f", &radius[count+1]);//Reading radius from standard input
        count++;
    }
    return 0;
}
*/

/*
^^^^^
|||||   Following is the section of this program, written to calculate unspecified no of
Circles with specified radius. And radius and area are to be stored in arrays
for 100 circles, we can change no of circles by changing the NOFCIRCLE value
from 100 to intended value. 
Prerequisites is the radius of circles.
When no more circles are there then enter radius of the circle as 0 (Zero).
*/
//----------------------------------------------------------------------------------

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