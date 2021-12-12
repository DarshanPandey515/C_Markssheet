#include <stdio.h>
int main()
{

    int i, roll, steam;
    float percentage, sum = 0, subject[6];
    char name[20], school[20];

    printf("\nEnter your College name: ");
    gets(school);

    printf("\nEnter your name: ");
    gets(name);

    printf("\nEnter your roll number: ");
    scanf("%d", &roll);

    printf("\nWhat's your steam ?\n1.Science\n2.Management\n-");
    scanf("%d", &steam);

    if (steam == 1)
    {
        printf("\n***************************************************************\nThe Subject code is \n0-Maths\n1-Physics\n2-Chemistry\n3-Nepali\n4-English\n5-Computer\n***************************************************************");
        printf("\n*Note*:enter the marks accourding to suject code as given above.");
    }
    else if (steam == 2)
    {
        printf("\n***************************************************************\nThe Subject code is \n0-Basic Maths \n1-Economics\n2-Accounts\n3-Nepali\n4-English\n5-Finance\n***************************************************************");
        printf("\n*Note*:enter the marks accourding to suject code as given above.");
    }
    else
    {
        printf("Erro!!");
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\nEnter the marks of code number %d subject:", i);
        scanf("%f", &subject[i]);
    }

    sum = subject[0] + subject[1] + subject[2] + subject[3] + subject[4] + subject[5];
    percentage = ((sum / 600) * 100);

    if (steam == 1)
    {
        printf("*************************************************************************************************");
        printf("\nName: %s\nRoll Number: %d", name, roll);
        printf("\nSchool: %s\nSteam: Science", school);
        printf("\n1.Maths = %.2f\n2.Physics = %.2f\n3.Chemistry = %.2f\n4.Nepali = %.2f\n5.English = %.2f\n6.Computer = %.2f", subject[0], subject[1], subject[2], subject[3], subject[4], subject[5]);
        printf("\n**********************************\nTotal Marks = %.2f\npercentage = %.2f %%\n**********************************\n", sum, percentage);
    }

    else if (steam == 2)
    {
        printf("*************************************************************************************************");
        printf("\nName: %s\nRoll Number: %d", name, roll);
        printf("\nSchool: %s\nSteam: Management", school);
        printf("\n1.Basic Maths  = %.2f\n2.Economics = %.2f\n3.Accounts = %.2f\n4.Nepali = %.2f\n5.English = %.2f\n6.Finance = %.2f", subject[0], subject[1], subject[2], subject[3], subject[4], subject[5]);
        printf("\n**********************************\nTotal Marks = %.2f\npercentage = %.2f %%\n**********************************\n", sum, percentage);
    }

    if (percentage > 90)
    {
        printf("Your Grade is A+");
    }
    else if (percentage > 80 && percentage < 90)
    {
        printf("Your Grade is A");
    }
    else if (percentage > 70 && percentage < 80)
    {
        printf("Your Grade is B+");
    }
    else if (percentage > 60 && percentage < 70)
    {
        printf("Your Grade is B");
    }
    else if (percentage > 50 && percentage < 60)
    {
        printf("Your Grade is C+");
    }
    else if (percentage > 40 && percentage < 50)
    {
        printf("Your Grade is C");
    }
    else if (percentage > 30 && percentage < 40)
    {
        printf("Your Grade is D+");
    }
    else if (percentage > 20 && percentage < 30)
    {
        printf("Your Grade is D");
    }
    else if (percentage > 10 && percentage < 20)
    {
        printf("Your Grade is E+");
    }
    else
    {
        printf("Your Grade is E\nPOOR!!!\nStudy Nicely");
    }

    return 0;
}
