#define _CRT_SECURE_NO_WARNINGS 1
#include"contest.h"//引用自己的头文件
void mune()
{
	printf("*********************************\n");
	printf("****1.set                2.del****\n");
	printf("****3.search            4.modify*\n");
	printf("****5.show              6.sort***\n");
	printf("****0.exit              *********\n");
	printf("*********************************\n");
}
int main()
{
	int intput = 0;
	struct haha con;
	chushihua(&con);
	do
	{
		mune();
		printf("请输入你想选的类型：");
		scanf("%d", &intput);
		switch (intput)
		{
		case SET:
			set(&con);//创建通讯录
			break;
		case DEL:
			del(&con);//删除通讯录
			break;
		case SEARCH:
			seach(&con);//查找通讯录
			break;
		case MODIFY:
			modify(&con);//修改通讯录
			break;
		case SHOW:
			show(&con);//展示通讯录
			break;
		case SORT://冒泡排序
			qsort(con.data,con.size,sizeof(con.data[0]),comp);//qsort函数
			break;
		case EXIT:
			destroycontact(&con);
		default:
			printf("请重新输入");
			break;
			fflush(stdin);
		}
	} while (intput);
	
	return 0;
}