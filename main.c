#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
    double func,x1,x2,delta;
    unsigned int variant;
    int N;

    printf("Enter variant (1 or 2):");//������ ����� �������
    scanf("%d",&variant);

    while(variant!= 1  &&  variant!= 2){ //�������� ������ �������
    printf("ERROR. Invalid data\n");
    printf("Enter variant (1 or 2): ");
    scanf("%u",&variant);
    }

    if(variant == 1) // ���� ������ 1
        {
    printf("\n\nEnter N (N>=0):"); //N=0 -- ����� ��������; N>0 -- �������� �������;
    scanf("%d", &N);

    while(N<0){//�������� N
    printf("N>=0!!! \n");
    printf("N=");
    scanf("%d", &N);
        }

    if(N == 0){ //--���� N=0 �� ����� ��������
    printf("\n\nEND!!!");
    getch();
    exit(0);
        }

    else{
    printf("\nEnter x1: ");
    scanf("%lf",&x1);
    printf("\nEnter x2: ");
    scanf("%lf",&x2);

    printf("\n***********************************************************************");
    printf("\n*       N  *               X         *             F(X)               *");
    printf("\n***********************************************************************");

    int n=1; //�������� �����
    delta=(x2-x1)/(N-1);
    for(n;n<=N;n++)
    {
        func=pow(x1,3)/30-4*pow(x1,2)+50;
    printf("\n|%12.0d|%26.2f|%27.2f|\n",n,x1,func);
    if(n%10==0)
    {
    printf("\nPress any key to continue...");
    getch();
    }
    x1=x1+delta;
    }
           }
    return 0;
     }

    else(variant == 2);//���� ������ 2
        {

    printf("\nEnter x1: ");
    scanf("%lf",&x1);
    printf("\nEnter x2: ");
    scanf("%lf",&x2);

    do{                            //�������� ������
    printf("\nEnter delta: ");
    scanf("%lf",&delta);
    }while(delta==0);

    int n=1;//�������� �����
    printf("\n***********************************************************************");
    printf("\n*       N  *               X         *             F(X)               *");
    printf("\n***********************************************************************");

    while(x1<=x2)
    {
    func=pow(x1,3)/30-4*pow(x1,2)+50;
    printf("\n|%12.0d|%26.2f|%27.2f|\n",n,x1,func);
    if(n%10==0)
    {
    printf("\nPress any key to continue...");
    getch();
    }
    x1=x1+delta;
    n++;
    }

    return 0;
    }
}

