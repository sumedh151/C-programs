void main()
{
    int a,b,c;
    char op;
    printf("Enter Operands: ");
    scanf("%d %d",&a,&b);
    printf("\nEnter Operator: ");
    scanf(" %c",&op);
    switch(op)
    {
    case'+':
        c=a+b;
        printf("%d+%d=%d",a,b,c);
        break;
    case'-':
        c=a-b;
        printf("%d-%d=%d",a,b,c);
        break;
    case'*':
        c=a*b;
        printf("%d*%d=%d",a,b,c);
        break;
    case'/':
        c=a/b;
        printf("%d/%d=%d",a,b,c);
        break;
    default:
        printf("Invalid operator or operand");
        break;
        }
}
