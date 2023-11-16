#include <stdio.h>
#include <stdlib.h>


struct Person {
    char name[50];
    int age;
};


int compareByAgeDesc(const void* a, const void* b) {
    return ((struct Person*)b)->age - ((struct Person*)a)->age;
}

int main() {
    
    struct Person people[] = {
        {"Bogdan", 53},
        {"Popi", 15},
        {"Sabin", 32},
        
    };

    
    size_t numPeople = sizeof(people) / sizeof(people[0]);

    
    qsort(people, numPeople, sizeof(struct Person), compareByAgeDesc);

    
    for (size_t i = 0; i < numPeople; i++) {
        printf("%s: %d\n", people[i].name, people[i].age);
    }

    return 0;
}
