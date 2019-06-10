#include<stdio.h>
#include<math.h>
main(int argc, char const *argv[])
{
    int x,z,t,l,j;
    int y=0,a=0;
    int k=0,w=0,r=0;
    printf(" Enter amount do you want to withdraw : ");
    scanf(" %d",&x);
    
    if (x % 100 ==0){
        printf("Summary of Bank notes:\n");
        if (x>1000){{
            for(int i =1000; i<=x; i=i+1000){
            y=y+1000;
            a++;
            z=x-y;
        }
        printf(" %d notes of 1000 bath \n",a);
        }
        if (z >=500 && z<1000 ){
                for(int i = 500; i <=z; i = i+500)
                 {
                     l=l+500;
                     k++;
                     t = z-l;
                 }
                 
            printf(" %d notes of 500 bath \n",k);
            }
            if (t >=100 && t<500 ){
                    for(int i = 100;i<=t; i=i+100)
                    {
                        r=r+100;
                        w++;
                        j=t-r;
                    }
                    printf(" %d notes of 100 bath \n",w);
           
                }
        if (z>=100 && z<500){
            for(int i=100; i<=z;i=i+100){
                        r=r+100;
                        w++;
                        j=z-r;
            }
            printf(" %d notes of 100 bath \n",w);
        }
    }
                if (x>=500 && x<1000){
                    for(int i = 500; i<=x; i=i+500)
                    {
                        y=y+500;
                        a++;
                        z=x-y;
                    }
                    printf("%d notes of 500 bath \n",a);
                    if (z >=100 && z<500)
                        {
                            for(int i= 100; i<=z;i=i+100){
                                r=r+100;
                                w++;
                                j=z-r;
                            }
                            printf("%d notes of 100 bath \n",w);
                        }
                }
                if (x>=100 && x< 500){
                    for(int i = 100; i<=x; i=i+100){
                        l=l+100;
                        k++;
                        t = x-l;
                    }
                    printf("%d notes of 100 bath \n",k);
                }
        }


    else
        printf("Sorry.. the amounts you insert are not possible to withdrawn");
    return 0;
}
