#include <stdio.h>
double add(double x,double y,double z)
{
    double sum=x+y+z;
    return sum;
}
int lp(int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%d  ",i+1);
    }
    printf("\n");
}
int main()
{
    int cmarks[100],pmarks[100],amarks[100],fmarks[100];
    int i,n,c[100];
    double tmarks[100],a;
    char name[50][50];
    printf("\t\t \tNOAKHALI SCIENCE AND TECNOLOGY UNIVERSITY\n\t\t\t Welcome to CGPA calculating Board\n\n\nHOW MANY STUDENT ON THE BATCH?\t\t");
    scanf("%d",&n);
    printf("NUMBER OF STUDENT\t\t %d\n\nNow Give Input According To Roll No.\n\n",n);
    printf("If any seat is empty then enter 0 for that student\nNOTE:\t use space to take input and use enter to get output and take new input.\n\n");
    printf("Plz Enter names of student\n\n");
    for(i=0; i<n; i++)
    {
        scanf(" %[^\n]",name[i]);
    }
    printf("\nEnter CT marks\n");
    lp(n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&cmarks[i]);

    }
    printf("\nEnter Presentation Mark\n");
    lp(n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&pmarks[i]);
    }
    printf("\nEnter Assignment marks\n");
    lp(n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&amarks[i]);
    }
    printf("\nEnter Final marks\n");
    lp(n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&fmarks[i]);
    }
    for(i=0; i<n; i++)
    {
        c[i]=add(cmarks[i],pmarks[i],amarks[i]);
    }
    for(i = 0; i < n; i++)
    {
        tmarks[i] = ((c[i]*1.0)/ 3)+fmarks[i];
    }
    for(i = 0; i < n; i++)
    {
        if(tmarks[i]>=80&&tmarks[i]<100)
        {
            a=4;
        }
        else if(tmarks[i]>=75&&tmarks[i]<80)
        {
            a=3.75;
        }
        else if(tmarks[i]>=70&&tmarks[i]<75)
        {
            a=3.50;
        }
        else if(tmarks[i]>=65&&tmarks[i]<70)
        {
            a=3.25;
        }
        else if(tmarks[i]>=60&&tmarks[i]<65)
        {
            a=3.00;
        }
        else if(tmarks[i]>=55&&tmarks[i]<60)
        {
            a=2.75;
        }
        else if(tmarks[i]>=50&&tmarks[i]<55)
        {
            a=2.50;
        }
        else if(tmarks[i]>=45&&tmarks[i]<50)
        {
            a=2.25;
        }
        else if(tmarks[i]>=40&&tmarks[i]<45)
        {
            a=2.00;
        }
        else if(tmarks[i]<40)
        {
            a=0.00;
        }
        printf("Roll NO: %d\tNAME: %s\tTotal Marks: %0.2lf \t CGPA=%.2lf\n", i+1,name[i], tmarks[i],a);
    }
    return 0;
}
