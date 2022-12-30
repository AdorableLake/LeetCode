int numberOfSteps(int num){
    int i=1;
    while(num!=0){
        if(num%2==0){
            printf("步骤 %d) %d 是偶数，除以 2 得到 %d 。", i, num, num/2);
            num=num/2;
            i++;
        } else {
            printf("步骤 %d) %d 是奇数，减 1 得到 %d 。", i, num, num-1);
            num=num-1;
            i++;
        } // if
    } // while
} // 这里怎么就错了呢
