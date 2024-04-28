#include"SListcontact.h"


void menu()
{
	puts("*********通讯录*********");
	puts("****请选择要进行的操作****");
	puts("******1.添加联系人******");
	puts("******2.删除联系人******");
	puts("******3.展示联系人******");
	puts("******4.查找联系人******");
	puts("******5.修改联系人信息******");
	puts("********0.退出*********");
	puts("***********************");
}

void contactmenu()
{
	puts("***********************");
	puts("******1.联系人姓名******");
	puts("******2.联系人性别******");
	puts("******3.联系人年龄******");
	puts("******4.联系人电话******");
	puts("******5.联系人地址******");
	puts("********0.退出*********");
	puts("***********************");
}


//初始化通讯录
void InitContact(contact** con)
{
	*con = NULL;
}


//添加通讯录数据

void AddContact(contact** con)
{
    SLTPushBack(con);
	contact* newnode = *con;
	while (newnode->next)
	{
		newnode = newnode->next;
	}
	puts("请输入要添加联系人的信息：");
	puts("请输入联系人姓名：");
	scanf("%s", newnode->data.name);
	puts("请输入联系人性别：");
	scanf("%s", newnode->data.sex);
	puts("请输入联系人年龄：");
	scanf("%d", &(newnode->data.age));
	puts("请输入联系人电话：");
	scanf("%s", newnode->data.tel);
	puts("请输入联系人地址：");
	scanf("%s", newnode->data.addr);
	puts("添加操作结束,添加成功");
}

//删除通讯录数据

void DelContact(contact** con)
{
	assert(con&&*con);
	char arr[NAME_MAX] = { 0 };
	puts("请输入要删除的联系人姓名：");
	scanf("%s", arr);
	if(strcmp(arr , (*con)->data.name) == 0)
	{
		contact* next = (*con)->next;
		free(*con);
		*con = next;
	}
	else
	{
		SLTNode* petail = (*con)->next;
		SLTNode* pcur = *con;
		while (petail->next != NULL)
		{
			if (strcmp(arr, (petail)->data.name) == 0)
			{
				pcur->next = petail->next;
				free(petail);
				petail = NULL;
				return;
			}
			pcur = pcur->next;
			pcur = pcur->next;
		}
		pcur->next = NULL;
		free(petail);
		petail = NULL;
	}
	puts("联系人信息删除成功！");
}

//展示通讯录数据

void ShowContact(contact* con)
{
	if(NULL == con)
	{
		puts("通讯录未存储任何信息，无法展示，请添加联系人信息!");
	}
	else
	{
		while (con)
		{
			puts("联系人信息如下：");
			puts("联系人的姓名：");
			printf("%s\n", con->data.name);
			puts("联系人的性别：");
			printf("%s\n", con->data.sex);
			puts("联系人的年龄：");
			printf("%d\n", con->data.age);
			puts("联系人的电话：");
			printf("%s\n", con->data.tel);
			puts("联系人的地址：");
			printf("%s\n", con->data.addr);
			con = con->next;
		}
	}
}

//查找通讯录数据

void FindContact(contact* con)
{
	char arr[NAME_MAX] = { 0 };
	puts("请输入要查找的联系人姓名：");
	scanf("%s",arr);
	contact* member = FindByName(con,arr);
	if(NULL == member)
	{
		puts("找不到联系人信息！");
	}
	else
	{
		puts("联系人信息如下：");
		puts("联系人的姓名：");
		printf("%s\n", member->data.name);
		puts("联系人的性别：");
		printf("%s\n", member->data.sex);
		puts("联系人的年龄：");
		printf("%d\n", member->data.age);
		puts("联系人的电话：");
		printf("%s\n", member->data.tel);
		puts("联系人的地址：");
		printf("%s\n", member->data.addr);
	}
}
//修改通讯录数据

void ModifyContact(contact** con)
{
	assert(con && *con);
	char arr[NAME_MAX] = { 0 };
	puts("请输入要修改的联系人的姓名：");
	scanf("%s",arr);
	contact* member = FindByName(*con, arr);
	if (NULL == member)
	{
		puts("联系人不存在无法修改！");
	}
	else
	{
		puts("联系人新的信息如下：");
		puts("联系人的姓名：");
		scanf("%s", member->data.name);
		puts("联系人的性别：");
		scanf("%s", member->data.sex);
		puts("联系人的年龄：");
		scanf("%d", &(member->data.age));
		puts("联系人的电话：");
		scanf("%s", member->data.tel);
		puts("联系人的地址：");
		scanf("%s", member->data.addr);
	}
}

//销毁通讯录数据

void DestroyContact(contact** con)
{
	assert(con);
    if(NULL == *con)
	{
		return;
	}
	else
	{
		contact* tail = *con;
		while (tail)
		{
			contact* cur = tail->next;
			free(tail);
			tail = cur;
		}
		tail = *con = NULL;
		puts("联系人数据销毁成功！");
	}
}


//根据名字查找
SLTNode* FindByName(SLTNode* phead, char* Name)
{
	assert(phead);
	SLTNode* pcur = phead;
	while (pcur)
	{
		if (strcmp(&(pcur->data.name), Name) == 0)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}


