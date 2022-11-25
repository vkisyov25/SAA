#include <stdio.h>

int main() {

    //5.Да се напише програма, която пренарежда нулевите по стойност елементи в края на едномерен масив, без използването на друг масив.
    int length;
    printf("Enter a size of array: ");
    scanf("%d",&length);
    int arr[length];
    int currentNum;
    int temp = 0;

    //create array
    for(int i=0; i<length; i++){
        printf("Enter a number: \n");
        scanf("%d",&currentNum);
        arr[i] = currentNum;
    }

    //most important part of the exercise
    int countZero = 0;
    int j;
    for(j=0; j<length; j++){
        if(j+countZero==length-1){
            break;
        }
        if(arr[j]==0){
            if(arr[(length-1) - countZero] != 0){
                temp = arr[(length-1) - countZero];
                arr[(length-1) - countZero] = arr[j];
                arr[j] = temp;
                countZero++;
            }else{
                countZero++;
                j--;
            }
        }

    }

    //print array after the changes
    for(int k=0; k<length; k++){
        printf("%d ",arr[k]);
    }
    return 0;
}
