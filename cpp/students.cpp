#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
 
#define n 5
 
struct pupil
{
    char name[10];
    int age;
    int height;
    int score;
};
 
static float sr_a, sr_h, sr_s;
 
void print (struct pupil a);
void sred (struct pupil* a);
void srednestat (struct pupil *a);
 
int main()
{
    int i;
    struct pupil class1[5]=
    {
        "Ivanov", 17, 176, 5,
        "Petrov", 18, 167, 4,
        "Sidorov", 18, 171, 5,
        "Nikolaev", 17, 180, 4,
        "Kozlov", 17, 170, 4};
        for (i=0; i<n; i++)
        {
            print(class1[i]);
        }
        sred (class1);
        srednestat(class1);
}
 
void print (struct pupil a)
{
    printf("\n%s \t%d \t%d \t%d \n", a.name, a.age, a.height, a.score);
}
 
void sred (struct pupil* a)
{
    int i;
    for (i=0; i<n; i++)
    {
        sr_a=sr_a+a[i].age;
        sr_h=sr_h+a[i].height;
        sr_s=sr_s+a[i].score;
    }
    sr_a=sr_a/n;
    sr_h=sr_h/n;
    sr_s=sr_s/n;
    printf("\n%f, %f, %f", sr_a, sr_h, sr_s);
}
 
void srednestat (struct pupil *a)
{
    struct pupil sr;
    static int sred[n][3], sum [n], i, max;
    float min;
    for(i=0; min=100; i++)
    {
        if(fabs(sr_a-a[i].age)<min)
            min=fabs(sr_a-a[i].age);
    }
    for (i=0; i<n; i++)
    {
        if(fabs(sr_a-a[i].age)==min)
            {sred [i][0]=1;}
    }
    for (i=0, min=100; i<n; i++)
    {
        if (fabs(sr_h-a[i].height)<min)
            min=fabs(sr_h-a[i].height);
    }
    for(i=0; i<n; i++)
    {
        if(fabs(sr_h-a[i].height)==0)
            sred[i][1]=1;
    }
    for (i=0; i<n; i++)
    {
        if (fabs(sr_h-a[i].score)<min)
            min=fabs(sr_h-a[i].score);
    }
    for (i=0; i<n; i++)
    {
        if (fabs(sr_s-a[i].score)==0)
            sred[i][2]=1;
    }
    for(i=0; i<n; i++)
    {
        sum[i]=sred[i][0]+sred[i][1]+sred[i][2];
    }
    for (i=0, max=0; i<n; i++)
    {
        if (sum[i]>max)
        {
            max=sum[i];
            //sr=a[i];
            strcpy(sr.name,a[i].name);
            sr.age=a[i].age;
            sr.height=a[i].height;
            sr.score=a[i].score;
        }
    }
    printf("srednestat, %s %d %d %d", sr.name, sr.age, sr.height, sr.score);
    getch();
}
