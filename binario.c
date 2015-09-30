#include<stdio.h>
#include<math.h>

/* Este programa convierte un numero de sistema decimal a sistema binario */

      int binario(int);
      unsigned getbits(unsigned,int,int);
main()
{
      int c;
      int r[10];
      int n,no,nf,nsl,nsr,nand,nori,nore,nc;
      int n_and,n_ori,n_ore,n_sl,n_sr,n_c;
      int i;
      int y;

      printf("Quieres calcular un numero en sistema decimal? (s) Si  o (n) No o para terminar\n");
      while(y=getchar()!='n'){
      printf("Introduce un numero en sistema decimal\n");
      scanf("%d",&n);
      printf("\n");
      printf("El numero en sistema decimal %d",n);
      printf("\n");

      for(i=0; i<=9; ++i)
      r[i]=0;

      i=9;
      c=1;
      no=n;
      while(c>0)
       {
           c=ceil(n/2);
           r[i]=n%2;
           printf("El cociente de %d/2 es %d y el residuo es %d \n",n,c,r[i]);
           n=c;
           i--;
           /*getchar();*/
       } 

     /*  for(i=9; i>=0; i--) 
       {
           c=ceil(n/2);
           r[i]=n%2;
           printf("El cociente de %d/2 es %d y el residuo es %d \n",n,c,r[i]);
           n=c;
           getchar();
       } */

      n_and=(no+1) & no;
      n_ori=(no+1) | no;
      n_ore=(no+1) ^ no;
      n_sl =(no+1) << no;
      n_sr =(no+1) >> no;
      n_c  = ~ no;
      printf("es en sistema binario \n");
      printf("%d %d %d %d %d %d %d %d %d %d \n",r[0],r[1],r[2],r[3],r[4],r[5],r[6],r[7],r[8],r[9]);
      printf("\n");
      printf("n+1  & n = %d \n",n_and);
      printf("n+1  | n = %d \n",n_ori);
      printf("n+1  ^ n = %d \n",n_ore);
      printf("n+1 << n = %d \n",n_sl);
      printf("n+1 >> n = %d \n",n_sr);
      printf("     ~ n = %d \n",n_c);
      printf("\n");
      printf("get bits %d \n",getbits(n,4,3));
      }
}
int binario(int n)
{

      int u=0;
      int d=0;
       while(u==2 || d==1)
       {
           d=ceil(n/2);
           u=n%2;
           printf("%d %d %d\n",n,d,u);
           
       }
       return u;
}
unsigned getbits(unsigned x, int p, int n)
{
return(x>>(p+1-n)&~(~0<<n));
}

