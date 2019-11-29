#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcao1.c"
#include "funcao2.c"
#include "funcao3.c"
#include "funcao4.c"
#include "funcao5.c"
#include "funcao6.c"
#include "funcao7.c"
#include "funcao8.c"
#include "funcao9.c"
#include "funcao10.c"

void menu (){
    printf("1 - F(x) = k\n");
    printf("2 - F(x) = x^k\n");
    printf("3 - F(x) = k^x\n");
    printf("4 - F(x) = e^x\n");
    printf("5 - F(x) = logk(x)\n");
    printf("6 - F(x) = ln(x)\n");
    printf("7 - F(x) = 1/x\n");
    printf("8 - F(x) = Sen(x)\n");
    printf("9 - F(x) = Cos(x)\n");
    printf("10 - F(x) = Tg(x)\nIr para: ");
}

void Limpeza()
{
    system("cls || clear");
}
double der1(double k, double h){
    double w, derivada;
    w = k + h;
    derivada = ((funcao1(w) - funcao1(k)) / h);
    return (derivada);
}

double der2(double x, double k, double h){
    double w, derivada;
    w = x + h;
    derivada = ((funcao2(w,k) - funcao2(x,k)) / h);
    return (derivada);
}

double der3(double k, double x, double h){
    double w, derivada;
    w = k + h;
    derivada = ((funcao3(w,x) - funcao3(k,x)) / h);
    return (derivada);
}

double der4(double x, double h, double euler){
    double w, derivada;
    w = x + h;
    derivada = ((funcao4(euler,w) - funcao4(euler,x)) / h);
    return (derivada);
}

double der5(double x, double k, double h){
    double w, derivada;
    w = x + h;
    derivada = ((funcao5(w,k) - funcao5(x,k)) / h);
    return (derivada);
}

double der6(double x, double h){
    double w, derivada;
    w = x + h;
    derivada = ((funcao6(w) - funcao6(x)) / h);
    return (derivada);
}
double der7(double x, double h){
    double w, derivada;
    w = x + h;
    derivada = ((funcao7(w) - funcao7(x)) / h);
    return (derivada);
}

double der8(double x, double h){
    double w, derivada;
    w = ((x + h) * 3.14159265359)/ 180;
    x = (x* 3.14159265359)/ 180;
    derivada = ((funcao8(w) - funcao8(x)) / h);
    return (derivada);
}

double der9(double x, double h){
    double w, derivada;
    w = ((x + h) * 3.14159265359)/ 180;
    x = (x* 3.14159265359)/ 180;
    derivada = ((funcao9(w) - funcao9(x)) / h);
    return (derivada);
}

double der10(double x, double h){
    double w, derivada;
    w = ((x + h) * 3.14159265359)/ 180;
    x = (x* 3.14159265359)/ 180;
    derivada = ((funcao10(w) - funcao10(x)) / h);
    return (derivada);
}

