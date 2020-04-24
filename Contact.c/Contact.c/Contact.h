#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<assert.h>
#include<string.h>

//定义操作选项
typedef enum
{
	QUIT,
	ADD,
	DEL,
	FIND,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
}OPER_ENUM;

#define MAX_CONTACT_SIZE 1000
#define MAX_NAME_SIZE 20
#define MAX_ADDR_SIZE 256

//定义人员信息结构
typedef struct PersonInfo
{
	char name[MAX_NAME_SIZE];
	char sex[3];
	char tel[12];
	char addr[MAX_ADDR_SIZE];
	short age;
}PersonInfo;

//定义通讯录结构
typedef struct Contact
{
	PersonInfo data[MAX_CONTACT_SIZE];
	size_t   size;//用于记录通讯录中人员的个数
}Contact;

//////////////////////////////////////////////////
//函数声明
void InitContact(Contact *pct);//初始化通讯录
void AddContact(Contact *pct);
void ShowContact(Contact *pct);
void FindContact(Contact *pct);
void DelContact(Contact *pct);
void DodifyContact(Contact *pct);
void ClearContact(Contact *pct);
void SortContact(Contact *pct);

#endif /*_CONTACT_H_*/
