#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int phonenumber;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //age
        printf("age: ");
        scanf("%d",&employees[i].age);
         //phonenumber
        printf("phonenumber: ");
        scanf("%d",&employees[i].phonenumber);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("phonenumber \t: ");
        printf("%d \n",employees[i].phonenumber);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