int main()
{
    int m1, m2, m3, m4, i, temp;
    double derivada, N, B, w, h, k, sum, logaritmo_xbasek, n, x, resultado, a, b, c;
    double euler = 2.718281828;
    printf("*Bem vindo ao MathADoor*\n");
    do{
        printf("--------------------------------------------------------\nEscolha no menu em seguida a conta que deseja realizar\n");
        printf("\n1 - Funcoes\n2 - Derivadas\n3 - Integrais\n4 - Sair\n");
        printf("\nIr para: ");
        temp = scanf("%d", &m1);
        if(temp!=1){
        printf("\nNao eh possivel entrar com valores alem de numeros!\n");break;}
        if(m1 == 4){
            Limpeza();
            printf("Obrigado por usar a nossa plataforma =)\n");
            break;}
        if(m1 <1 || m1 > 4){
            printf("\nVoce escolheu uma incorreta! Por favor selecione outra opcao: \n");}
        switch (m1)
        {
            case 1 :
                Limpeza();
                printf("Voce escolheu a opcao de Funcoes\n---------------------------------------\n");
                printf("Escolha a funcao:\n");
                menu();
                scanf("%d", &m2);
                switch (m2)
                {
                    case 1 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite o valor de k para a construcao da funcao: ");
                        scanf("%lf", &k);
                        resultado = funcao1(k);
                        printf("f(%lf) = %lf\n", x, resultado);
                        break;
                    case 2 :
                        Limpeza();
                        printf("Digite o valor de k para a construcao da funcao: ");
                        scanf("%lf", &k);
                        printf("\nQue valor de x deseja aplicar? \n");
                        scanf("%lf", &x);
                        if(x<=1){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = funcao2(x, k);
                        printf("f(%lf) = %lf\n", x, resultado);}
                        break;
                    case 3 :
                        Limpeza();
                        printf("Digite o valor de k para a construcao da funcao: ");
                        scanf("%lf", &k);
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        if(k<=1){
                        printf("\nValor invalido para k, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = funcao3(k, x);
                        printf("f(%lf) = %lf\n", x, resultado);}
                        break;
                    case 4 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        resultado = funcao4(euler, x);
                        printf("f(%lf) = %lf\n", x, resultado);
                        break;
                    case 5 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("\nQue valor de k deseja aplicar? ");
                        scanf("%lf", &k);
                        if(x <=0 || k<=0){
                        printf("\nValor invalido para x ou k, tente realizar a funcao novamente!\n\n");}
                        else{
                        logaritmo_xbasek = funcao5(x,k);
                        printf("f(%lf) = %lf\n", x, logaritmo_xbasek);}
                        break;
                    case 6 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        if(x <=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = funcao6(x);
                        printf("f(%lf) = %lf\n", x, resultado);}
                        break;
                    case 7 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        if(x<=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = funcao7(x);
                        printf("f(%lf) = %lf\n", x, resultado);}
                        break;
                    case 8 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        if(x<=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        x = (x* 3.14159265359)/ 180;
                        resultado = funcao8(x);
                        printf("f(%lf) = %lf\n", x, resultado);}
                        break;
                    case 9 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        if(x<=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        x = (x* 3.14159265359)/ 180;
                        resultado = funcao9(x);
                        printf("f(%lf) = %lf\n", x, resultado);}
                        break;
                    case 10 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        k = x/90;
                        if(x != (k*180)){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        x = (x* 3.14159265359)/ 180;
                        resultado = funcao10(x);
                        printf("f(%lf) = %lf\n", x, resultado);}
                        break;
                    default:
                        printf("\n");
                        printf("Voce nao escolheu nenhuma das opcoes!\n");}
                    break;

            case 2 :
                Limpeza();
                printf("Voce escolheu a opcao de Derivadas\n---------------------------------------\n");
                printf("Escolha a funcao para realizar o calculo da derivada:\n");
                menu();
                scanf("%d", &m3);
                switch (m3)
                {
                    case 1 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite o valor de k para a construcao da funcao: ");
                        scanf("%lf", &k);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        resultado = der1(k,h);
                        printf("f'(%lf) = %lf\n",x, resultado);
                    break;
                    case 2 :
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite o valor de k para a construcao da funcao: ");
                        scanf("%lf", &k);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        if(x<=1){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der2(x,k,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}
                        break;
                    case 3:
                        Limpeza();
                        printf("Digite o valor de k para a construcao da funcao: ");
                        scanf("%lf", &k);
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        if(k<=1){
                        printf("\nValor invalido para k, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der3(k,x,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}
                        break;
                    case 4:
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        resultado = der4(x,h,euler);
                        printf("f'(%lf) = %lf\n", x, resultado);
                        break;
                    case 5:
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite o valor de k para a construcao da funcao: ");
                        scanf("%lf", &k);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        if(x <=0 || k<=0){
                        printf("\nValor invalido para x ou k, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der5(x,k,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}
                        break;
                    case 6:
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        if(x <=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der6(x,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}
                        break;
                    case 7:
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        if(x<=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der7(x,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}
                        break;
                    case 8:
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        if(x<=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der8(x,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}
                        break;
                    case 9:
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        if(x<=0){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der9(x,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}
                        break;
                    case 10:
                        Limpeza();
                        printf("Que valor de x deseja aplicar? ");
                        scanf("%lf", &x);
                        printf("Digite um valor baixo para h (ex: 0.00001): ");
                        scanf("%lf", &h);
                        k = x/90;
                        if(x != (k*180)){
                        printf("\nValor invalido para x, tente realizar a funcao novamente!\n\n");}
                        else{
                        resultado = der10(x,h);
                        printf("f'(%lf) = %lf\n", x, resultado);}}
                    break;

                case 3 :
                Limpeza();
                printf("Voce escolheu a opcao de Integrais\n---------------------------------------\n");
                printf("Escolha a funcao para realizar o calculo da integral:\n");
                menu();
                scanf("%d", &m4);
                switch (m4)
                {
                    case 1 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        k = a + (i*h);
                        sum = sum + funcao1(k);}
                        resultado = (((funcao1(a) + (2*sum) + funcao1(b))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 2 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Que valor de k deseja aplicar? ");
                        scanf("%lf", &k);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        h = (b-a)/N;
                        printf("valor de h: %lf\n\n", h);
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao2(x,k);}
                        printf("%lf", sum);
                        resultado = (((funcao2(a,k) + (2*sum) + funcao2(b,k))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 3 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &B);
                        printf("Que valor de k deseja aplicar? ");
                        scanf("%lf", &k);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        h = (B-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao3(k,x);}
                        resultado = (((funcao3(a,x) + (2*sum) + funcao3(B,x))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 4 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao4(euler,x);}
                        resultado = (((funcao4(a,x) + (2*sum) + funcao4(b,x))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 5 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Que valor de k deseja aplicar? ");
                        scanf("%lf", &k);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao5(x,k);}
                        resultado = (((funcao5(a,k) + (2*sum) + funcao5(b,k))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 6 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao6(x);}
                        resultado = (((funcao6(a) + (2*sum) + funcao6(b))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 7 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao7(x);}
                        resultado = (((funcao7(a) + (2*sum) + funcao7(b))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 8 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        a = (a* 3.14159265359)/ 180;
                        b = (b* 3.14159265359)/ 180;
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao8(x);}
                        resultado = (((funcao8(a) + (2*sum) + funcao8(b))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 9 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        a = (a* 3.14159265359)/ 180;
                        b = (b* 3.14159265359)/ 180;
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao9(x);}
                        resultado = (((funcao9(a) + (2*sum) + funcao9(b))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    case 10 :
                        Limpeza();
                        printf("Que valor de a deseja aplicar? ");
                        scanf("%lf", &a);
                        printf("Que valor de b deseja aplicar? ");
                        scanf("%lf", &b);
                        printf("Qual o numero de particoes? ");
                        scanf("%lf", &N);
                        if(a==0 && b==0){
                                printf("\nValor invalido para a e b, tente realizar a integral novamente!\n\n");break;}
                        if(N==0){
                                printf("\nValor invalido para n, tente realizar a integral novamente!\n\n");break;}
                        else{
                        a = (a* 3.14159265359)/ 180;
                        b = (b* 3.14159265359)/ 180;
                        h = (b-a)/N;
                        for (i=1;i<=N-1;i++){
                        x = a + (i*h);
                        sum = sum + funcao10(x);}
                        resultado = (((funcao10(a) + (2*sum) + funcao10(b))) * h) / 2;
                        printf("\nI(%lf,%lf) = %lf\n", a, b, resultado);}
                        break;
                    }
            break;
        }
    }while(m1 !=4 || m2 != 4 || m3!= 4 || m4!= 4);
}
