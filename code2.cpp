#include<iostream>
using namespace std;
int power(int, int);
int power(int x, int y){
    int result =1;
    for (int  i = 0; i < y; i++)
    {
        result *=x;

    }
    return result;
    
}
int main(){
    int x, y;
    printf("Power Calculator\n");
    printf("Enter the number\t");
    scanf("%d", &x);
    printf("Enter the power of %d to raise it\t", x);
    scanf("%d", &y);
    int result =power(x, y);
    printf("%d to the power of %d is:\t %d", x, y, result);
    

    return 0;

}