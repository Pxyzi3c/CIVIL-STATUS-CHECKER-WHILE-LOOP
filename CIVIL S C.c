#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*HARVY JONES PONTILLAS DICT 1-2*/

int main()
{   char fname[15],lname[15], ans;
    int cstatus;

    do{
        p("\n\t\t\t\tCIVIL STATUS CHECKER");
        p("\n\nENTER YOUR NAME: ");
        s("%s %s", &fname,&lname);
        p("SELECT YOUR CIVIL STATUS");
        p("\n1 - SINGLE, 2 - MARRIED, 3 - ANNULED, 4 - SEPARATED, 5 - WIDOW: ");
        s("%d", &cstatus);
        if(cstatus==1)
            p("\nHI, %s %s YOU ARE SINGLE.", fname, lname);
        else if(cstatus==2)
            p("\nHI, %s %s YOU ARE MARRIED.", fname, lname);
        else if(cstatus==3)
            p("\nHI, %s %s YOU ARE ANNULED.", fname, lname);
        else if(cstatus==4)
            p("\nHI, %s %s YOU ARE SEPARATED.", fname, lname);
        else if(cstatus==5)
            p("\nHI, %s %s YOU ARE WIDOW.", fname, lname);
        else
            p("\nINVALID ENTRY!");
        p("\n\n\t DO YOU WANT TO CONTINUE? (TYPE Y OR N): ");
        s("%s", &ans);
    }while(ans=='Y'||ans=='y');
    p("\n\n\t\t\t THANK YOU FOR USING THIS PROGRAM");

    getch();
    return 0;
}
