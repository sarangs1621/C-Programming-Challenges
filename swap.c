void swap(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int num1 = 10;
    int num2 = 45;
    swap(num1,num2);
    printf("num1 = %d \nnum2 = %d",num1,num2);
}