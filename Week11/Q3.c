#include <stdio.h>

#define N 4

int gcd(int num1, int num2) {
    // Parameter to store the GCD
    int result;
  //  int i;
    ////////////////////////////////////////////////////////////////////////
    //                        Start of your code                          //
    ////////////////////////////////////////////////////////////////////////
    
        for(int i=2;i<=num1 && i<=num2; i++)
        {
            if(num1%i==0 && num2%i==0 )
            {
                result = i;
                break;
            }
            else
            {
                result = 1;
            }
        }
        
    


    ////////////////////////////////////////////////////////////////////////
    //                         End of your code                           //
    ////////////////////////////////////////////////////////////////////////

    // Return the GCD
    return result;
}

int main() {
    int num[N];     // Input numbers
    int result;     // GCD of the input numbers

    printf("Enter %d numbers: ", N);
    for (int i=0 ; i<N ; i++) {
        scanf("%d", &num[i]);
    }

    ////////////////////////////////////////////////////////////////////////
    //                        Start of your code                          //
    ////////////////////////////////////////////////////////////////////////
    
    /*
        TODO: Fill in your code here to use the self-defined function:

            int gcd(int num1, int num2);

        to compute the GCD among 4 numbers.

        Hint: the following code is an example of how to compute the gcd
              of the 3 numbers.
    */
        result = gcd(num[0], num[1]);
        result = gcd(result, num[2]);
        result = gcd(result, num[3]);
        
    

    ////////////////////////////////////////////////////////////////////////
    //                         End of your code                           //
    ////////////////////////////////////////////////////////////////////////

    printf("GCD of ");
    for (int i=0 ; i<N ; i++) {
        printf("%d ", num[i]);
    }
    printf("is %d\n", result);

    return 0;
}