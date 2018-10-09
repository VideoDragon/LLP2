#include <stdio.h>

struct PersonDetails {
   char  name[50];
   char  surname[50];
   char  email[100];
   char  id[50];
}; 

int main(void)
{
	struct PersonDetails person;

	printf("Enter Name: ");
	scanf("%s", &person.name[0]);

	printf("Enter Surname: ");
	scanf("%s", &person.surname[0]);
	
	printf("Enter Email: ");
	scanf("%s", &person.email[0]);

	printf("Enter Id: ");
	scanf("%s", &person.id[0]);

	printf("Full details: %s %s %s %s\n", person.name, person.surname, person.email, 		person.id);
	
	return 0;
}
