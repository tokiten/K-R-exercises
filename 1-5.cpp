#include <stdio.h>
#include <string.h>

int main(){
//1.5.2 character count
/*
	long cnt=0;
	long c=0;
	while(c!=EOF){
		c=getchar();
		putchar(c);
		cnt++;
	}
	printf("%ld\n",cnt);//press CTRL+Z on windows to end the input of the string
*/
//1.5.3 line count
/*
	int c=0,line=0;
	while((c=getchar())!=EOF){
		if(c=='\n'){
			line++;
		}
	}
	printf("%d\n",line);//press CTRL+Z on windows to end the input of the string
*/
//exercise 1-8
/*	int spaceNum=0,tabNum=0,enterNum=0;
	int c=0;
	printf("please tell shell some of your message:\n\tpress the combined key \"CTRL+Z\"to tell shell when your input is finished\n");
	while((c=getchar())!=EOF){
		if(c==' '){
			spaceNum++;
		}
		if(c=='\t'){
			tabNum++;
		}
		if(c=='\n'){
			enterNum++;
		}
	}
	printf("the number of the spaces is %d\n",spaceNum);
	printf("the number of the tabs is %d\n",tabNum);
	printf("the number of the enters is %d\n",enterNum);
*/
//exercise 1-9
/*#the first trial#In this place,I have tried for 3 times.Unfortunately,I cannot write the correct
answer at present.__tokiten__2019/12/07__*/
//exercise 1-10
/*#the first trial#In this place,I have tried for 3 times.Unfortunately,I cannot write the correct
answer at present.__tokiten__2019/12/07__*/
//1.5.4 word count(the definition of the word is :a string without ' ','\n','\t')
	int c=0,wordNum=0,state=0;
	const int IN=1,OUT=0;
	while((c=getchar())!=EOF){
		if(c==' '||c=='\n'||c=='\t'){
			state=OUT;
		}else if(state==OUT){
			state=IN;
			wordNum++;
		}
		
	}
	printf("the number of the words is %d\n",wordNum);
	return 0;
}


