int f (int n)
{
    printf("参数为%d\n", n);
    // if(n == 0)
    // {
    //     printf("惨，返回了\n");
    //     return 1;
    // }
    // if(n == 1)
    //     return 1;
    // if(n == 2)
    //     return 2;
    // if(n==5)
    //     return 5;
    if(n == 0)
        return 0;
    if(n == 1)
        return 0;
    if(n == 2)
        return 0;
    if(n == 3)
        return 0;
    return f(n-1) + f(n-1);
    // return f(n-1) + f(n-2);
}

int main()
{
    int a = 0;
    int b = 100000;
    // printf(b);
    printf("b的值为%d\n", b);
    a = f(b);
    printf("斐波那契结果为 %d\n", a);
    printf("Hello world!\n");
    return 0;
}