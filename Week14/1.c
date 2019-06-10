#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct birthdate
{
    int day;
    int month;
    int year;
};
struct student
{
    struct birthdate information;
    int id;
    char name[80];
};
int calculateAge(struct student temp)
{
    int age;
    age = 2018 - temp.information.year;
    return age;
}
char *topic[]={"Student ID :","Name :","Birthdate :","Age :"};
int main(int argc, char const *argv[])
{
    struct student temp;
    int id, day, month, year; char name[80]; 
    FILE *inFile; 
    inFile = fopen("student.txt", "r"); 
    FILE *outFile;
    outFile = fopen("student_age.txt","w");
    if (inFile == NULL) 
    {     
        printf("Failed to open the file.\n");     
        exit(1); 
    
    } 
    while (fscanf(inFile, "%d %s %d %d %d", &id, name, &day, &month, &year) != EOF) 
    {     
        printf("Read %d %s %d %d %d\n", id, name, day, month, year);
        temp.information.year = year;
        temp.id = id;
        strcpy(temp.name,name);
        temp.information.day = day;
        temp.information.month = month;
        fprintf(outFile,"%s %d\n",topic[0],temp.id);
        fprintf(outFile,"%s %s\n",topic[1],temp.name);
        fprintf(outFile,"%s %d/%d/%d\n",topic[2],temp.information.day,temp.information.month,temp.information.year);
        fprintf(outFile,"%s %d",topic[3],calculateAge(temp));

    }
    fclose(inFile);
    fclose(outFile);

    return 0;
}
