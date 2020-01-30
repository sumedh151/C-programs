void main()
{
    float c1,c2,f1,f2;
    printf("Enter temperature in celcius: ");
    scanf("%f",&c1);
    f1=1.8*c1+32;
    printf("Temperature is fahrenheit is %f",f1);

    printf("\n\nEnter temperature in fahrenheit:");
    scanf("%f",&f2);
    c2=(f2-32)/1.8;
    printf("Temperature is celcius is=%f",c2);


}
