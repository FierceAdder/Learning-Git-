   #include <stdio.h>
   #include <stdlib.h>
   int gcd(int num1,int num2);
   int main()
    {
        int num1=1,num2=1,result=1;
        printf("Enter the First Number : \n");
        scanf("%d", & num1);
        printf("Enter the Second Number : \n");
        scanf("%d", & num2);
        result=gcd(num1,num2);
        printf("The GCD of %d and %d is : %d\n",num1,num2,result);
        return 0;

    }
    int gcd(int num1,int num2)
    {
        int i=1,hcf=1;
        if (num1>num2)
        {
            for (i=1;i<(num1/2);i++)
            {
                if (num1%i==0 && num2%i==0)
                {
                    hcf=i;
                }
            }
        }
        else if (num2>num1)
        {
            for (i=1;i<(num2/2);i++)
            {
                if (num1%i==0 && num2%i==0)
                {
                    hcf=i;
                }
            }

        }
        else
            hcf=num1;
        return hcf;


    }

