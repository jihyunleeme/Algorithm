/*

버블정렬 : 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내는 정렬
구현 제일 쉬움 but, 효율성 제일 떨어짐

*/


#include <studio.h>

int main(void){
    int i, j, temp;
    int array[10] ={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i < 10; i++){
        for(j = 0; j < 9 - i; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return 0;
}