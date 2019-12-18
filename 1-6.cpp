#include <stdio.h>
int main(){
/*	int c=0,whiteLen=0,numLen[10]={},otherLen=0;
	while((c=getchar())!=EOF){
		if(c>='0'&&c<='9'){
			numLen[c-'0']++;
		}else if(c==' '||c=='\n'||c=='\t'){
			whiteLen++;
		}else{
			otherLen++;
		}
	}
	for(int i=0;i<10;i++){
		printf("the num of %d is %d \n",i,numLen[i]);
	}
	printf("the num of white is %d, the num of other is %d\n",whiteLen,otherLen);
*/
//exercise 1-13
	int c=0,state=0,wordLen=0,wordNum=0;
	const int IN=1,OUT=0;
	printf("Please input the data(Tips:\"make sure the first character is a letter\"):\n\t");
	while((c=getchar())!=EOF){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
			state=IN;
			wordLen=0;
			wordLen++;
			printf("#");
			
		}else if(state=IN){
			state=OUT;
			wordNum++;
			printf("\n");
		}
	}
	printf("\n  ->__The numbers of the words is %d__<-",wordNum);
//exercise 1-14
//I think I can't accomplish it now ->2019/12/18<-
	return 0;
}

