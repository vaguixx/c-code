//数1-100中出现了多少次数字9
#include <stdio.h>

int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		//里面放判断条件
		if (i % 10 == 9) {//先判断个位数字是否是9，是9，count+1
			count++;
		}
		if (i / 10 == 9) {//判断十位数字是否为9
			count++;//注意理清两个if分支语句之间的关系，他们一定是并列关系
		}//十位上的数字为9，各位上的数字也能为9，这样算是出现了2个9，所以他们一定是并列关系
	}
	printf("%d\n", count);
	return 0;
}