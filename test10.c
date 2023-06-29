#include <stdio.h>
int main()
{
    int age;
    printf("enter your age here: ");
    scanf("%d", &age);
    if (age >= 50) {
    printf("your are older");
    }
    else if (age >= 100) {
    printf("your are dead");
    }
    else {
    printf("your are younger");
    }
return 0;
    }
