//Create a structure employee with members name, age, and address, where address is a nested structure containing house_no, street, and state_no
#include <stdio.h> 

struct Address{
    int house_no;
    char street[100];
    int state_no;
};

struct Employee{
    char name[100];
    int age;
    struct Address address;
};

int main(){ 
    struct Employee emp;

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter Employee age: ");
    scanf("%d", &emp.age);

    printf("Enter house number: ");
    scanf("%d", &emp.address.house_no);

    printf("Enter street name: ");
    scanf(" %[^\n]", emp.address.street);

    printf("Enter street number: ");
    scanf("%d", &emp.address.state_no);

    printf("\n Employee Details: \n");
    printf("\nName: %s", emp.name);
    printf("\nAge: %d", emp.age);
    printf("\nAddress: House No. %d, street: %s, State No.: %d\n\n", emp.address.house_no, emp.address.street, emp.address.state_no);

    return 0;
}