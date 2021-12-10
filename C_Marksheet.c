#include <stdio.h>
int main()
{
    
    int i, roll; /*created variable for loop and std roll number*/
    float percentage, sum = 0, subject[6]; /* Created variable for total percentage , total marks and input of subject */
    char name[20], str[20]; /* for string input*/


    // take input of name , roll and school name //

    printf("Enter your name: ");
    gets(name);

    printf("Enter your school name: ");
    gets(str);

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    // printing subject code //

    printf("\n***************************************************************\nThe Subject code is \n0-Maths\n1-Physics\n2-Chemistry\n3-Nepali\n4-English\n5-Computer\n***************************************************************");
    printf("\n*Note*:enter the marks accourding to suject code as given above.");
    // taking input of marks //
    for (int i = 0; i < 6; i++)
    {
        printf("\nEnter the marks of code number %d subject:", i);
        scanf("%f", &subject[i]);
    }

    sum = subject[0] + subject[1] + subject[2] + subject[3] + subject[4] + subject[5]; /* sum of total marks */

    percentage = ((sum / 600 ) * 100); /* Total percentage */
    printf("*************************************************************************************************");
    printf("\nName: %s\nRoll Number: %d", name, roll);
    printf("\nSchool: %s", str);
    printf("\n1.Maths = %.2f\n2.Physics = %.2f\n3.Chemistry = %.2f\n4.Nepali = %.2f\n5.English = %.2f\n6.Computer = %.2f", subject[0], subject[1], subject[2], subject[3], subject[4], subject[5]);
    printf("\n**********************************\nTotal Marks = %.2f\npercentage = %.2f %%\n**********************************\n",sum,percentage);
    if (percentage>90)
    {
        printf("Your Grade is A+");
    }
    else if(percentage>80 && percentage<90)
    {
        printf("Your Grade is A");
    }
    else if(percentage>70 && percentage<80)
    {
        printf("Your Grade is B+");
    }
    else if(percentage>60 && percentage<70)
    {
        printf("Your Grade is B");

    }
    else if(percentage>50 && percentage<60)
    {
        printf("Your Grade is C+");

    }
    else if(percentage>40 && percentage<50)
    {
        printf("Your Grade is C");

    }
    else if(percentage>30 && percentage<40) 
    {
        printf("Your Grade is D+");

    }
    else if(percentage>20 && percentage<30) 
    {
        printf("Your Grade is D");

    }
    else if(percentage>10 && percentage<20) 
    {
        printf("Your Grade is E+");

    }
    else{
        printf("POOR!!!\nStudy Nicely");
    }


    
    return 0;
}