 #include<stdio.h>
int main()
{
    int x=10;
    int y =20;
    int *p;

    p = &x;

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*p);
    return 0;

}
