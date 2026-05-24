#include <stdio.h>
int main(){
    char car = 'c';
    int ent = -284;
    float dec = 5.324525;
    double dob = 3.1415926539793;
    long double a = 2.45463454235456561514648646L;
    short int chiki = 2;
    long int b = 8500000000;
    long long lala = 987654321012345LL;
    unsigned int pos = 446;

    //char %c
    printf(
    "character\nvalor: %c\ndireccion de memoria: %lu\n\n",
    car,(unsigned long)(uintptr_t)&car);

    //int %d
    printf(
    "integer\nvalor: %d\ndireccion de memoria: %lu\n\n",
    ent,(unsigned long)(uintptr_t)&ent);
    //float %f
    printf(
    "float\nvalor: %f\ndireccion de memoria: %lu\n\n",
    dec,(unsigned long)(uintptr_t)&dec);

    //double %lf %f
    printf(
    "double\nvalor: %f\ndireccion de memoria: %lu\n\n",
    dob,(unsigned long)(uintptr_t)&dob);

    //long double %Lf
    printf(
    "long\nvalor: %Lf\ndireccion de memoria: %lu\n\n",
    a,(unsigned long)(uintptr_t)&a);

    //short int %hd
    printf(
    "short int\nvalor: %hd\ndireccion de memoria: %lu\n\n",
    chiki,(unsigned long)(uintptr_t)&chiki);

    //long int %ld
    printf(
    "long int\nvalor: %ld\ndireccion de memoria: %lu\n\n",
    b,(unsigned long)(uintptr_t)&b);

    //long long %lld
    printf(
    "long long\nvalor: %lld\ndireccion de memoria: %lu\n\n",
    lala,(unsigned long)(uintptr_t)&lala);

    //unsigned int %u
   printf(
    "unsigned int\nvalor: %u\ndireccion de memoria: %lu\n\n",
    pos,(unsigned long)(uintptr_t)&pos);


    return 0;
}