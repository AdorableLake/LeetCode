/*
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int count[accountsSize];
    for(int i=0; i < accountsSize; i++) count[i]=0;
    for(int i=0; i < accountsSize; i++){
        for(int j=0; j < accountsColSize; j++){
            count[i]+=accounts[i][j];
        }
    }
    QuickSort(count[], 0, accountsSize);
    printf("%d", count[accountsSize]);
}

void QuickSort(int R[], int low, int high){
    if(low<high){
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = low, j = high, x = R[low];
        while (i < j){
            while(i < j && R[j] >= x) j--;// 从右向左找第一个小于x的数
            if(i < j) R[i++] = R[j];
            
            while(i < j && R[i] < x) i++;// 从左向右找第一个大于等于x的数 
            if(i < j) R[j--] = R[i];
        }
        R[i] = x;
        QuickSort(R, low, i-1); // 递归调用 
        QuickSort(R, i+1, high);
    }
}
*/
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int maxWealth = INT_MIN;
    for (int i = 0; i < accountsSize; i++) {
        int sum = 0;
        for (int j = 0; j < accountsColSize[0]; j++) {
            sum += accounts[i][j];
        }
        maxWealth = MAX(maxWealth, sum);
    }
    return maxWealth;
}
